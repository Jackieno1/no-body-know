module target_table #(parameter Width = 32)(
	//inputs
	input logic [Width-1:0] PC_id,imm,
	input logic [2:0]op,
	input logic clk_i,

	//outputs
	output logic tag_o [3]
	output logic [Width-1:0] predicted_pc_o
);
logic [36:0] buffer_addr[256:0]; /// 4 bit tag + 32 bit predict
logic [4:0] tag; 
logic [31:0]temp; 
always_comb begin 
	temp = PC_id +imm;
end 
always_ff @(posedge clk_i) begin
	if(op == 3'b110)
	buffer_address[PC_id[8:2]] = {PC_id[13:9],temp } 
end
endmodule		
		
