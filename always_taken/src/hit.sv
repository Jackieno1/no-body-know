/* verilator lint_off MULTITOP */
 /* verilator lint_off DECLFILENAME */
module hit (
 /* verilator lint_on DECLFILENAME */
 /* verilator lint_on MULTITOP */
input logic [3:0] pc_current_index ,  // noi voi 13:10 cua pc 
input logic [3:0] tag  ,
input logic flag_br  ,// noi voi flag_br
output logic hit_o // 
);

always_comb begin 
	if ( (pc_current_index == tag) && flag_br  )
		hit_o = 1'b1 ; 
	else 
		hit_o = 1'b0 ; 
	
end  
endmodule 
