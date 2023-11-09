/* verilator lint_off UNOPTFLAT */
module Main_controller #(parameter Width=32)(
	//input
	input logic [Width-26:0] opcode,
	input logic [Width-30:0] funct3,
	input logic BrLt,BrEq,
	//output
	output logic RegWen,BSel,st_en,
	output logic [1:0]WBSel,
	output logic LB, LH, LBU, LHU, SB, SH,BrUn,PCSel,ASel,
	output logic [2:0]ImmSel,
	output logic [2:0]ALUop,
	output logic ra_signal
	);
	//local decleration
	logic [20:0] control_signal;
	assign {RegWen,BSel,st_en,
			WBSel,
			LB, LH, LBU, LHU, SB, SH,BrUn,PCSel,ASel,
			ImmSel,
			ALUop,ra_signal} = control_signal;

always_comb begin
 case(opcode)
  7'b0110011: control_signal = 21'b10x01xxxxxxx00xxx0100; // R-type
  7'b0010011: case(funct3) // I-type
  				3'b001 :control_signal = 21'b11x01xxxxxxx001010110; // slli-type
  				3'b101 :control_signal = 21'b11x01xxxxxxx001010110; // srli,srai-type
   				default:control_signal = 21'b11x01xxxxxxx000000110; // the other
   			  endcase
  7'b0000011: begin
  				case(funct3)
  				3'b000:  control_signal = 21'b110001000xxx000000000; // lb-type
  				3'b001:  control_signal = 21'b110000100xxx000000000; // lh-type
  				3'b010:  control_signal = 21'b110000000xxx000000000; // lw-type
  				3'b100:  control_signal = 21'b110000010xxx000000000; // lbu-type
  				3'b101:  control_signal = 21'b110000001xxx000000000; // lhu-type
  				default: control_signal = 21'b110000000xxx000000000;
  				endcase
  			  end
  7'b0100011: begin
  				case(funct3)
  				3'b000:  control_signal = 21'b011xxxxxx10x000010000; // sb-type
  				3'b001:  control_signal = 21'b011xxxxxx01x000010000; // sh-type
  				default: control_signal = 21'b011xxxxxx00x000010000; // sw-type
				endcase
			  end
  7'b1100011: begin
  				case({funct3,BrEq,BrLt})
  				// *BrLt
  				5'b00000: control_signal = 21'b010xxxxxxxxx010100000; // beq false
  				5'b00001: control_signal = 21'b010xxxxxxxxx010100000;   
  							
  				5'b00010: control_signal = 21'b010xxxxxxxxx110100000; // beq true
  				5'b00011: control_signal = 21'b010xxxxxxxxx110100000;
  				  				
  				5'b00100: control_signal = 21'b010xxxxxxxxx110100000; // bne true
  				5'b00101: control_signal = 21'b010xxxxxxxxx110100000; 
  				
  				5'b00110: control_signal = 21'b010xxxxxxxxx010100000; // bne false
  				5'b00111: control_signal = 21'b010xxxxxxxxx010100000;  				
 				//*BrEq
  				5'b10001: control_signal = 21'b010xxxxxxxx0110100000; // blt true
  				5'b10011: control_signal = 21'b010xxxxxxxx0110100000; 
  				
  				5'b10000: control_signal = 21'b010xxxxxxxx0010100000; // blt false
  				5'b10010: control_signal = 21'b010xxxxxxxx0010100000; 
  				
  				5'b10100: control_signal = 21'b010xxxxxxxxx110100000; // bge true // BrLt && BrEq = 00
  				
  				5'b10101: control_signal = 21'b010xxxxxxxxx010100000; // bge false // BrLt = 1
  				5'b10110: control_signal = 21'b010xxxxxxxxx010100000; // bge false // BrEq = 1
  				
  				5'b11001: control_signal = 21'b010xxxxxxxx1110100000; // bltu true
  				5'b11011: control_signal = 21'b010xxxxxxxx1110100000; 
  				
  				5'b11000: control_signal = 21'b010xxxxxxxx1010100000; // bltu false
  				5'b11010: control_signal = 21'b010xxxxxxxx1010100000; 
  				
  				5'b11100: control_signal = 21'b010xxxxxxxx1110100000; // bgeu true
  				
  				5'b11101: control_signal = 21'b010xxxxxxxx1010100000; // bgeu false
  				5'b11110: control_signal = 21'b010xxxxxxxx1010100000;  				
  				default : control_signal = 21'bxxxxxxxxxxxxxxxxxxxxx;
  				endcase
  			  end
 7'b1101111: control_signal = 21'b11010xxxxxxx110110001; // jal
 7'b1100111: control_signal = 21'b11010xxxxxxx100001001; // jalr
 7'b0010111: control_signal = 21'b11001xxxxxxx011000000; // auipc 
 7'b0110111: control_signal = 21'b11001xxxxxxx0x1000010; // lui
 default: 	 control_signal = 21'bxxxxxxxxxxxxxxxxxxxxx;
 endcase
end
/* verilator lint_on UNOPTFLAT */
endmodule 							      
  								  
