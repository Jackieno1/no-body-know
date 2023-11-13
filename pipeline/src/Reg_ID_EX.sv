/* verilator lint_off MULTITOP */
module Reg_ID_EX #(parameter Width=32)(
/* verilator lint_on MULTITOP */
	//inputs
	input logic clk_i,rst_ni,
	input logic PCSel_ID, //WB flags
	input logic [1:0]WBSel_ID,//WB flags
	input logic st_en_ID,SB_ID,SH_ID, // Mem flag
	input logic ASel_ID,BSel_ID,BrUn_ID,ALUSel_ID,LB_ID,LH_ID,LBU_ID,LHU_ID,ra_signal_ID, // EX flag
	input logic [2:0]ALUop_ID,//EX flag
	input logic RegWEn_ID, // ID flag
	input logic [2:0]ImmSel_ID,//ID flag
	input logic [Width-1:0] pc_ID,DataA_ID,DataB_ID,imm_ID,inst_ID,

	//outputs
	output logic PCSel_EX,st_en_EX,SB_EX,SH_EX,ASel_EX,BSel_EX,RegWEn_EX,
					BrUn_EX,ALUSel_EX,LB_EX,LH_EX,LBU_EX,LHU_EX,ra_signal_EX,
	output logic [1:0] WBSel_EX,
	output logic [2:0]ALUop_EX,ImmSel_EX,
	output logic [Width-1:0] pc_EX,DataA_EX,DataB_EX,imm_EX,inst_EX
);
always_ff @(posedge clk_i) begin
 if(~rst_ni) begin
 // control signal
 	RegWEn_EX   <= 1'b0;
 	ImmSel_EX	<= 3'b0;
 	ALUop_EX	<= 3'b0;
	WBSel_EX 	<= 2'b0;
	PCSel_EX 	<= 1'b0;
	st_en_EX 	<= 1'b0;
	SB_EX	 	<= 1'b0;
	SH_EX	 	<= 1'b0;
	ASel_EX  	<= 1'b0;
	BSel_EX  	<= 1'b0;
	BrUn_EX	 	<= 1'b0;
	ALUSel_EX	<= 1'b0;
	LB_EX 	 	<= 1'b0;
	LH_EX    	<= 1'b0;
	LBU_EX  	<= 1'b0;
	LHU_EX	 	<= 1'b0;
	ra_signal_EX<= 1'b0;
 // data	
 	pc_EX    <= {Width{1'b0}};
 	DataA_EX <= {Width{1'b0}};
 	DataB_EX <= {Width{1'b0}};
 	imm_EX   <= {Width{1'b0}};
 	inst_EX  <= {Width{1'b0}};
 end else begin
 	RegWEn_EX	<= RegWEn_ID;
 	ImmSel_EX	<= ImmSel_ID;
 	ALUop_EX 	<= ALUop_ID;
 	WBSel_EX 	<= WBSel_ID;
	PCSel_EX 	<= PCSel_ID;
	st_en_EX 	<= st_en_ID;
	SB_EX	 	<= SB_ID;
	SH_EX	 	<= SH_ID;
	ASel_EX  	<= ASel_ID;
	BSel_EX  	<= BSel_ID;
	BrUn_EX	 	<= BrUn_ID;
	ALUSel_EX	<= ALUSel_ID;
	LB_EX 	 	<= LB_ID;
	LH_EX    	<= LH_ID;
	LBU_EX   	<= LBU_ID;
	LHU_EX	 	<= LHU_ID;
	ra_signal_EX<= ra_signal_ID;
	
 	pc_EX    <= pc_ID;
 	DataA_EX <= DataA_ID;
 	DataB_EX <= DataB_ID;
 	imm_EX   <= imm_ID;
 	inst_EX  <= inst_ID; 
 end
end
endmodule: Reg_ID_EX
