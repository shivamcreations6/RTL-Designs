
`timescale 1ns/1ps
module full_adder(
    input A, B, C,
    output S, C1
);

assign S = (~A & ~B & C) |
           (~A & B & ~C) |
           (A & ~B & ~C) |
           (A & B & C);

assign C1 = (~A & B & C) |
            (A & ~B & C) |
            (A & B & ~C) |
            (A & B & C);

endmodule
