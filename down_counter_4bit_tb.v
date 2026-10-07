`timescale 1ns/1ps

/* verilator lint_off SYNCASYNCNET */

module down_counter_4bit_tb;
    reg clk;
    reg reset;
    wire [3:0] count;

    down_counter_4bit uut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    // clock generation
    always #5 clk <= ~clk;

    initial begin
        clk = 0;

        $monitor("Time=%0t | Reset=%b | count=%b", $time, reset, count);
        reset = 1; #10;
        reset = 0; #200;
        $finish;
    end

    initial begin
        $dumpfile("down_counter_4bit.vcd");
        $dumpvars(0, down_counter_4bit_tb);
    end

endmodule
