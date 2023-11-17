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
	input logic clk_i,rst_ni);
//------local decleration-----
logic RegWen,BSel,st_en,LB, LH, LBU, LHU, SB, SH,PCSel,BrUn,BrLt,BrEq,ASel,ra_signal;
logic [Width-1:0] pc_i,pc,DataA,DataB,inst,alu,Imm,outmux,outmux_branch,ld_data,WB,outmux_pc;
logic [Width-30:0] ALUop,ImmSel;
logic [Width-31:0] WBSel;
logic [Width-29:0] ALUSel;
// Signals for pipeline
// first stage
logic [Width-1:0] pc_ID,inst_ID; 
// second stage
logic [Width-1:0] pc_EX,DataA_EX,DataB_EX,imm_EX,inst_EX; 
logic [1:0] WBSel_EX;
logic [3:0] ALUSel_EX;
logic BrUn_EX,st_en_EX,SB_EX,SH_EX,ASel_EX,BSel_EX,RegWen_EX,PCSel_EX;
// third stage
logic [Width-1:0]pc_MEM,alu_MEM,DataB_MEM,inst_MEM,pc_MEMp4;
logic [1:0] WBSel_MEM;
logic st_en_MEM,SB_MEM,SH_MEM,RegWen_MEM;
// fourth stage
logic RegWen_WB;
/* verilator lint_off UNUSED */
logic [Width-1:0] pc_WBp4,alu_WB,mem_WB,inst_WB;
/* verilator lint_on UNUSED */
logic [1:0] WBSel_WB;
//--------Datapath------------

//--------------IF------------
mux2to1     s1 (pc_i,alu,PCSel_EX,outmux_pc);		// choose alu or pc+4
PC          s2 (clk_i,1'b1,rst_ni,outmux_pc,pc);// count up every posedge clock                                
Add    	    s3 (pc,pc_i);						// add 4 bit = 1 byte address
inst_memory s4 (pc[12:0],inst);					// instruction out		
//----------Reg IF/ID --------   
Reg_IF_ID   s13 (clk_i,rst_ni,pc,inst,pc_ID,inst_ID);     
                     
//--------------ID------------										    
ImmGen      s5  (inst_ID,ImmSel,Imm);												    
RFv2        s6  (clk_i,rst_ni,RegWen_WB,inst_ID[19:15],inst_ID[24:20],
			     inst_WB[11:7],WB,LB, LH, LBU, LHU,ra_signal,DataA,DataB);
//----------Reg ID/EX --------
Reg_ID_EX   s14 (clk_i,rst_ni,RegWen,WBSel,st_en,SB,SH,
				 PCSel,ASel,BSel,BrUn,ALUSel,
				 pc_ID,DataA,DataB,Imm,inst_ID,
				 PCSel_EX,RegWen_EX,st_en_EX,SB_EX,SH_EX,ASel_EX,BSel_EX,
				 BrUn_EX,ALUSel_EX,
				 WBSel_EX,pc_EX,DataA_EX,DataB_EX,imm_EX,inst_EX);
				 
//--------------EX------------
Branch_Comp s7  (DataA_EX,DataB_EX,BrUn_EX,BrLt,BrEq);
mux2to1     s8  (DataA_EX,pc_EX,ASel_EX,outmux_branch);   // choose rs1 for jalr or pc for jal
mux2to1     s9  (DataB_EX,imm_EX,BSel_EX,outmux);	      // choose imm value or value in registers
ALU         s10 (outmux_branch,outmux,ALUSel_EX,alu);
//----------Reg EX/MEM --------
Reg_EX_MEM  s15 (clk_i,rst_ni,RegWen_EX,WBSel_EX,st_en_EX,SB_EX,SH_EX,
				 pc_EX,alu,DataB_EX,inst_EX,RegWen_MEM,WBSel_MEM,
				 st_en_MEM,SB_MEM,SH_MEM,pc_MEM,alu_MEM,DataB_MEM,inst_MEM);
//--------------MEM------------
Add			s16 (pc_MEM,pc_MEMp4);
LSU         s11 (alu_MEM[11:0],DataB_MEM,io_sw_i,{SB_MEM,SH_MEM},ld_data,io_lcd_o,
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
												  	st_en_MEM,
												  	rst_ni,
												  	clk_i);
//----------Reg MEM/WB--------
Reg_MEM_WB  s17  (clk_i,rst_ni,RegWen_MEM,WBSel_MEM,pc_MEMp4,alu_MEM,ld_data,inst_MEM,
				  RegWen_WB,WBSel_WB,pc_WBp4,alu_WB,mem_WB,inst_WB);
//--------------WB------------
	mux3to1     s12  (mem_WB,alu_WB,pc_WBp4,WBSel_WB,WB);   // choose memory value, alu or pc+4 to write back  
//Controller
Main_controller ss(inst[Width-26:0],inst[14:12],BrLt,BrEq,
				   RegWen,BSel,st_en,WBSel,LB, LH,LBU,LHU,
				   SB, SH,BrUn,PCSel,ASel,ImmSel,ALUop,ra_signal);
ALU_Controller  sa(ALUop,inst[14:12],inst[30],ALUSel);//receive signal from Main_controller to control ALU
assign pc_debug_o = pc;
endmodule: Main_design
