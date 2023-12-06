module LSU #(parameter Width = 32 ) (
input logic[11:0] addr, // address memory
input logic[Width-1:0] st_data, // 32 bit data in (data store)
input logic[Width-1:0] io_sw,
input logic [1:0]s_type, //  COMBINATION OF SB AND SH SIGAl , 10 is SB, 01 is SW
output logic [Width-1:0] ld_data, // 32bit data out
output logic [Width-1:0] io_lcd,io_ledg,io_ledr = 32'd0 , 
output logic [Width-1:0] io_hex0,io_hex1,io_hex2,io_hex3,io_hex4,io_hex5,io_hex6,io_hex7 = 32'd0 ,
input logic st_en, // read write enable
input logic rst_ni,
input logic clk_i
);



/* verilator lint_off UNUSED */
  logic unused;
  assign unused = |{addr[1:0],rst_ni,addr[11]};
  logic [31:0]trash;
 /* verilator lint_on UNUSED */
  // Memory with 4096 bytes
logic [31:0] mem [0:511]; // 2KB with byte-address memory => 512 slot words 4 bytes
 
// Output Peripheral Register
logic [Width-1:0] lcd_reg,ledg_reg,ledr_reg; 
logic [Width-1:0] hex0_reg,hex1_reg,hex2_reg,hex3_reg,
			      hex4_reg,hex5_reg,hex6_reg,hex7_reg;
// Input Peripheral Regiser 
logic [Width-1:0] sw_reg ;

always_ff @(negedge clk_i) begin 
if (~rst_ni) begin 
 mem  <= '{512{32'h0}}; 
sw_reg <= 32'd0;
lcd_reg <= 32'd0;
ledg_reg <= 32'd0;
hex0_reg <= 32'd0;
hex1_reg <= 32'd0;
hex2_reg <= 32'd0;
hex3_reg <= 32'd0;
hex4_reg <= 32'd0;
hex5_reg <= 32'd0;
hex6_reg <= 32'd0;
hex7_reg <= 32'd0;
end 
else begin
	sw_reg <= io_sw; 
if (st_en) begin  // st_en 
/* 
	s_type
*/
	if (addr[11]== 1'b0) begin   // addr is 0b0___ __
//__ meaning addr < 0x800
  		if ( s_type == 2'b10 )  // SB => store 8 LSB
		mem[addr[10:2]][7:0] <=  st_data [7:0] ;
 		else if ( s_type == 2'b01 )  // SW  => store 16 LSB
		mem[addr[10:2]][15:0] <=  st_data [15:0] ; 
		else 
		mem[addr[10:2]] <=  st_data ; 
	end 

	else begin 
	  if( addr[10:8] == 3'd000) begin // addr =  0x8__ 
  	 	case (addr[7:4]) 
4'b0000: if ( s_type == 2'b10 ) 
		hex0_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex0_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex0_reg <=  st_data ; 
4'b0001: if ( s_type == 2'b10 ) 
		hex1_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex1_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex1_reg <=  st_data ; 
		
4'b0010: if ( s_type == 2'b10 ) 
		hex2_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex2_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex2_reg <=  st_data ; 
		
4'b0011:  if ( s_type == 2'b10 ) 
		hex3_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex3_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex3_reg <=  st_data ; 
		
4'b0100: if ( s_type == 2'b10 ) 
		hex4_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex4_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex4_reg <=  st_data ; 
		
4'b0101: if ( s_type == 2'b10 ) 
		hex5_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex5_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex5_reg <=  st_data ; 
		
4'b0110:  if ( s_type == 2'b10 ) 
		hex6_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex6_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex6_reg <=  st_data ; 
		
4'b0111: if ( s_type == 2'b10 ) 
		hex7_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		hex7_reg[15:0] <=  st_data [15:0] ; 
		 else 
		hex7_reg <=  st_data ; 
		
4'h8 :  if ( s_type == 2'b10 ) 
		ledr_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		ledr_reg[15:0] <=  st_data [15:0] ; 
		 else 
		ledr_reg <=  st_data ; 
		
4'h9 : if ( s_type == 2'b10 ) 
		ledg_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		ledg_reg[15:0] <=  st_data [15:0] ; 
		 else 
		ledg_reg <=  st_data ; 
		
4'hA :  if ( s_type == 2'b10 )  
		lcd_reg[7:0] <=  st_data [7:0] ;
	 	else if ( s_type == 2'b01 ) 
		lcd_reg[15:0] <=  st_data [15:0] ; 
		 else 
		lcd_reg <=  st_data ; 
		default:trash <= st_data; 
  		endcase
	  end 
	end //end for else begin 
end // end for if (st_en)
end // end for always_ff
end
    always_comb begin
      // Read data from memory
if ( addr == 12'h900 ) 
ld_data = sw_reg; 
else if (addr[11] == 1'd0 ) // meaning address lower x800 => data memory
ld_data = mem[addr[10:2]]; 
else begin
   case (addr[7:4]) 
4'b0000:ld_data =  hex0_reg ;
4'b0001:ld_data =  hex1_reg;
4'b0010:ld_data =  hex2_reg;
4'b0011:ld_data =  hex3_reg;
4'b0100:ld_data =  hex4_reg;
4'b0101:ld_data =  hex5_reg ; 
4'b0110:ld_data =  hex6_reg ;
4'b0111:ld_data =  hex7_reg ;
4'h8 :ld_data =  ledr_reg ;
4'h9 :ld_data =  ledg_reg ;
4'hA :ld_data =  lcd_reg ;
default: ld_data = 32'd0; 
   endcase
end
				
   io_lcd = lcd_reg ; 
   io_ledg = ledg_reg;  
   io_ledr = ledr_reg;
   io_hex7 = hex7_reg;
   io_hex6 = hex6_reg; 
   io_hex5 = hex5_reg ;
   io_hex4 = hex4_reg; 
   io_hex3 = hex3_reg; 
   io_hex2 =hex2_reg;
   io_hex1 =hex1_reg ;
   io_hex0 =hex0_reg ; 

  end
endmodule
