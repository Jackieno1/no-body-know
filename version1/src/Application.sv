`include "../src/decoder_LCD.sv"
`include "../src/Main_design.sv"
module Application(
	input logic[17:0] io_sw_i,  
	output logic[11:0] io_lcd_o,
   output logic[7:0]	io_ledg_o,
	output logic[17:0]io_ledr_o,
	output logic[6:0] io_hex0_o,
							io_hex1_o,
							io_hex2_o,
							io_hex3_o,
							io_hex4_o,
							io_hex5_o,
							io_hex6_o,
							io_hex7_o,
	output logic[31:0]pc_debug_o,
	input logic clk_i,rst_ni // << clock gắn key0 
);

 logic [31:0]			sw_temp, 
							lcd_temp,
							ledg_temp,
							ledr_temp,
							hex0_temp,
							hex1_temp,
							hex2_temp,
							hex3_temp,
							hex4_temp,
							hex5_temp,
							hex6_temp,
							hex7_temp; 
 
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
 logic [57:0] unused;
assign unused = |{ledg_temp[31:8],ledr_temp[31:18],lcd_temp[30:11]} ; 
/* verilator lint_on WIDTH */
 /* verilator lint_on UNUSED */

always_comb 
begin

// peripheral inter
sw_temp = {14'd0,io_sw_i} ; 
io_lcd_o ={lcd_temp[31],lcd_temp[10:0]} ; 
io_ledg_o = ledg_temp[7:0]; 
io_ledr_o = ledr_temp[17:0];
end
 
decoder_LCD s0(.hex_i(hex0_temp), .hex_o(io_hex0_o)); 
decoder_LCD s1(.hex_i(hex1_temp), .hex_o(io_hex1_o));
decoder_LCD s2(.hex_i(hex2_temp), .hex_o(io_hex2_o));
decoder_LCD s3(.hex_i(hex3_temp), .hex_o(io_hex3_o));
decoder_LCD s4(.hex_i(hex4_temp), .hex_o(io_hex4_o));
decoder_LCD s5(.hex_i(hex5_temp), .hex_o(io_hex5_o));
decoder_LCD s6(.hex_i(hex6_temp), .hex_o(io_hex6_o));
decoder_LCD s7(.hex_i(hex7_temp), .hex_o(io_hex7_o));

Main_design s8(
	.io_sw_i(sw_temp),
	.io_lcd_o(lcd_temp),
	.io_ledg_o(ledg_temp),
	.io_ledr_o(ledr_temp),
	.io_hex0_o(hex0_temp),
	.io_hex1_o(hex1_temp),
	.io_hex2_o(hex2_temp),
	.io_hex3_o(hex3_temp),
	.io_hex4_o(hex4_temp),
	.io_hex5_o(hex5_temp),
	.io_hex6_o(hex6_temp),
	.io_hex7_o(hex7_temp),
	.pc_debug_o(pc_debug_o),
	.clk_i(clk_i),
	.rst_ni(rst_ni)
);

endmodule 
