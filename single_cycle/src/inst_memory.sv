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
end
always_comb begin : proc_data
    data_o = imem[addr_i[12:2]]; // value of address divide 4 byte-address, become value slot memory
	trash =addr_i[1:0]; // no use 
end

endmodule : inst_memory
