module Reg_IF_ID #(parameter Width=32)(
	//inputs
	input logic clk_i,rst_ni,
	input logic [Width-1:0] pc,inst,

	//output
	output logic [Width-1:0]pc_id,inst_id
);
always_ff @(posedge clk_i) begin
 if(~rst_ni) begin
 	pc_id <= {Width{1'b0}};
 	inst_id <= {Width{1'b0}};
 end else begin
	pc_id <= pc;
	inst_id <= inst;
end
end
endmodule: Reg_IF_ID
