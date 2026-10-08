`timescale 1ns/1ps

module mux_8x1_tb;

    reg A, B, C, D, E, F, G, H;
    reg S0, S1, S2;
    wire Y;

    mux_8x1 uut (
        .A(A),
        .B(B),
        .C(C),
        .D(D),
        .E(E),
        .F(F),
        .G(G),
        .H(H),
        .S0(S0),
        .S1(S1),
        .S2(S2),
        .Y(Y)
    );

    initial begin

        // Create VCD file
        $dumpfile("mux_8x1.vcd");
        $dumpvars(0, mux_8x1_tb);

        // Input values
        A = 0;
        B = 1;
        C = 0;
        D = 1;
        E = 0;
        F = 1;
        G = 0;
        H = 1;

        // Test all select combinations

        S2 = 0; S1 = 0; S0 = 0;
        #10;

        S2 = 0; S1 = 0; S0 = 1;
        #10;

        S2 = 0; S1 = 1; S0 = 0;
        #10;

        S2 = 0; S1 = 1; S0 = 1;
        #10;

        S2 = 1; S1 = 0; S0 = 0;
        #10;

        S2 = 1; S1 = 0; S0 = 1;
        #10;

        S2 = 1; S1 = 1; S0 = 0;
        #10;

        S2 = 1; S1 = 1; S0 = 1;
        #10;

        $finish;
    end

endmodule
