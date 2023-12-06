module Main_design #(parameter Width=32)(
	//input
	input logic [Width-1:0]io_sw_i,
	//output
	output logic br_comp_o,
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
/* verilator lint_off UNUSED */
logic RegWen,BSel,st_en,LB, LH, LBU, LHU, SB, SH,PCSel,BrUn,BrLt,BrEq,ASel,ra_signal,test;
/* verilator lint_on UNUSED */
logic [Width-1:0] pc_i,pc,DataA,DataB,inst,alu,Imm,outmux,outmux_branch,ld_data,WB,outmux_pc;
logic [Width-30:0] ALUop,ImmSel;
logic [Width-31:0] WBSel;
logic [Width-29:0] ALUSel;
// Signals for pipeline
// first stage
logic [Width-1:0] pc_ID,inst_ID,pc_predicted,outmux_btb;
logic [3:0] tag;
logic  taken;
logic stall_PC,flush_IF_ID,flag_br,hit,sel_muxpc; 
// second stage
logic [Width-1:0] pc_EX,DataA_EX,DataB_EX,imm_EX,inst_EX,outmux2fb; 
logic [1:0] WBSel_EX,forwardingA,forwardingB;
logic [2:0] ALUop_EX;
logic BrUn_EX,st_en_EX,SB_EX,SH_EX,RegWen_EX,stall_ID;
// third stage
/* verilator lint_off UNUSED */
logic [Width-1:0]pc_MEM,alu_MEM,inst_MEM,pc_MEMp4,outmux_MEM,predicted_target_address;
/* verilator lint_on UNUSED */
logic [1:0] WBSel_MEM;
logic st_en_MEM,SB_MEM,SH_MEM,RegWen_MEM,flush_ID_EX,ASel_EX,BSel_EX,PCSel_EX,br_comp;
// fourth stage
logic RegWen_WB;
/* verilator lint_off UNUSED */
logic [Width-1:0] pc_WBp4,alu_WB,mem_WB,inst_WB;
/* verilator lint_on UNUSED */
logic [1:0] WBSel_WB;
logic LBU_EX,LBU_MEM,LBU_WB;
logic LH_EX,LH_MEM,LH_WB;
logic LB_EX,LB_MEM,LB_WB;
logic LHU_EX,LHU_MEM,LHU_WB;
assign sel_muxpc = br_comp | (hit & taken ) ;
assign br_comp_o = br_comp;
//--------Datapath------------
//fix_alu s23 (alu,PCSel_EX,alu_fix);
BTB     s24 (inst_ID[6:4],PCSel_EX,alu,pc_EX[13:0],pc,taken,flag_br,
						tag,pc_predicted,test,rst_ni,clk_i);
