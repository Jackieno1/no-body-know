/* verilator lint_off MULTITOP */
module Forwarding (
/* verilator lint_on MULTITOP */
	//inputs
	input logic [4:0] rs1_EX,rs2_EX,rd_MEM,rd_WB,
	input logic ASel_EX,
	input logic RegWen_MEM,RegWen_WB,

	//output logic 
	output logic [1:0] forwardA_EX,forwardB_EX
);
always_comb begin
// Forwarding A
	if((RegWen_MEM && (rs1_EX==rd_MEM)) && (rs1_EX != 5'b0))
		forwardA_EX = 2'b11;
	else if ((RegWen_WB && (rs1_EX==rd_WB)) && (rs1_EX != 5'b0) && (ASel_EX == 1'b0))
		forwardA_EX = 2'b10;
	else 
		forwardA_EX = {1'b0,ASel_EX};

// Forwarding B
	if((RegWen_MEM && (rs2_EX==rd_MEM)) && (rs2_EX != 5'b0))
		forwardB_EX = 2'b11;
	else if ((RegWen_WB && (rs2_EX==rd_WB)) && (rs2_EX != 5'b0) )
		forwardB_EX = 2'b10;
	else 
		forwardB_EX = 2'b00;
end
endmodule: Forwarding
