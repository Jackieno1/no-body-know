`include "../src/Reg.sv"
`include "../src/Decoder.sv"
`include "../src/mux32to1.sv"
module RFv2 #(parameter Width=32)(
    input  logic clk_i,rst_ni,
    input  logic RegWEn,
    input  logic [Width -28:0] RA,
    input  logic [Width -28:0] RB,
    input  logic [Width -28:0] RW,
    input  logic [Width - 1:0] busW,
    input  logic LB, LH, LBU, LHU,  
    input  logic ra_signal,	// take from controller
    output logic [Width - 1:0] busA,
    output logic [Width - 1:0] busB
);
//local decleration
/* verilator lint_off UNUSED */
logic [Width-1:0] Y;
/* verilator lint_on UNUSED */
logic [Width-1:0] temp;
logic [Width - 1:0] d[32];
logic ra; // return address enable
always_comb begin 
 if(LB)
  temp = {{Width-8{busW[Width-1]}},busW[7:0]};
 else if (LH)
  temp = {{Width-16{busW[Width-1]}},busW[15:0]};  
 else if (LBU)
  temp = {{Width-8{1'b0}},busW[7:0]};
 else if (LHU)
  temp = {{Width-16{1'b0}},busW[15:0]};
 else 
  temp = busW; // lw
//----Process for return address----
 if(ra_signal)
 	ra = 1'b1;//when execute jal/jalr ra auto = 1
 else
 	ra = Y[1];	
end
//----------------------------------
//Instalization
Decoder s1(RW,RegWEn,Y);

Reg x0(temp, d[0], clk_i, rst_ni, 1'b0);
Reg x1(temp, d[1], clk_i, rst_ni, ra);
Reg x2(temp, d[2], clk_i, rst_ni, Y[2]);
Reg x3(temp, d[3], clk_i, rst_ni, Y[3]);
Reg x4(temp, d[4], clk_i, rst_ni, Y[4]);
Reg x5(temp, d[5], clk_i, rst_ni, Y[5]);
Reg x6(temp, d[6], clk_i, rst_ni, Y[6]);
Reg x7(temp, d[7], clk_i, rst_ni, Y[7]);
Reg x8(temp, d[8], clk_i, rst_ni, Y[8]);
Reg x9(temp, d[9], clk_i, rst_ni, Y[9]);
Reg x10(temp, d[10], clk_i, rst_ni, Y[10]);
Reg x11(temp, d[11], clk_i, rst_ni, Y[11]);
Reg x12(temp, d[12], clk_i, rst_ni, Y[12]);
Reg x13(temp, d[13], clk_i, rst_ni, Y[13]);
Reg x14(temp, d[14], clk_i, rst_ni, Y[14]);
Reg x15(temp, d[15], clk_i, rst_ni, Y[15]);
Reg x16(temp, d[16], clk_i, rst_ni, Y[16]);
Reg x17(temp, d[17], clk_i, rst_ni, Y[17]);
Reg x18(temp, d[18], clk_i, rst_ni, Y[18]);
Reg x19(temp, d[19], clk_i, rst_ni, Y[19]);
Reg x20(temp, d[20], clk_i, rst_ni, Y[20]);
Reg x21(temp, d[21], clk_i, rst_ni, Y[21]);
Reg x22(temp, d[22], clk_i, rst_ni, Y[22]);
Reg x23(temp, d[23], clk_i, rst_ni, Y[23]);
Reg x24(temp, d[24], clk_i, rst_ni, Y[24]);
Reg x25(temp, d[25], clk_i, rst_ni, Y[25]);
Reg x26(temp, d[26], clk_i, rst_ni, Y[26]);
Reg x27(temp, d[27], clk_i, rst_ni, Y[27]);
Reg x28(temp, d[28], clk_i, rst_ni, Y[28]);
Reg x29(temp, d[29], clk_i, rst_ni, Y[29]);
Reg x30(temp, d[30], clk_i, rst_ni, Y[30]);
Reg x31(temp, d[31], clk_i, rst_ni, Y[31]);


mux32to1 mux1(
    d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8], d[9], d[10],
    d[11], d[12], d[13], d[14], d[15], d[16], d[17], d[18],
    d[19], d[20], d[21], d[22], d[23], d[24], d[25], d[26],
    d[27], d[28], d[29], d[30], d[31], RA, busA
);

mux32to1 mux2(
    d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8], d[9], d[10],
    d[11], d[12], d[13], d[14], d[15], d[16], d[17], d[18],
    d[19], d[20], d[21], d[22], d[23], d[24], d[25], d[26],
    d[27], d[28], d[29], d[30], d[31], RB,  busB
);


endmodule
