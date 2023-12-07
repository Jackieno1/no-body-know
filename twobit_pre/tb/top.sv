
module top
(
  // Peripheral
  input  logic [31:0]      io_sw_i   ,
  output logic [31:0]      io_lcd_o  ,
  output logic [31:0]      io_ledg_o ,
  output logic [31:0]      io_ledr_o ,
  output logic [31:0]      io_hex0_o ,
  output logic [31:0]      io_hex1_o ,
  output logic [31:0]      io_hex2_o ,
  output logic [31:0]      io_hex3_o ,
  output logic [31:0]      io_hex4_o ,
  output logic [31:0]      io_hex5_o ,
  output logic [31:0]      io_hex6_o ,
  output logic [31:0]      io_hex7_o ,

  output logic [31:0]      pc_debug_o,
  output logic br_comp_o,
  output logic [31:0] fix_wb_o,
  // Clock and asynchronous reset active low
  input  logic             clk_i     ,
  input  logic             rst_ni
);

  Main_design singleCycle (
    .io_sw_i   (io_sw_i   ),
    .io_lcd_o  (io_lcd_o  ),
    .io_ledg_o (io_ledg_o ),
    .io_ledr_o (io_ledr_o ),
    .io_hex0_o (io_hex0_o ),
    .io_hex1_o (io_hex1_o ),
    .io_hex2_o (io_hex2_o ),
    .io_hex3_o (io_hex3_o ),
    .io_hex4_o (io_hex4_o ),
    .io_hex5_o (io_hex5_o ),
    .io_hex6_o (io_hex6_o ),
    .io_hex7_o (io_hex7_o ),
    .pc_debug_o(pc_debug_o),
    .br_comp_o (br_comp_o),
    .fix_wb_o (fix_wb_o),
    .clk_i     (clk_i     ),
    .rst_ni    (rst_ni    )
  );

endmodule : top