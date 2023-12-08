#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <verilated.h>
#include <string>
#include <verilated_fst_c.h>
#include "Vtop.h"
#include "driver.cpp"



#define MAX_SIM  2000
vluint64_t sim_unit = 0;
vluint64_t sim_time = 0;
char string[50];

void dut_clock(Vtop *dut, VerilatedFstC *vtrace);


void initial(Vtop *dut) {
}

void dut_clock(Vtop *dut, VerilatedFstC *vtrace) {

  sim_time = sim_unit * 10 + 1;
  if (vtrace)
    vtrace->dump(sim_time); // Dump values to update inputs

  sim_time = sim_time + 4;
  dut->clk_i = 0;
  dut->eval();
  if (vtrace)
    vtrace->dump(sim_time); // Dump values after negedge

  sim_time = sim_time + 5;
  dut->clk_i = 1;
  dut->eval();
  if (vtrace) {
    vtrace->dump(sim_time); // Dump values after posedge
    //vtrace->flush();
  }
}



int main(int argc, char **argv, char **env) {
std::cout<< "=================== TEST BENCH ==================="<< "\n\n"  ; 
	// Call commandArgs first!
	Verilated::commandArgs(argc, argv);

  // Instantiate the design
	Vtop *dut = new Vtop;

  // Trace generating
  Verilated::traceEverOn(true);
  VerilatedFstC *vtrace = new VerilatedFstC;
  dut->trace(vtrace, 2); // trace down to 2 hierarchy
  vtrace->open("wave.fst");
  vtrace->dump(0);

  // Initial setups
  srand(time(NULL));
  initial(dut);
  dut->eval();

  // Check procedure
  while (sim_unit < MAX_SIM){
    dut_clock(dut, vtrace);
    drv_in(dut, sim_unit);
    dut->eval();
    tb_code(dut,vtrace,sim_unit,string);
    sim_unit++;
	}

  vtrace->close();
  delete dut;
  exit(EXIT_SUCCESS);
}
