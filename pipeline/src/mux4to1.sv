module mux4to1 #(parameter Width=32)(
	//inputs
	input logic [Width-1:0] zero,one,two,three,
	input logic [1:0] Sel,

	//outputs
	output logic [Width-1:0] outmux
);
always_comb begin
	case(Sel) 
		2'b11: outmux = three;
		2'b10: outmux = two;
		2'b01: outmux = one;
		2'b00: outmux = zero;
		default: outmux= '0;
	endcase
end
endmodule
