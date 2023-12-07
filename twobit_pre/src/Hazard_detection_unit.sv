/* verilator lint_off MULTITOP */
module Hazard_detection_unit (
/* verilator lint_on MULTITOP */
	//inputs
//	input logic [1:0] WBSel_EX,
/* verilator lint_off UNUSED */
	input logic PCSel_EX,th1,th2,
	input logic [4:0] rd_EX,rs1_ID,rs2_ID,rd_MEM,rs1_EX,rs2_EX,rd_WB,
	input logic [6:0] op_ex,op_id,
	input logic [31:0] pc_ID,alu,pc_EX,
/* verilator lint_on UNUSED */
	//outputs
	output logic stall_PC,stall_ID,flush_ID_EX,flush_IF_ID,
	output logic  comp_o,
	output logic  [31:0] PC_jump_EX
);
logic [31:0] temp;
always_comb begin

case(PCSel_EX)
	1'b1: temp = alu;
	1'b0: temp = pc_EX + 32'h4;
	default: temp = 32'b0;
endcase
	if(((rs1_ID == rd_EX) || (rs2_ID == rd_EX)) && (op_ex == 7'b0000011)) begin
		stall_PC = 1'b1;
		stall_ID = 1'b1;
	//	flush_ID_EX  = 1'b1; 
	end else begin
		stall_PC = 1'b0;
		stall_ID = 1'b0;
	//	flush_ID_EX  = 1'b0; 		
	end
	if((( (rs1_ID == rd_EX) || (rs2_ID == rd_EX)) && (op_id[6:4] == 3'b110)) 
				&& (rs1_ID != 5'd0) && (rs2_ID != 5'd0)) begin
		stall_PC = 1'b1;
		stall_ID = 1'b1;
	//	flush_ID_EX  = 1'b1; 
	end else begin
		stall_PC = 1'b0;
		stall_ID = 1'b0;
	//	flush_ID_EX  = 1'b0; 		
	end

/*	if(((rs1_ID == rd_MEM) || (rs2_ID == rd_MEM)) && (op_id[6:4] == 3'b110))  begin
		stall_PC = 1'b1;
		stall_ID = 1'b1;
	end else begin
		stall_PC = 1'b0;
		stall_ID = 1'b0;	
	end
*/
	/*
	if(((rs1_EX == rd_WB) || (rs2_EX == rd_WB)) && (op_id[6:4] == 3'b110)) begin
		stall_PC = 1'b1;
		stall_ID = 1'b1;
	end else begin
		stall_PC = 1'b0;
		stall_ID = 1'b0;	
	end	
	*/
/*	
	if(op == 7'b1101111)begin
		flush_IF_ID = 1'b1;
		flush_ID_EX = 1'b1;
	end else begin
		flush_IF_ID = 1'b0;
		flush_ID_EX = 1'b0;
	end
	if(PCSel_EX)
		flush_ID_EX = 1'b1;
	else
		flush_ID_EX = 1'b0;
	*/

		
	if(op_ex[6:4] != 3'b110)  begin
		comp_o = 1'b0;
	flush_ID_EX = 1'b0;
		flush_IF_ID = 1'b0;	
	end else
		if(temp == pc_ID) begin
		comp_o = 1'b0;
	flush_ID_EX = 1'b0;
		flush_IF_ID = 1'b0;
	end else begin
		comp_o = 1'b1;
		flush_ID_EX = 1'b1;
		flush_IF_ID = 1'b1;
	end
if(stall_PC && stall_ID)
	flush_ID_EX = 1'b1;
else
	flush_ID_EX = 1'b0;
PC_jump_EX = temp; 
	
end
endmodule
