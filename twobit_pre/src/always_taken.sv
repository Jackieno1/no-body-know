module always_taken #(parameter Width=32) (
	//inputs
	input logic [Width-1:0] PC_ID,imm,temp_outmux,
	input logic [6:0] op,
	//output
	output logic [Width-1:0] label
);
logic [Width-1:0] outadd;
assign outadd = PC_ID + imm;
always_comb begin
	if(op == 7'b1100011)
		label = outadd;
	else
		label = temp_outmux;
end
endmodule
