module Add #(parameter Width = 32) (
	input logic  [Width - 1:0 ] h1,h2,
	output logic [Width - 1:0 ] ho
);
always_comb begin			// perform addition with 4 every clock to reach to new instruction
 ho = h1 + h2;
end
endmodule
