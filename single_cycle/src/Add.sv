module Add #(parameter Width = 32) (
	input logic  [Width - 1:0 ] pc,
	output logic [Width - 1:0 ] pc_update
);
always_comb begin			// perform addition with 4 every clock to reach to new instruction
 pc_update = pc + 32'h4;
end
endmodule
