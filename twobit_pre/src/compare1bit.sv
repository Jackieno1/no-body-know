/* verilator lint_off UNOPTFLAT */
	module compare1bit (
    input logic a,
    input logic b,
    input logic in_gt,
    input logic in_eq,
    input logic in_lt,
    output logic out_gt,
    output logic out_eq,
    output logic out_lt
);

assign out_gt = in_gt || (in_eq && a && (!b));
assign out_lt = in_lt || (in_eq && (!a) && b);
assign out_eq = in_eq && ~(a ^ b);
/* verilator lint_on UNOPTFLAT */
endmodule
