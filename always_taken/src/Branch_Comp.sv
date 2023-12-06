/* verilator lint_off UNOPTFLAT */
module Branch_Comp #(parameter Width = 32)(
//inputs
	input logic [Width-1:0] DataA,DataB,
	input logic BrUn,
//output
	output logic BrLt,BrEq
);
logic [Width-1:0] ogt, oeq, olt;
logic [1:0] sign;
/* verilator lint_off UNUSED */
logic temp_AgtB,temp_AeqB,temp_AltB;
/* verilator lint_on UNUSED */
genvar i;
generate
for ( i = Width-1; i >= 0; i = i - 1) begin
    compare1bit u (
        DataA[i], 
        DataB[i], 
        (i == Width-1) ? 1'b0 : ogt[i + 1], 
        (i == Width-1) ? 1'b1 : oeq[i + 1], 
        (i == Width-1) ? 1'b0 : olt[i + 1], 
        ogt[i], 
        oeq[i], 
        olt[i]
    );

end
endgenerate
assign sign = {DataA[Width-1],DataB[Width-1]};
always_comb begin
  case (sign)
    2'b10:begin
	temp_AgtB = 1'b0;
    temp_AeqB = 1'b0;
    temp_AltB = 1'b1;
	end
    2'b11:begin
	temp_AgtB =  ogt[0];
    temp_AeqB =  oeq[0];
    temp_AltB =  olt[0]; 
	end		  
    2'b01:begin
	temp_AgtB = 1'b1;
    temp_AeqB = 1'b0;
    temp_AltB = 1'b0;     
    end  
    2'b00:begin
	temp_AgtB = ogt[0];
    temp_AeqB = oeq[0];
    temp_AltB = olt[0];
	end
    default: begin
    temp_AgtB = ogt[0];
    temp_AeqB = oeq[0];
    temp_AltB = olt[0];
    end    
  endcase

  if(BrUn) begin
  	BrEq = oeq[0];
  	BrLt = olt[0];
  end else begin
  	BrEq = temp_AeqB;
  	BrLt = temp_AltB;
  end
end
/* verilator lint_on UNOPTFLAT */
endmodule
