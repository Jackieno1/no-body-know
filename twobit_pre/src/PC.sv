module PC #(parameter Width = 32) (
	input  logic  clk_i,pc_en,rst_ni,
	input  logic  [Width - 1:0] pc_i,
	output logic  [Width - 1:0] pc  
);
always_ff @(posedge clk_i) begin
 if(~rst_ni)
	pc <= '0;
 else if(pc_en == 1'b0)
  pc <= pc_i;
 else
  pc <= pc;
end
endmodule: PC
