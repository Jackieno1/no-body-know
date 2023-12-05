/* verilator lint_off MULTITOP */
module Hazard_detection_unit (
/* verilator lint_on MULTITOP */
	//inputs
//	input logic [1:0] WBSel_EX,
/* verilator lint_off UNUSED */
	input logic PCSel_EX,
/* verilator lint_on UNUSED */
	input logic [4:0] rd_EX,rs1_ID,rs2_ID,
	input logic [6:0] op,
	input logic [31:0] pc_ID,alu_EX,

	//outputs
	output logic stall_PC,stall_ID,flush_ID_EX,flush_IF_ID,
	output logic  comp_o
);
always_comb begin
	if(((rs1_ID == rd_EX) || (rs2_ID == rd_EX)) && (op == 7'b0000011)) begin
		stall_PC = 1'b1;
		stall_ID = 1'b1;
		flush_ID_EX  = 1'b1; 
	end else begin
		stall_PC = 1'b0;
		stall_ID = 1'b0;
		flush_ID_EX  = 1'b0; 		
	end
	
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
	if(op[6:4] != 3'b110)  begin
		comp_o = 1'b0;
		flush_ID_EX = 1'b0;
		flush_IF_ID = 1'b0;	
	end else
		if(alu_EX == pc_ID) begin
		comp_o = 1'b0;
		flush_ID_EX = 1'b0;
		flush_IF_ID = 1'b0;
	end else begin
		comp_o = 1'b1;
		flush_ID_EX = 1'b1;
		flush_IF_ID = 1'b1;
	end

end
endmodule
