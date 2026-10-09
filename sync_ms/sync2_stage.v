`timescale 1ns / 1ps
module sync2_stage (
    input wire clk,
    input wire async_in,
    output reg sync_out
);
    reg sync_ff1;
    always @(posedge clk) begin
        sync_ff1 <= async_in;    // First stage
        sync_out <= sync_ff1;    // Second stage
    end
endmodule
