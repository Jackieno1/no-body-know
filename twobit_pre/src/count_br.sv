module count_br(
	input logic clk_i,rst_ni,
	input logic [2:0] op_ex,
	output logic [31:0] number
);
logic [31:0] no_br_temp;
always_ff @(posedge clk_i) begin
	if(~rst_ni)
		no_br_temp <= 32'b0;
	else if(op_ex == 3'b110)
		no_br_temp <= no_br_temp + 32'b1;
end
assign number = no_br_temp;
endmodule
