module mux32to1 #(parameter Width = 32)(
     input logic [Width - 1:0] d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,
    						   d11,d12,d13,d14,d15,d16,d17,d18,
    						   d19,d20,d21,d22,d23,d24,d25,d26,
    						   d27,d28,d29,d30,d31, 
    input logic [Width-28:0] select, 
   
    output logic [Width-1:0] temp
);

always_comb begin
    case (select)
        5'b00000: temp = d0;
        5'b00001: temp = d1;
        5'b00010: temp = d2;
        5'b00011: temp = d3;
        5'b00100: temp = d4;
        5'b00101: temp = d5;
        5'b00110: temp = d6;
        5'b00111: temp = d7;
        5'b01000: temp = d8;
        5'b01001: temp = d9;
        5'b01010: temp = d10;
        5'b01011: temp = d11;
        5'b01100: temp = d12;
        5'b01101: temp = d13;
        5'b01110: temp = d14;
        5'b01111: temp = d15;
        5'b10000: temp = d16;
        5'b10001: temp = d17;
        5'b10010: temp = d18;
        5'b10011: temp = d19;
        5'b10100: temp = d20;
        5'b10101: temp = d21;
        5'b10110: temp = d22;
        5'b10111: temp = d23;
        5'b11000: temp = d24;
        5'b11001: temp = d25;
        5'b11010: temp = d26;
        5'b11011: temp = d27;
        5'b11100: temp = d28;
        5'b11101: temp = d29;
        5'b11110: temp = d30;
        5'b11111: temp = d31;
        default: temp = 32'b0; 
    endcase
   
    
end

endmodule
