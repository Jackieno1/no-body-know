module LSU #(parameter Width = 32 ) (
input logic[11:0] addr, // alu
input logic[Width-1:0] st_data, // dataB
input logic[Width-1:0] io_sw,
input logic [1:0]s_type, //control_signal[10:11] sb sh sw
output logic [Width-1:0] ld_data, // 32bit data out
output logic [Width-1:0] io_lcd,io_ledg,io_ledr, 
output logic [Width-1:0] io_hex0,io_hex1,io_hex2,io_hex3,io_hex4,io_hex5,io_hex6,io_hex7,
input logic st_en, // read write enable
input logic rst_ni,
input logic clk_i
);
 // 4096Byte for byte-addresses => assign 4096/4 slot to contains 4 byte data
 // 4094 : 4 = 1024 slots
logic [3:0] st_sel_i; // all = 1
logic [3:0][7:0] data [0:1023] = '{1024{32'h0}} ;
logic [1:0] flag_peri = 2'b0 ; // 0 is input peripheral, 1 is reserse ,2 is ouput peripheral. 
/* verilator lint_off UNUSED */
  logic [1:0]trash;
  assign trash = addr[1:0];
  
 /* verilator lint_on UNUSED */

  always_ff @(posedge clk_i) begin : proc_data
  if(~rst_ni) 
   data [0:1023] <= '{1024{32'h0}} ;
  else
  data[320] <= io_sw;  // 0x900 >> 2 = 576
  if (flag_peri == 2'd2) begin // output peripheral and data memory which store value
     if (st_en) begin
    // with 32 bit data, bitmask has 3 bits
    // in order to decide write 1 byte, 2 bytes or 4 bytes
      if (st_sel_i[0]) begin
      // take bit 12:2 mean shift to left >> 2, mean divide 4
        data[addr[11:2]][0] <= st_data[ 7: 0];
      end
      if (st_sel_i[1]) begin
        data[addr[11:2]][1] <= st_data[15: 8];
      end
      if (st_sel_i[2]) begin
        data[addr[11:2]][2] <= st_data[23:16];
      end
      if (st_sel_i[3]) begin
        data[addr[11:2]][3] <= st_data[31:24];
      end
  end 
  else // else is input peripheral and reserse, cannot store value
    begin 
  	   data[addr[11:2]] <=  data[addr[11:2]] ; 
    end 
  end
end
always_comb 
begin 
// decode store_data base on flag sb sh sw
	case(s_type)
	2'b10: st_sel_i = 4'b0001;//sb
	2'b01: st_sel_i = 4'b0011;//sh
	default: st_sel_i = 4'b1111; //sw
	endcase
// distrisbute flag_peri to know what component part memory
	case(addr[11:8])
  	4'hf: flag_peri = 2'd1; 
  	4'he: flag_peri = 2'd1; 
  	4'hd: flag_peri = 2'd1; 
  	4'hc: flag_peri = 2'd1; 
  	4'hb: flag_peri = 2'd1; 
  	4'ha: flag_peri = 2'd1; 
  	4'h9: flag_peri = 2'd1; 
  	4'h8: flag_peri = 2'd0; // input 
  	default: flag_peri = 2'd2; // other signal
  	endcase
	
	if (flag_peri == 2'd1) begin 
	ld_data = 'x; // don't care
	end 
	else 
	begin
	ld_data = data[addr[11:2]]; 
	end
  	//specify output sperical to outside
  	//specify output sperical to outside
io_lcd    = data[296];  // 0x490 >> 2 = 292
io_ledg   = data[292];  // 0x480 >> 2 = 288
io_ledr   = data[288];  // 0x470 >> 2 = 284
io_hex7 = data[284];  // 0x460 >> 2 = 280
io_hex6 = data[280];  // 0x450 >> 2 = 276
io_hex5 = data[276];  // 0x440 >> 2 = 272
io_hex4 = data[272];  // 0x430 >> 2 = 268
io_hex3 = data[268];  // 0x420 >> 2 = 264
io_hex2 = data[264];  // 0x410 >> 2 = 260
io_hex1 = data[260];  // 0x400 >> 2 = 256
io_hex0 = data[256];  // 0x400 >> 2 = 256end 
end
endmodule
