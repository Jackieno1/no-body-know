 #define number_32_bit 4294967296
int pc_temp, pc_jump,temp, temp_o;
int test_slti = -2048;

void drv_in(Vtop *dut, vluint64_t sim_unit) {
  if (sim_unit < 2) {
    dut->rst_ni = 0;
    dut->eval();
  }
  else {
    dut->rst_ni = 1;
    dut->eval();
  }

  if (sim_unit == 3) {
 	temp = rand()%number_32_bit;
 
  	}
  if (sim_unit == 50){
 	temp = rand()%number_32_bit;
  }
  if (sim_unit == 75){
  	temp = rand()%number_32_bit;
  }
  if (sim_unit == 110){
  	temp = rand()%number_32_bit;
  }
    dut->io_sw_i = temp;
    dut->eval();
 
}
 

void pass () {
  printf("\033[1;32mCORRECT\033[0m \n");
}

void fail () {
  printf("\033[1;31mINCORRECT\033[0m \n");
}
void pass_1 (bool abc ) {
	if (abc == 1) {
		pass();
	}
	else {
		fail();
	}
}


void tb_code(Vtop *dut, VerilatedFstC *vtrace, vluint64_t sim_unit,char string[50]) {



  if (sim_unit == 47) {
	printf("Test 1: LW/SW, LUI, LB, LH, LBU, LHU, SB, SH\n\n");
	printf("io_sw_i = %x\n\n", dut->io_sw_i);
    printf("%-25s%-20s%-20s%-20s\n", "Instruction check", "Expect result", "Test Result", "Conclusion"); 
    
    if (dut->io_hex0_o == temp) {
	printf("%-25s%-20x%-20x%-20s\n", "LW/SW ",dut->io_sw_i, dut->io_hex0_o,"\033[1;32mCORRECT\033[0m");
    }
    else {
    printf("%-25s%-20x%-20x%-20s\n", "LW/SW ",dut->io_sw_i, dut->io_hex0_o,"\033[1;31mINCORRECT\033[0m");
    }
    // DONE LH
    
    int test_lui = 0x872 << 12;
	if (dut->io_hex1_o == test_lui) {
	printf("%-25s%-20x%-20x%-20s\n", "LUI ",test_lui, dut->io_hex1_o,"\033[1;32mCORRECT\033[0m");
	}
	else {
	printf("%-25s%-20x%-20x%-20s\n", "LUI ",test_lui, dut->io_hex1_o,"\033[1;31mINCORRECT\033[0m");
	}
	//DONE LUI
	
	int lb_check = ((dut->io_sw_i & 0x00000080) == 0x00000080)?
				   ((dut->io_sw_i & 0x000000ff) + 0xffffff00):
					(dut->io_sw_i & 0x000000ff);
	if (dut->io_hex2_o == lb_check) {
	printf("%-25s%-20x%-20x%-20s\n", "LB ",lb_check, dut->io_hex2_o,"\033[1;32mCORRECT\033[0m");
	    }
	    else {
	printf("%-25s%-20x%-20x%-20s\n", "LB ",lb_check, dut->io_hex2_o,"\033[1;31mINCORRECT\033[0m");
	    }
	//DONE  LB
	
	int lh_check = ((dut->io_sw_i & 0x00008000) == 0x00008000)?
				   ((dut->io_sw_i & 0x0000ffff) + 0xffff0000):
				    (dut->io_sw_i & 0x0000ffff);
	if (dut->io_hex3_o == lh_check) {
	printf("%-25s%-20x%-20x%-20s\n", "LH ",lh_check, dut->io_hex3_o,"\033[1;32mCORRECT\033[0m");
	    }
	    else {
	printf("%-25s%-20x%-20x%-20s\n", "LH ",lh_check, dut->io_hex3_o,"\033[1;31mINCORRECT\033[0m");
	    }
	//DONE LH
	
	if (dut->io_hex4_o == (dut->io_sw_i & 0x000000FF)) {
	printf("%-25s%-20x%-20x%-20s\n", "LBU ", (dut->io_sw_i & 0x0000FF), dut->io_hex4_o,"\033[1;32mCORRECT\033[0m");
	    }
	    else {
	printf("%-25s%-20x%-20x%-20s\n", "LBU ", (dut->io_sw_i & 0x0000FF), dut->io_hex4_o,"\033[1;31mINCORRECT\033[0m");
	    }
	//DONE LBU
	
	if (dut->io_hex5_o == (dut->io_sw_i & 0x0000FFFF)) {
	printf("%-25s%-20x%-20x%-20s\n", "LHU ", (dut->io_sw_i & 0x0000FFFF), dut->io_hex5_o,"\033[1;32mCORRECT\033[0m");
	    }
	    else {
	printf("%-25s%-20x%-20x%-20s\n", "LHU ",  (dut->io_sw_i & 0x0000FFFF), dut->io_hex5_o,"\033[1;31mINCORRECT\033[0m");
	    }    
	//DONE LHU
	
	if (dut->io_hex6_o == (dut->io_sw_i & 0xFF)) {
	printf("%-25s%-20x%-20x%-20s\n", "SB ",(dut->io_sw_i & 0x00000000FF), dut->io_hex6_o,"\033[1;32mCORRECT\033[0m");
	    }
	    else {
	printf("%-25s%-20x%-20x%-20s\n", "SB ",(dut->io_sw_i & 0x00000000FF), dut->io_hex6_o,"\033[1;31mINCORRECT\033[0m");
	    }    
	//DONE SB
	
	if (dut->io_hex7_o == (dut->io_sw_i & 0x0000FFFF)) {
	printf("%-25s%-20x%-20x%-20s\n", "SH ",(dut->io_sw_i & 0x0000FFFF), dut->io_hex7_o,"\033[1;32mCORRECT\033[0m");
	    }
	    else {
	printf("%-25s%-20x%-20x%-20s\n", "SH ",(dut->io_sw_i & 0x0000FFFF), dut->io_hex7_o,"\033[1;31mINCORRECT\033[0m");
	    }    
	//DONE SH
	printf("\n===================================================\n\n");
	}
	
	if (sim_unit == 70) {
	printf("Test 2: ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI\n\n");
	printf("io_sw_i = %x\n\n", dut->io_sw_i);
    printf("%-25s%-20s%-20s%-20s\n", "Instruction check", "Expect result", "Test Result", "Conclusion");

	// ADDI
    
	if (dut->io_hex0_o == (dut->io_sw_i + 2047 )) {
	printf("%-25s%-20x%-20x%-20s\n", "ADDI ",(dut->io_sw_i + 2047 ), dut->io_hex0_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "ADDI ",(dut->io_sw_i + 2047 ), dut->io_hex0_o,"\033[1;31mINCORRECT\033[0m");
		}   

	// SLTI
		
	signed int test_SLTI = 0xfffff800;
	if (dut->io_hex1_o == (signed(dut->io_sw_i) < signed(test_SLTI) ) ? 1 : 0) {
	printf("%-25s%-20x%-20x%-20s\n", "ADDI ",((signed(dut->io_sw_i) < signed(test_SLTI) ) ? 1 : 0 ), dut->io_hex1_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "ADDI ",((signed(dut->io_sw_i) < signed(test_SLTI) ) ? 1 : 0 ), dut->io_hex1_o,"\033[1;31mINCORRECT\033[0m");
		}   

	// SLTIU
	
	unsigned int test_SLTIU_io_sw = dut->io_sw_i; 
	unsigned int test_SLTIU_imme = 0xfffff800;
	if (dut->io_hex2_o == (test_SLTIU_io_sw <test_SLTIU_imme) ? 1 : 0) {
	printf("%-25s%-20x%-20x%-20s\n", "SLTIU ",(test_SLTIU_io_sw <test_SLTIU_imme) ? 1 : 0, dut->io_hex2_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SLTIU ",(test_SLTIU_io_sw <test_SLTIU_imme) ? 1 : 0, dut->io_hex2_o,"\033[1;31mINCORRECT\033[0m");
		}    

	// XORI

	if (dut->io_hex3_o == (dut->io_sw_i ^ 1639 )) {
	printf("%-25s%-20x%-20x%-20s\n", "XORI ",(dut->io_sw_i ^ 1639 ), dut->io_hex3_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "XORI ",(dut->io_sw_i ^ 1639 ), dut->io_hex3_o,"\033[1;31mINCORRECT\033[0m");
		}    

	// ORI
		

	if (dut->io_hex4_o == (dut->io_sw_i | 1639 )) {
	printf("%-25s%-20x%-20x%-20s\n", "ORI ",(dut->io_sw_i | 1639), dut->io_hex4_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "ORI ",(dut->io_sw_i | 1639 ), dut->io_hex4_o,"\033[1;31mINCORRECT\033[0m");
		}    

	// ANDI
		

	if (dut->io_hex5_o == (dut->io_sw_i & 1639 )) {
	printf("%-25s%-20x%-20x%-20s\n", "ANDI ",(dut->io_sw_i & 1639 ), dut->io_hex5_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "ANDI ",(dut->io_sw_i & 1639 ), dut->io_hex5_o,"\033[1;31mINCORRECT\033[0m");
		} 

	//  SLLI
	   

	if (dut->io_hex6_o == (dut->io_sw_i << 4 )) {
	printf("%-25s%-20x%-20x%-20s\n", "SLLI ",(dut->io_sw_i << 4 ), dut->io_hex6_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SLLI ",(dut->io_sw_i << 4 ), dut->io_hex6_o,"\033[1;31mINCORRECT\033[0m");
		}    

	//  SRLI
		
	if (dut->io_hex7_o == (dut->io_sw_i >> 4 )) {
	printf("%-25s%-20x%-20x%-20s\n", "SRLI ",(dut->io_sw_i >> 4 ),dut->io_hex7_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SRLI ",(dut->io_sw_i >> 4 ),dut->io_hex7_o,"\033[1;31mINCORRECT\033[0m");
		}    

	// SRAI
																		

	if (dut->io_ledr_o == (dut->io_sw_i >> 4 )) {
	printf("%-25s%-20x%-20x%-20s\n", "SRAI ",(dut->io_sw_i >> 4 ),dut->io_ledr_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SRAI ",(dut->io_sw_i >> 4 ),dut->io_ledr_o,"\033[1;31mINCORRECT\033[0m");
		}    
		printf("\n===================================================\n\n");																
	}

	
	if (sim_unit == 103) {
	printf("Test 3: ADD, SUB,  SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND\n\n");
	printf("io_sw_i = %x\n\n", dut->io_sw_i);
    printf("%-25s%-20s%-20s%-20s\n", "Instruction check", "Expect result", "Test Result", "Conclusion");

	// ADD
    
	if (dut->io_hex0_o == (dut->io_sw_i + 1428 )) {
	printf("%-25s%-20x%-20x%-20s\n", "ADD ",(dut->io_sw_i + 1428 ),dut->io_hex0_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "ADD ",(dut->io_sw_i + 1428 ),dut->io_hex0_o,"\033[1;31mINCORRECT\033[0m");
		}    	

	// SUB
		

	if (dut->io_hex1_o == 1428 - (dut->io_sw_i)) {
	printf("%-25s%-20x%-20x%-20s\n", "SUB ",(1428 - dut->io_sw_i),dut->io_hex1_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SUB ",(1428 - dut->io_sw_i),dut->io_hex1_o,"\033[1;31mINCORRECT\033[0m");
		}    	

	// SLL 
		
	if (dut->io_hex2_o == (dut->io_sw_i <<  4)) {
	printf("%-25s%-20x%-20x%-20s\n", "SLL ",(dut->io_sw_i <<  4),dut->io_hex2_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SLL ",(dut->io_sw_i <<  4),dut->io_hex2_o,"\033[1;31mINCORRECT\033[0m");
		} 		

	// SLT
	
	if (dut->io_hex3_o == ((signed(dut->io_sw_i) < signed(0xfffff800) ) ? 1 : 0)) {
	printf("%-25s%-20x%-20x%-20s\n", "SLT", ( signed(dut->io_sw_i) < signed(0xfffff800) ) ? 1 : 0,dut->io_hex3_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SLT", ( signed(dut->io_sw_i) < signed(0xfffff800) ) ? 1 : 0,dut->io_hex3_o,"\033[1;31mINCORRECT\033[0m");
		}

	//SLTU
		
	if (dut->io_hex4_o == (( unsigned(dut->io_sw_i) < unsigned(0xfffff800) ) ? 1 : 0)) {
	printf("%-25s%-20x%-20x%-20s\n", "SLTU ", (unsigned(dut->io_sw_i) < unsigned(0xfffff800) ) ? 1 : 0,dut->io_hex4_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SLTU ", (unsigned(dut->io_sw_i) < unsigned(0xfffff800) ) ? 1 : 0,dut->io_hex4_o,"\033[1;31mINCORRECT\033[0m");
		}

	// XOR
		
	if (dut->io_hex5_o == (dut->io_sw_i ^ 4)) {
	printf("%-25s%-20x%-20x%-20s\n", "XOR ",(dut->io_sw_i ^ 4 ),dut->io_hex5_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "XOR ",(dut->io_sw_i ^ 4 ),dut->io_hex5_o,"\033[1;31mINCORRECT\033[0m");
		}

	// SRL
		
	unsigned int test_SRL;
	test_SRL = dut->io_sw_i>>4;
	if (dut->io_hex6_o == (test_SRL)) {
	printf("%-25s%-20x%-20x%-20s\n", "SRL ",(test_SRL ),dut->io_hex6_o,"\033[1;32mCORRECT\033[0m");	
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SRL ",(test_SRL ),dut->io_hex6_o,"\033[1;31mINCORRECT\033[0m");
		}

	// SRA
		
	if (dut->io_hex7_o == (dut->io_sw_i >> 4)) {
	printf("%-25s%-20x%-20x%-20s\n", "SRA ",(dut->io_sw_i >> 4 ),dut->io_hex7_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "SRA ",(dut->io_sw_i >> 4 ),dut->io_hex7_o,"\033[1;31mINCORRECT\033[0m");
		}	

	// OR

	if (dut->io_ledr_o == (dut->io_sw_i |  1953)) {
	printf("%-25s%-20x%-20x%-20s\n", "OR ", (dut->io_sw_i |  1953 ),dut->io_ledr_o,"\033[1;32mCORRECT\033[0m");		
	}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "OR ",(dut->io_sw_i |  1953 ),dut->io_ledr_o,"\033[1;31mINCORRECT\033[0m");		
	}

	// AND
	
	if (dut->io_ledg_o == (dut->io_sw_i & 1953)) {
	printf("%-25s%-20x%-20x%-20s\n", "AND ", ( (dut->io_sw_i) & (1953) ),dut->io_ledg_o,"\033[1;32mCORRECT\033[0m");
		}
		else {
	printf("%-25s%-20x%-20x%-20s\n", "AND ", ( (dut->io_sw_i) & (1953) ),dut->io_ledg_o,"\033[1;31mINCORRECT\033[0m");
		}
		printf("\n===================================================\n\n");
	}


	
 	if (sim_unit == 101){
		pc_temp = dut->pc_debug_o;
	}

	if (sim_unit == 138){
		bool tbr1 = (dut->io_hex0_o == (dut->io_sw_i!=0xFFFFF000));
		bool tbr2 = (dut->io_hex1_o == (0xFFFFF000 == dut->io_sw_i));
		bool tbr3 = (dut->io_hex2_o == (signed(0xFFFFF000) < signed(dut->io_sw_i)));
		bool tbr4 = (dut->io_hex3_o == (signed(0xFFFFF000) >= signed(dut->io_sw_i)));
		bool tbr5 = (dut->io_hex4_o == (unsigned(0xFFFFF000) < unsigned(dut->io_sw_i)));
		bool tbr6 = (dut->io_hex5_o == (unsigned(0xFFFFF000) >= unsigned(dut->io_sw_i)));
		printf("Test 4 BRANCHING instruction \n");
		printf("Number Rs1 %#0x\n", 0xFFFFF000);
		printf("Number Rs2 %#0x\n", dut->io_sw_i);
		printf("Number IO: %#0x\n", dut->io_hex0_o);
		std::cout << " BNE check:  "; pass_1(tbr1);
		std::cout << " BEQ check:  "; pass_1(tbr2);
		std::cout << " BLT check:  "; pass_1(tbr3);
		std::cout << " BGE check:  "; pass_1(tbr4);
		std::cout << " BLTU check: "; pass_1(tbr5);		
		std::cout << " BGEU check: "; pass_1(tbr6);
		printf("\n===================================================\n\n");
	}
	if (sim_unit == 143){
		printf("Test 5: JAL, AUIPC, JALR \n");
		printf("JAL check: ");
		pass_1(dut->io_hex0_o);
	
		temp_o = dut->pc_debug_o;
		printf("temp = %#0x\n", temp_o);
	}
	if (sim_unit == 149){
		printf("io_hex1_o = %#0x\n",dut->io_hex1_o );
		printf("AUIPC check: ");
		pass_1 (dut->io_hex1_o == (temp_o + 0x04000));		
	}
	if (sim_unit == 149){
		temp_o = dut->pc_debug_o;
		printf("temp = %#0x\n", temp_o);
	}
	if (sim_unit == 155){
		printf("io_hex2_o = %#0x\n", dut->io_hex2_o);
		printf("JALR check: ");
		pass_1(temp_o == dut->io_hex2_o);
		printf("\n===================================================\n\n");
	}
	
}
