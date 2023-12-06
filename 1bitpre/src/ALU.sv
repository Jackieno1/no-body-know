module ALU #(parameter Width= 32)(
	// input
	input logic [Width - 1:0] DataA, // take from mux 2 
	input logic [Width - 1:0] DataB, // take from mux 3
	input logic [3:0] ALUSel,		 // take from alu_controller

	// output
	output logic [Width - 1:0] alu_o // 32-bit output
);
//------------------Local decleration-------------------
/* verilator lint_off UNUSED */
logic [3:0] ex; // Unused wire 
/* verilator lint_on UNUSED */ 
logic lt1,lt2;  // Signal flag
 
//----------------------Mapping-------------------------
// Install compare signed block to implement slt intruction
compare32bit_signed s2(DataA,DataB,ex[0],ex[1],lt1);
// Install compare  block to implement sltu instruction
compare32bit        s1(DataA,DataB,ex[2],ex[3],lt2);

//----------------------Processing----------------------
always_comb begin
 case(ALUSel)
 	4'b0000: alu_o = DataA + DataB; 			// add
 	4'b0001: alu_o = DataA + (~ DataB + 1'b1); 	// sub
 	4'b0010: alu_o = DataA << DataB; 			// sll
 	4'b0011: begin 								// slt
 	 			if (lt1)
 	 			 alu_o = 32'b1;
 	 			else
 	 			 alu_o = 32'b0;
 	 		end 
 	4'b0100: begin 								// sltu
 				if (lt2)
 				 alu_o = 32'b1;
 				else
 				 alu_o = 32'b0;
 			end
 	4'b0101: alu_o = DataA ^ DataB; 			// xor
 	4'b0110: alu_o = DataA >> DataB;			// srl
 	4'b0111: alu_o = DataA >>> DataB; 			// sra
  	4'b1000: alu_o = DataA | DataB; 			// or
  	4'b1001: alu_o = DataA & DataB; 			// and
  	4'b1010: alu_o = DataB; 					// lui (no operation)
 	default: alu_o = DataA;  				   	// jalr
 endcase
end
endmodule: ALU 
