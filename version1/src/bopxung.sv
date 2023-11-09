module bopxung (
    input logic clk, reset,
    output logic clk_out
);

logic tmp;
logic[24:0] count;

always_ff @(posedge clk ) begin
    if (~reset) begin
        count <= 25'd1;
        tmp <= 1'b0;
    end else begin
        count <= count + 1;

        if (count == 2500) begin
            tmp <= ~tmp;
            count <= 25'd1;
        end
    end
    clk_out <= tmp;
end

endmodule
