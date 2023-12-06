/* verilator lint_off UNOPTFLAT */

module compare32bit_signed (
    input logic [31:0] a,
    input logic [31:0] b,
    output logic AgtB,
    output logic AeqB,
    output logic AltB
);
logic [31:0] ogt, oeq, olt;
logic [1:0] sign;

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
assign sign = {a[31],b[31]};
always_comb begin
  case (sign)
    2'b10:begin
	AgtB = 1'b0;
    AeqB = 1'b0;
    AltB = 1'b1;
			end
    2'b11:begin
	 AgtB =  ogt[0];
     AeqB =  oeq[0];
     AltB =  olt[0]; 
	end		  
    2'b01:begin
	 AgtB = 1'b1;
    AeqB = 1'b0;
    AltB = 1'b0;     
  end  
    2'b00:begin
	 AgtB = ogt[0];
     AeqB = oeq[0];
     AltB = olt[0];
end
default: begin
      AgtB = ogt[0];
      AeqB = oeq[0];
      AltB = olt[0];
    end    
  endcase
end
/* verilator lint_on UNOPTFLAT */
endmodule
