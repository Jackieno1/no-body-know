module fix_alu #(parameter Width=32)(
	input logic [Width-1:0] alu,
	input logic PCSel,
	output logic [Width-1:0] fix
);
always_comb begin
	if(PCSel)
		fix = alu + 4;
	else
		fix = alu;
end
endmodule
