module mux3to1 #(parameter Width=32)(
	input logic [Width-1:0] zero,one,two,
	input logic [1:0] Sel,

	output logic [Width-1:0] outmux
);
always_comb begin
	case(Sel)
	 2'b00: outmux = zero;
	 2'b01: outmux = one;
	 2'b10: outmux = two;
	 default: outmux = '0;
	endcase
end
endmodule
