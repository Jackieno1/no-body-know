`include "../src/PC.sv"
`include "../src/Add.sv"
//`include "../src/IMEM.sv"
`include "../src/RFv2.sv"
`include "../src/ALU.sv"
`include "../src/Main_controller.sv"
`include "../src/ALU_Controller.sv"
`include "../src/ImmGen.sv"
`include "../src/mux2to1.sv"
//`include "../src/DMEM.sv"
`include "../src/Branch_Comp.sv"
`include "../src/mux3to1.sv"
`include "../src/inst_memory.sv"
`include "../src/LSU.sv"
//`include "../src/bopxung.sv"
//`include "../src/Trim_Extend.sv"
//`include "../src/Trim_Extend2.sv"
/* verilator lint_off UNUSED */
module Main_design #(parameter Width=32)(
	//input
	input logic [Width-1:0]io_sw_i,
	//output
	output logic [Width-1:0]io_lcd_o,
							io_ledg_o,
							io_ledr_o,
							io_hex0_o,
							io_hex1_o,
							io_hex2_o,
							io_hex3_o,
							io_hex4_o,
							io_hex5_o,
							io_hex6_o,
							io_hex7_o,
							pc_debug_o,

    // Clock and asynchronous reset active low
	input logic clk_i,rst_ni
);
	//local decleration

logic RegWen,BSel,st_en,LB, LH, LBU, LHU, SB, SH,PCSel,BrUn,BrLt,BrEq,ASel,ra_signal;
logic [Width-1:0] pc_i,pc,DataA,DataB,inst,alu,Imm,outmux,outmux_branch,ld_data,WB,outmux_pc;
logic [Width-30:0] ALUop,ImmSel;
logic [Width-31:0] WBSel;
logic [Width-29:0] ALUSel;

	//Instalization
//Datapath
//bopxung bx(clk_i,rst_ni,clk_o);
mux2to1 s11(pc_i,alu,PCSel,outmux_pc);
PC   s1 (clk_i,1'b1,rst_ni,outmux_pc,pc);                               
Add  s2 (pc,pc_i);
inst_memory s3(pc[12:0],inst);				                            
//IMEM s3 (pc[12:0],inst);										     
ImmGen  s4 (inst,ImmSel,Imm);								   
RFv2    s5 (clk_i,rst_ni,RegWen,inst[19:15],inst[24:20],inst[11:7],WB,LB, LH, LBU, LHU,ra_signal,
							   DataA,DataB);
Branch_Comp s12(DataA,DataB,BrUn,BrLt,BrEq);
mux2to1 s10(DataA,pc,ASel,outmux_branch); // mux branch
mux2to1 s7 (DataB,Imm,BSel,outmux);		  // mux before under alu
mux3to1 s8 (ld_data,alu,pc_i,WBSel,WB);     // mux after DMEM						  
ALU     s9 (outmux_branch,outmux,ALUSel,alu);
LSU     s6 (alu[11:0],DataB,io_sw_i,{SB,SH},ld_data,io_lcd_o,
												  	io_ledg_o,
												  	io_ledr_o,
												  	io_hex0_o,
												  	io_hex1_o,
												  	io_hex2_o,
												  	io_hex3_o,
												  	io_hex4_o,
												  	io_hex5_o,
												  	io_hex6_o,
												  	io_hex7_o,
												  	st_en,
												  	rst_ni,
												  	clk_i);
//DMEM    s6 (clk_i,rst_ni,DMEMR,DMEMW,alu,DataB,DataR);

//Controller
Main_controller ss(inst[Width-26:0],inst[14:12],BrLt,BrEq,RegWen,BSel,st_en,WBSel,
					LB, LH, LBU, LHU, SB, SH,BrUn,PCSel,ASel,ImmSel,ALUop,ra_signal);
ALU_Controller  sa(ALUop,inst[14:12],inst[30],ALUSel);
/* verilator lint_on UNUSED */
assign pc_debug_o = pc;

endmodule
