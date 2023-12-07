module BTB ( 
input logic [2:0] op,// ( dùng để ghi vào cache, nối với dây báo có branch ở tầng EX)
input logic PCSel_EX, // nối với dây br_comp, để bik nhảy đúng hay là nhảy sai
input logic [31:0] pc_predict_write_i , // ( pc + immem của tầng excutute)
/* verilator lint_off UNUSED */
input logic [13:0] IM_address_i  ,// (địa chỉ của pc lưu cái lệnh nhảy tại tầng EX) 
input logic [31:0] pc_current_i  , // địa chỉ hiện tại của Intruction ở tầng IF
/* verilator lint_on UNUSED */
output logic taken , // predict taken with 2 bit 
output logic flag_br ,  // regcornize that branch have bracnch instruction 
output logic [3:0] tag , //  pc [13:10] 
output logic [31:0] pc_predicted, // trả giá trị pc để nhảy khi lặp lại địa chỉ này 
output logic test,
input rst_ni ,
input clk_i
);

logic [38:0] mem_BTB [255:0] ; // (9-2) bit address contain 32 bit predict + 4 bit tag[36:33] + 1 flag[32] + 2 predict [38:37]
logic br_write_en_i;
always_ff @(posedge clk_i) begin 
	if (~rst_ni) begin 
		mem_BTB <= '{256{39'd0}} ; 
	end 
	else begin
	if(op == 3'b110 )
		br_write_en_i <= 1'b1;
	else
		br_write_en_i <= 1'b0; 
		if (br_write_en_i)  begin 
			mem_BTB [IM_address_i[9:2]][31:0] <= pc_predict_write_i ; 
			mem_BTB [IM_address_i[9:2]][36:33] <= IM_address_i [13:10] ; 
			mem_BTB [IM_address_i[9:2]][32] <= 1'b1 ; /// bit 32 is flag to know it 
			// cập nhật BTH 
		end 
// cap nhat BTH
		if ( ~PCSel_EX)
			mem_BTB[IM_address_i[9:2]][38:37] <= 2'b00; 
		else
			mem_BTB[IM_address_i[9:2]][38:37] <= 2'b11;
		end
end 
always_comb begin 
	pc_predicted = mem_BTB [pc_current_i[9:2]][31:0] ; 
	tag  = mem_BTB [pc_current_i[9:2]][36:33] ; 
	flag_br = mem_BTB [pc_current_i[9:2]][32]; 
	taken = mem_BTB[pc_current_i[9:2]][38]; 
end 
assign test =  br_write_en_i;
initial begin 
mem_BTB = '{256{39'd0}}; 
end 

endmodule 
