
`timescale 1ns/1ps

module full_adder_tb;

    reg A, B, C;
    wire S, C1;

    // Instantiate Full Adder
    full_adder uut (
        .A(A),
        .B(B),
        .C(C),
        .S(S),
        .C1(C1)
    );

    initial begin

        $dumpfile("full_adder.vcd");
        $dumpvars(0, full_adder_tb);

        // Display results
        $monitor("Time=%0t | A=%b B=%b C=%b | S=%b C1=%b",
                 $time, A, B, C, S, C1);

        // Test all 8 combinations
        A=0; B=0; C=0; #10;
        A=0; B=0; C=1; #10;
        A=0; B=1; C=0; #10;
        A=0; B=1; C=1; #10;
        A=1; B=0; C=0; #10;
        A=1; B=0; C=1; #10;
        A=1; B=1; C=0; #10;
        A=1; B=1; C=1; #10;

        $finish;
    end

endmodule