hit     s25 (pc[13:10],tag,flag_br,hit);
//--------------IF------------
mux2to1     s26(pc_predicted,alu,br_comp,outmux_btb);
mux2to1     s1 (pc_i,outmux_btb,sel_muxpc,outmux_pc);		// choose alu or pc+4
//always_taken s22(pc_ID,Imm,outmux_pc,inst_ID[6:0],target);
PC          s2 (clk_i,stall_PC,rst_ni,outmux_pc,pc);// count up every posedge clock                                
Add    	    s3 (pc,32'h4,pc_i);						// add 4 bit = 1 byte address
inst_memory s4 (pc[12:0],inst);					// instruction out		
//----------Reg IF/ID --------   
Reg_IF_ID   s13 (clk_i,rst_ni,stall_ID,flush_IF_ID,pc,inst,pc_ID,inst_ID);     
                     
//--------------ID------------										    
ImmGen      s5  (inst_ID,ImmSel,Imm);												    
RFv2        s6  (clk_i,rst_ni,RegWen_WB,inst_ID[19:15],inst_ID[24:20],
			     inst_WB[11:7],WB,LB_WB, LH_WB, LBU_WB, LHU_WB,ra_signal,DataA,DataB);
//----------Reg ID/EX --------
Reg_ID_EX   s14 (clk_i,rst_ni,flush_ID_EX,RegWen,WBSel,st_en,SB,SH,
				 BrUn,ASel,BSel,PCSel,ALUop,
				 pc_ID,DataA,DataB,Imm,inst_ID,
				 RegWen_EX,st_en_EX,SB_EX,SH_EX,
				 BrUn_EX,ASel_EX,BSel_EX,PCSel_EX,
				 WBSel_EX,ALUop_EX,pc_EX,DataA_EX,DataB_EX,imm_EX,inst_EX,LBU,LHU,LB,LH,
				 LBU_EX,LHU_EX,LB_EX,LH_EX);
				 
//--------------EX------------
Branch_Comp s7  (DataA_EX,DataB_EX,BrUn_EX,BrLt,BrEq);
mux4to1     s8  (DataA_EX,pc_EX,WB,alu_MEM,forwardingA,outmux_branch);   // choose rs1 for jalr or pc for jal
mux4to1     s9  (DataB_EX,imm_EX,WB,alu_MEM,forwardingB,outmux);// choose imm value or value in registers
mux2to1     sx  (outmux,imm_EX,BSel_EX,outmux2fb);
ALU         s10 (outmux_branch,outmux2fb,ALUSel,alu);
Add			s27 (pc_EX,imm_EX,predicted_target_address);
//----------Reg EX/MEM --------
Reg_EX_MEM  s15 (clk_i,rst_ni,RegWen_EX,WBSel_EX,st_en_EX,SB_EX,SH_EX,
				 pc_EX,alu,inst_EX,outmux,RegWen_MEM,WBSel_MEM,
				 st_en_MEM,SB_MEM,SH_MEM,pc_MEM,alu_MEM,inst_MEM,outmux_MEM,LBU_EX,LHU_EX,LB_EX,LH_EX,
				 LBU_MEM,LHU_MEM,LB_MEM,LH_MEM);
//--------------MEM------------
Add			s16 (pc_MEM,32'h4,pc_MEMp4);
LSU         s11 (alu_MEM[11:0],outmux_MEM,io_sw_i,{SB_MEM,SH_MEM},ld_data,io_lcd_o,
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
												  	clk_i
												  	);
//----------Reg MEM/WB--------
Reg_MEM_WB  s17  (clk_i,rst_ni,RegWen_MEM,WBSel_MEM,pc_MEMp4,alu_MEM,ld_data,inst_MEM,
				  RegWen_WB,WBSel_WB,pc_WBp4,alu_WB,mem_WB,inst_WB,LBU_MEM,LHU_MEM,LB_MEM,LH_MEM,
				  LBU_WB,LHU_WB,LB_WB,LH_WB);
//--------------WB------------
mux3to1     s12  (mem_WB,alu_WB,pc_WBp4,WBSel_WB,WB);   // choose memory value, alu or pc+4 to write back  
//----------Controller--------
Main_controller ss(inst_ID[Width-26:0],inst_ID[14:12],BrLt,BrEq,
				   RegWen,BSel,st_en,WBSel,LB, LH,LBU,LHU,
				   SB, SH,BrUn,PCSel,ASel,ImmSel,ALUop,ra_signal);
ALU_Controller  sa(ALUop_EX,inst_EX[14:12],inst_EX[30],ALUSel);//receive signal from Main_controller to control ALU
//----------Hazard forwarding unit--------
Forwarding 	s20(inst_EX[19:15],inst_EX[24:20],inst_MEM[11:7],inst_WB[11:7],
				ASel_EX,RegWen_MEM,RegWen_WB,forwardingA,forwardingB);
Hazard_detection_unit s21(PCSel_EX,inst_EX[11:7],inst_ID[19:15],inst_ID[24:20],inst_EX[6:0],pc_ID,alu,
						  stall_PC,stall_ID,flush_ID_EX,flush_IF_ID,br_comp);
assign pc_debug_o = pc;
endmodule: Main_design
