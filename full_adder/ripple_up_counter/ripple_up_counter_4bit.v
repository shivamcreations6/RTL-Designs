// T-Flipflop
module tff (
    input clk,
    input reset,
    output reg q
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            q <= 1'b0;
        else
            q <= ~q;
    end
endmodule

// 4-bit Ripple Up Counter
module ripple_up_counter_4bit (
    input clk,
    input reset,
    output [3:0] q
);
    tff tff0 (.clk(clk),   .reset(reset), .q(q[0]));
    tff tff1 (.clk(~q[0]), .reset(reset), .q(q[1]));
    tff tff2 (.clk(~q[1]), .reset(reset), .q(q[2]));
    tff tff3 (.clk(~q[2]), .reset(reset), .q(q[3]));
endmodule
