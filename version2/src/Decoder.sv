module Decoder #(parameter Width = 32)(
	input logic [Width - 28:0] Data_in,
	input logic RegWEn,
	output logic  [Width-1:0] Y
);
always_comb begin
 if(RegWEn) begin
	case(Data_in)
	 5'b00000: Y = {{Width-1{1'b0}},1'b1};                 // 0000 0000 0000 0000 0000 0000 0000 0001
	 5'b00001: Y = {{Width-2{1'b0}},1'b1,{Width-31{1'b0}}};// 0000 0000 0000 0000 0000 0000 0000 0010
	 5'b00010: Y = {{Width-3{1'b0}},1'b1,{Width-30{1'b0}}};// 0000 0000 0000 0000 0000 0000 0000 0100
	 5'b00011: Y = {{Width-4{1'b0}},1'b1,{Width-29{1'b0}}};
	 5'b00100: Y = {{Width-5{1'b0}},1'b1,{Width-28{1'b0}}};
	 5'b00101: Y = {{Width-6{1'b0}},1'b1,{Width-27{1'b0}}};
	 5'b00110: Y = {{Width-7{1'b0}},1'b1,{Width-26{1'b0}}};
	 5'b00111: Y = {{Width-8{1'b0}},1'b1,{Width-25{1'b0}}};
	 5'b01000: Y = {{Width-9{1'b0}},1'b1,{Width-24{1'b0}}};
	 5'b01001: Y = {{Width-10{1'b0}},1'b1,{Width-23{1'b0}}};
	 5'b01010: Y = {{Width-11{1'b0}},1'b1,{Width-22{1'b0}}};
	 5'b01011: Y = {{Width-12{1'b0}},1'b1,{Width-21{1'b0}}};
	 5'b01100: Y = {{Width-13{1'b0}},1'b1,{Width-20{1'b0}}};
	 5'b01101: Y = {{Width-14{1'b0}},1'b1,{Width-19{1'b0}}};
	 5'b01110: Y = {{Width-15{1'b0}},1'b1,{Width-18{1'b0}}};
	 5'b01111: Y = {{Width-16{1'b0}},1'b1,{Width-17{1'b0}}};
	 5'b10000: Y = {{Width-17{1'b0}},1'b1,{Width-16{1'b0}}};
	 5'b10001: Y = {{Width-18{1'b0}},1'b1,{Width-15{1'b0}}};
	 5'b10010: Y = {{Width-19{1'b0}},1'b1,{Width-14{1'b0}}};
	 5'b10011: Y = {{Width-20{1'b0}},1'b1,{Width-13{1'b0}}};
	 5'b10100: Y = {{Width-21{1'b0}},1'b1,{Width-12{1'b0}}};
	 5'b10101: Y = {{Width-22{1'b0}},1'b1,{Width-11{1'b0}}};
	 5'b10110: Y = {{Width-23{1'b0}},1'b1,{Width-10{1'b0}}};
	 5'b10111: Y = {{Width-24{1'b0}},1'b1,{Width-9{1'b0}}};
	 5'b11000: Y = {{Width-25{1'b0}},1'b1,{Width-8{1'b0}}};
	 5'b11001: Y = {{Width-26{1'b0}},1'b1,{Width-7{1'b0}}};
	 5'b11010: Y = {{Width-27{1'b0}},1'b1,{Width-6{1'b0}}};
	 5'b11011: Y = {{Width-28{1'b0}},1'b1,{Width-5{1'b0}}};
	 5'b11100: Y = {{Width-29{1'b0}},1'b1,{Width-4{1'b0}}};
	 5'b11101: Y = {{Width-30{1'b0}},1'b1,{Width-3{1'b0}}};
	 5'b11110: Y = {{Width-31{1'b0}},1'b1,{Width-2{1'b0}}};
	 5'b11111: Y = {1'b1,{Width-1{1'b0}}};
	 default: Y = 32'b0;
	 endcase
 end else Y = 32'b0;
end
endmodule
 	 
