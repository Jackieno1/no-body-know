module mux2to1 #(parameter Width=32)(
	input logic [Width-1:0] first,second,
	input logic Sel,
	output logic  [Width-1:0] outmux
);
assign outmux = (Sel) ? second : first;
endmodule
