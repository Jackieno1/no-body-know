/* verilator lint_off UNUSED */
module ImmGen #(parameter Width=32)(
	input logic [Width-1:0] inst,
	input logic [2:0]ImmSel,
	output logic [Width-1:0] imm
);
always_comb begin
 case(ImmSel)
 3'b000:imm = {{20{inst[31]}},inst[31:20]}; 		     // I,lw,jalr
 3'b001:imm = {{20{inst[31]}},inst[31:25],inst[11:7]}; // sw offset
 3'b010:imm = {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}; // branch imm
 3'b011:imm = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};//jal imm
 3'b100:imm = {{inst[31:12]},{12{1'b0}}}; // U
 3'b101:imm = {{27{1'b0}},inst[24:20]}; // srli,slli,srai
  
 default: 		imm = 32'b0;
 endcase
end
/* verilator lint_on UNUSED */
endmodule
  		 
