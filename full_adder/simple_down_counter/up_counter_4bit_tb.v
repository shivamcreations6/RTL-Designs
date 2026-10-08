`timescale 1ns/1ps

module up_counter_4bit_tb;

    reg clk;
    reg reset;
    wire [3:0] count;

    // Unit Under Test (UUT) instantiation
    up_counter_4bit uut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    // Clock generation using non-blocking assignment
    always #5 clk <= ~clk;

    initial begin
        // Initialize clock
        clk = 0;

        $monitor("Time=%0t | Reset=%b | count=%b", $time, reset, count);
        
        reset = 1; 
        #10;
        reset = 0; 
        #200;
        
        $finish;
    end

    initial begin
        $dumpfile("up_counter_4bit.vcd");
        $dumpvars(0, up_counter_4bit_tb);
    end

endmodule
