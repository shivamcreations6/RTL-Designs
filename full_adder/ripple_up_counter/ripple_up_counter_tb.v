module ripple_up_counter_tb;
    reg clk;
    reg reset;
    wire [3:0] q;

    // Instantiate the counter
    ripple_up_counter_4bit uut (
        .clk(clk),
        .reset(reset),
        .q(q)
    );

    // Clock generation 
    always #5 clk <= ~clk;

    initial begin
        // --- ADD THESE TWO LINES TO DUMP THE WAVEFORM ---
        $dumpfile("up_counter_dump.vcd");
        $dumpvars(0, ripple_up_counter_tb);
        // ------------------------------------------------

        clk = 0;
        reset = 1;

        $display("Time\treset\tq");
        $monitor("%0dns\t%b\t%b", $time, reset, q);

        #10;
        reset = 0;

        #200;
        $finish;
    end
endmodule
