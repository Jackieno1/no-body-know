module Forwarding_ID (
	input logic [4:0] rs1_ID,rs2_ID,rd_EX,rd_MEM,
	input logic [2:0] op,
	output logic th1,th2_1,th2_2 
);
always_comb begin
	if(((rs1_ID == rd_EX) || (rs2_ID == rd_EX)) && (op == 3'b110) && (rd_EX != 5'b0)) begin
		th1 = 1'b1;
		th2_1 = 1'b0;
		th2_2 = 1'b0;
	end else
	if((rs1_ID == rd_MEM)  && (op == 3'b110)&& (rd_MEM != 5'b0)) begin
		th1=1'b0;
		th2_1=1'b1;
		th2_2 =1'b0;
	end else if ((rs2_ID == rd_MEM)  && (op == 3'b110)&& (rd_MEM != 5'b0)) begin
		th1=1'b0;
		th2_1=1'b0;
		th2_2=1'b1;
	end else begin
		th1=1'b0;
		th2_1=1'b0;
		th2_2=1'b0;
	end
end
endmodule
