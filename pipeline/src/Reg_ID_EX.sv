/* verilator lint_off MULTITOP */
module Reg_ID_EX #(parameter Width=32)(
/* verilator lint_on MULTITOP */
	//inputs
	//signals
	input logic clk_i,rst_ni,flush,
	input logic RegWEn, //WB flag
	input logic [1:0]WBSel_ID,//WB flags
	input logic st_en_ID,SB_ID,SH_ID, // Mem flag
	input logic BrUn_ID,ASel,BSel,PCSel, // EX flag
	input logic [2:0] ALUop,//EX flag


	//datas
	input logic [Width-1:0] pc_ID,DataA_ID,DataB_ID,imm_ID,inst_ID,

	//outputs
	output logic RegWEn_EX,st_en_EX,SB_EX,SH_EX,
				 BrUn_EX,ASel_EX,BSel_EX,PCSel_EX,
	output logic [1:0] WBSel_EX,
	output logic [2:0] ALUop_EX,
	output logic [Width-1:0] pc_EX,DataA_EX,DataB_EX,imm_EX,inst_EX
);
always_ff @(posedge clk_i) begin
 if(~rst_ni || flush) begin
 // control signal
	PCSel_EX	<= 1'b0;
 	RegWEn_EX	<= 1'b0;
	WBSel_EX 	<= 2'b0;
	st_en_EX 	<= 1'b0;
	SB_EX	 	<= 1'b0;
	SH_EX	 	<= 1'b0;
	ASel_EX  	<= 1'b0;
	BSel_EX  	<= 1'b0;
	BrUn_EX	 	<= 1'b0;
	ALUop_EX	<= 3'b0;

 // data	
 	pc_EX    <= {Width{1'b0}};
 	DataA_EX <= {Width{1'b0}};
 	DataB_EX <= {Width{1'b0}};
 	imm_EX   <= {Width{1'b0}};
 	inst_EX  <= {Width{1'b0}};
 end else begin
 	PCSel_EX	<= PCSel;
 	RegWEn_EX	<= RegWEn;
 	WBSel_EX 	<= WBSel_ID;
	st_en_EX 	<= st_en_ID;
	SB_EX	 	<= SB_ID;
	SH_EX	 	<= SH_ID;
	ASel_EX  	<= ASel;
	BSel_EX  	<= BSel;
	BrUn_EX	 	<= BrUn_ID;
	ALUop_EX 	<= ALUop;
	
 	pc_EX    <= pc_ID;
 	DataA_EX <= DataA_ID;
 	DataB_EX <= DataB_ID;
 	imm_EX   <= imm_ID;
 	inst_EX  <= inst_ID; 
 end
end
endmodule: Reg_ID_EX
