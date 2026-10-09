`timescale 1ns / 1ps

module sync_tb;
    reg clk = 0;
    reg async_in = 0;
    wire sync_out2, sync_out3;

    // FIX 1: Use non-blocking assignment '<=' to resolve the BLKSEQ warning
    always #5 clk <= ~clk;

    // Instantiate 2-stage synchronizer
    sync2_stage u_sync2 (
        .clk(clk),
        .async_in(async_in),
        .sync_out(sync_out2)
    );

    // Instantiate 3-stage synchronizer
    sync3_stage u_sync3 (
        .clk(clk),
        .async_in(async_in),
        .sync_out(sync_out3)
    );

    // FIX 2: Create a dummy wire to use the outputs and resolve the UNUSEDSIGNAL warnings
    /* verilator lint_off UNOPTFLAT */
    wire [1:0] unused_sink = {sync_out2, sync_out3};
    /* verilator lint_on UNOPTFLAT */

    // Test stimulus
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, sync_tb);

        // Initialize
        async_in = 0;
        #15;

        // Toggle async_in at non-clock intervals
        #7   async_in = 1;
        #13  async_in = 0;
        #8   async_in = 1;
        #12  async_in = 0;
        #50  $finish;
    end

endmodule
