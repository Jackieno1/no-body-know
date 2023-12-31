module Reg_MEM_WB #(parameter Width=32)(
	//inputs
	input logic clk_i,rst_ni,
	input logic RegWen_MEM,
	input logic [1:0] WBSel_MEM,
	input logic [Width-1:0] pc_MEMp4,alu_MEM,dataR,inst_MEM,

	//outputs
	output logic RegWen_WB,
	output logic [1:0] WBSel_WB,
	output logic [Width-1:0] pc_WBp4,alu_WB,mem_WB,inst_WB,
	input logic LBU_MEM,LHU_MEM, LB_MEM, LH_MEM,
	output logic LBU_WB,LHU_WB,LB_WB,LH_WB
);
always_ff @(posedge clk_i) begin
	if(~rst_ni) begin
		RegWen_WB <= 1'b0;	
		WBSel_WB  <= 2'b0;
		pc_WBp4   <= {Width{1'b0}};
		alu_WB    <= {Width{1'b0}};
		mem_WB	  <= {Width{1'b0}};
		inst_WB   <= {Width{1'b0}};
		LBU_WB <= 1'b0;
		LHU_WB <= 1'b0;
		LB_WB <= 1'b0;
		LH_WB <= 1'b0;
	end else begin
		RegWen_WB <= RegWen_MEM;
		WBSel_WB  <= WBSel_MEM;
		pc_WBp4   <= pc_MEMp4;
		alu_WB    <= alu_MEM;
		mem_WB	  <= dataR;
		inst_WB   <= inst_MEM;
				LBU_WB <= LBU_MEM;
				LHU_WB <= LHU_MEM;
				LB_WB <= LB_MEM;
				LH_WB <= LH_MEM;
	end
end
endmodule: Reg_MEM_WB
