module ALU_Controller #(parameter Width=32)(
	//input
	input logic [Width-30:0] ALUop,  // take from Main controller
	input logic [Width-30:0] funct3, // take from instruction[14:12]
	input logic funct7,				 // take from instruction[30]

	//output
	output logic [Width-29:0] control
);
//----------------------Processing------------------------------
always_comb begin
 case(ALUop)
  3'b000: control = 4'b0000;		 // calculate offset (lw,sw,branch address)
  3'b001: control = 4'b1010;		 // U-type ( no operation needed)
  3'b010: case({funct7,funct3})		 // R-type
  		 4'b0000: control = 4'b0000; 	// add
  		 4'b1000: control = 4'b0001; 	// sub
  		 4'b0001: control = 4'b0010; 	// sll
  		 4'b0010: control = 4'b0011; 	// slt
  		 4'b0011: control = 4'b0100; 	// sltu
  		 4'b0100: control = 4'b0101; 	// xor
  		 4'b0101: control = 4'b0110; 	// srl
  		 4'b1101: control = 4'b0111; 	// sra
  		 4'b0110: control = 4'b1000; 	// or
  		 4'b0111: control = 4'b1001; 	// and
  		 default: control = 4'bxxxx;
  		 endcase
  3'b011: case({funct7,funct3})		 // I-type
  	     4'b1000: control = 4'b0000; 	// addi
  	     4'b0000: control = 4'b0000; 	// addi
  	     4'b1010: control = 4'b0011; 	// slti
  	     4'b0010: control = 4'b0011; 	// slti
  	     4'b0011: control = 4'b0100; 	// sltiu
         4'b1011: control = 4'b0100; 	// sltiu
  	     4'b0100: control = 4'b0101; 	// xori
  	     4'b1100: control = 4'b0101; 	// xori
  	     4'b0110: control = 4'b1000; 	// ori
  	     4'b1110: control = 4'b1000; 	// ori
  	     4'b0111: control = 4'b1001; 	// andi
  	     4'b1111: control = 4'b1001; 	// andi
  	     4'b0001: control = 4'b0010; 	// slli
  	     4'b0101: control = 4'b0110; 	// srli
  	     4'b1101: control = 4'b0111; 	// srai
  	     default: control = 4'bxxxx;
  	     endcase

  		 	
  default:  control = 4'bxxxx;
  endcase
end
endmodule
  
