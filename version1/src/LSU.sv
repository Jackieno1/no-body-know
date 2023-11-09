module LSU #(parameter Width = 32 ) (
input logic[11:0] addr, // alu
input logic[Width-1:0] st_data, // dataB
input logic[Width-1:0] io_sw,
/* verilator lint_off UNUSED */
input logic [1:0]s_type, //control_signal[10:11] sb sh sw
/* verilator lint_on UNUSED */
output logic [Width-1:0] ld_data, // 32bit data out
output logic [Width-1:0] io_lcd,io_ledg,io_ledr, 
output logic [Width-1:0] io_hex0,io_hex1,io_hex2,io_hex3,io_hex4,io_hex5,io_hex6,io_hex7,
/* verilator lint_off UNUSED */
input logic st_en, // read write enable
input logic rst_ni,
input logic clk_i
/* verilator lint_on UNUSED */
);
 // 4096Byte for byte-addresses => assign 4096/4 slot to contains 4 byte data
 // 4094 : 4 = 1024 slots
logic   [31:0] data[0:576]  =  '{577{32'h0}};

//logic [1:0] flag_peri = 2'b0 ; // 0 is input peripheral, 1 is reserse ,2 is ouput peripheral. 
/* verilator lint_off UNUSED */
  logic unused;
  assign unused = |addr[1:0];
 /* verilator lint_on UNUSED */

  always_ff @(posedge clk_i) begin : proc_data
	if (st_en) begin 
	 		if ( addr[11:2] != 10'd576  )  // can't store data at x900
	 	data[addr[11:2]]<= st_data ; 
	 end 
	 	data[576] <= io_sw ;
end	 
always_comb 
begin 
ld_data =   data[addr[11:2]] ; 
io_lcd    = data[552]; //0x8A0 slot 
io_ledg   = data[548]; //0x890 slot
io_ledr   = data[544];//0x880 slot
io_hex7 = data[540];//0x870 slot
io_hex6 = data[536];//0x860 slot
io_hex5 = data[532];//0x850 slot
io_hex4 = data[528];//0x840 slot
io_hex3 = data[524];//0x830 slot
io_hex2 = data[520];//0x820 slot
io_hex1 = data[516];//0x810 slot
io_hex0 = data[512];//0x800 slot
end 


endmodule
