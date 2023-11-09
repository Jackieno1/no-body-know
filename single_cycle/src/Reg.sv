module Reg #(parameter Width = 32)(
	input logic [Width-1:0] Data_in,
	output logic [Width-1:0] Data_out,
	input logic clk_i,rst_ni,write_en
);
always_ff @(posedge clk_i) begin
	if(~rst_ni)
		Data_out <= '0;
	else if (write_en)
		Data_out <= Data_in;
	else 
		Data_out <= Data_out;
end
endmodule
