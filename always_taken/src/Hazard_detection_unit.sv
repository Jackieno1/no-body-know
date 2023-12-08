/* verilator lint_off MULTITOP */
module Hazard_detection_unit (
/* verilator lint_on MULTITOP */
	//inputs
//	input logic [1:0] WBSel_EX,
/* verilator lint_off UNUSED */
	input logic PCSel_EX,th1,
	input logic [4:0] rd_EX,rs1_ID,rs2_ID,rd_MEM,rs1_EX,rs2_EX,rd_WB,
	input logic [6:0] op_ex,op_id,
	input logic [31:0] pc_ID,alu,pc_EX,
/* verilator lint_on UNUSED */
	//outputs
	output logic stall_PC,stall_ID,flush_EX,flush_ID,
	output logic  comp_o,
	output logic  [31:0] PC_jump_EX
);
logic [31:0] temp;
logic temp_p1,temp_p2,temp_p3;
logic temp_i1,temp_i2,temp_i3;
logic flush_id1,flush_id2,flush_id3;
logic flush_ex1,flush_ex2,flush_ex3;
always_comb begin
	case(PCSel_EX)
		1'b1: temp = alu;
		1'b0: temp = pc_EX + 32'h4;
		default: temp = 32'b0;
	endcase
//lw stall
	if(((rs1_ID == rd_EX) || (rs2_ID == rd_EX)) && (op_ex == 7'b0000011)) begin
		temp_p1 = 1'b1;
		temp_i1 = 1'b1;
		flush_id1 = 1'b0;
		flush_ex1  = 1'b1; 
	end else begin
		temp_p1 = 1'b0;
		temp_i1 = 1'b0;
		flush_id1 = 1'b0;
		flush_ex1  = 1'b0; 		
	end
// stall branch sat nhau
	if(th1) begin
		temp_p2 = 1'b1;
		temp_i2 = 1'b1;
		flush_id2 = 1'b0;
		flush_ex2 = 1'b1;
	end else begin
		temp_p2 = 1'b0;
		temp_i2 = 1'b0;
		flush_id2 = 1'b0;
		flush_ex2 = 1'b0;			
	end
//compare de fix		
	if(op_ex[6:4] != 3'b110)  begin
		comp_o = 1'b0;
		temp_p3 = 1'b0;
		temp_i3 = 1'b0;
	    flush_id3 = 1'b0;
		flush_ex3 = 1'b0;	
	end else
		if(temp == pc_ID) begin
		comp_o = 1'b0;
		temp_p3 = 1'b0;
		temp_i3 = 1'b0;
	    flush_id3 = 1'b0;
		flush_ex3 = 1'b0;
	end else begin
		comp_o = 1'b1;
		temp_p3 = 1'b0;
		temp_i3 = 1'b0;
		flush_id3 = 1'b1;
		flush_ex3 = 1'b1;
	end

PC_jump_EX = temp; 
	
end
assign stall_PC = temp_p1 | temp_p2 | temp_p3;
assign stall_ID = temp_i1 | temp_i2 | temp_i3;
assign flush_EX = flush_ex1 | flush_ex2 | flush_ex3;
assign flush_ID = flush_id1 | flush_id2 | flush_id3;
endmodule
