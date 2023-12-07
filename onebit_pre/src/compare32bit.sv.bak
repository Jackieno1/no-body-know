
`include "../src/compare1bit.sv"
module compare32bit (
    input logic [31:0] a,
    input logic [31:0] b,
    output logic AgtB,
    output logic AeqB,
    output logic AltB
);
/* verilator lint_off UNOPTFLAT */
logic [31:0] ogt, oeq, olt;
genvar i;
generate
for ( i = 31; i >= 0; i = i - 1) begin
    compare1bit u (
        a[i], 
        b[i], 
        (i == 31) ? 1'b0 : ogt[i + 1], 
        (i == 31) ? 1'b1 : oeq[i + 1], 
        (i == 31) ? 1'b0 : olt[i + 1], 
        ogt[i], 
        oeq[i], 
        olt[i]
    );

end
endgenerate
assign AgtB = ogt[0];
assign AeqB = oeq[0];
assign AltB = olt[0];
/* verilator lint_on UNOPTFLAT */
endmodule
