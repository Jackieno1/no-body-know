module Reg_EX_MEM #(parameter Width=32)(
	//inputs

	input logic clk_i,rst_ni,
	input logic RegWEn_EX,
	input logic [1:0]WBSel_EX,//WB flags
	input logic st_en_EX,SB_EX,SH_EX, // Mem flag

	input logic [Width-1:0] pc_EX,alu,inst_EX,outmux_fb,
	//outputs	

	output logic RegWEn_MEM,
	output logic [1:0]WBSel_MEM,
	output logic st_en_MEM,SB_MEM,SH_MEM,

	output logic [Width-1:0] pc_MEM,alu_MEM,inst_MEM,outmux_fb_MEM,
	input logic LBU_EX,LHU_EX,LB_EX,LH_EX,
	output logic LBU_MEM,LHU_MEM,LB_MEM,LH_MEM
);
always_ff @(posedge clk_i) begin
	if(~rst_ni) begin
		RegWEn_MEM<= 1'b0;
		WBSel_MEM <= 2'b0;
		st_en_MEM <= 1'b0;
		SB_MEM 	  <= 1'b0;
		SH_MEM	  <= 1'b0;
		pc_MEM 	  <= {Width{1'b0}};
		alu_MEM   <= {Width{1'b0}};
//		outmux_MEM <= {Width{1'b0}};
		inst_MEM  <= {Width{1'b0}};
		outmux_fb_MEM  <= {Width{1'b0}};
		LBU_MEM <= 1'b0;
		LHU_MEM <= 1'b0;
		LB_MEM <= 1'b0;
		LH_MEM <= 1'b0;
	end else begin
		RegWEn_MEM<= RegWEn_EX;
		WBSel_MEM <= WBSel_EX;
		st_en_MEM <= st_en_EX;
		SB_MEM 	  <= SB_EX;
		SH_MEM	  <= SH_EX;
		pc_MEM 	  <= pc_EX;
		alu_MEM   <= alu;
		LBU_MEM <= LBU_EX;
		LHU_MEM <= LHU_EX;
		LB_MEM <= LB_EX;
		LH_MEM <= LH_EX;
//		outmux_MEM <= outmux;
		inst_MEM  <= inst_EX;
		outmux_fb_MEM  <= outmux_fb;		
	end
end
endmodule: Reg_EX_MEM
