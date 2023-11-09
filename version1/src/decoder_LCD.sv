module decoder_LCD (
/* verilator lint_off UNUSED */
input logic [31:0] hex_i, 
/* verilator lint_on UNUSED */
output logic [6:0] hex_o
); 

always_comb 
begin 
	case(hex_i[4:0])
5'd0: hex_o = 7'b1000000; // 0
5'd1: hex_o = 7'b1111001; // 1
5'd2: hex_o = 7'b0100100; // 2
5'd3: hex_o = 7'b0110000; // 3
5'd4: hex_o = 7'b0011001; // 4
5'd5: hex_o = 7'b0010010; // 5
5'd6: hex_o = 7'b0000010; // 6
5'd7: hex_o = 7'b1111000; // 7
5'd8: hex_o = 7'b0000000; // 8
5'd9: hex_o = 7'b0010000; // 9
5'd10: hex_o = 7'b0001000; // A
5'd11: hex_o = 7'b0000011; // B
5'd12: hex_o = 7'b1000110; // C
5'd13: hex_o = 7'b0100001; // D
5'd14: hex_o = 7'b0000110; // E
5'd15: hex_o = 7'b0001110; // F
      default: hex_o = 7'b1111111; // Invalid input, all segments off

	endcase 
end 
endmodule 
