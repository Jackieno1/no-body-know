module inst_memory  ( 
  input  logic [12:0] addr_i , // 13 bit address . 
  output logic [31:0] data_o
);
  /* verilator lint_off UNUSED */
logic [1:0] trash; 
  /* verilator lint_on UNUSED */
logic [31:0] imem [0:2047];
initial begin
 $readmemh("../mem/mem.txt", imem);
/* imem[0] = 32'h00300193;
 imem[1] = 32'h00500213;
 imem[2] = 32'h00600293;
 imem[3] = 32'h00520433;
 imem[4] = 32'h02802723;
 imem[5] = 32'h0282a383;
 imem[6] = 32'h0033f433;
 imem[7] = 32'h00736133;
 imem[8] = 32'h402381b3;
*/ 
end
always_comb begin : proc_data
    data_o = imem[addr_i[12:2]]; // value of address divide 4 byte-address, become value slot memory
	trash =addr_i[1:0]; // no use 
end

endmodule : inst_memory
