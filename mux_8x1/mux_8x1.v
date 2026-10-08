`timescale 1ns/1ps

module mux_8x1(

input A,B,C,D,E,F,G,H,
input S0,S1,S2,
output Y
);
wire M,N;
wire I0,I1,I2,I3;

assign I0=(~S0&A)|(S0&B);
assign I1=(~S0&C)|(S0&D);
assign I2=(~S0&E)|(S0&F);
assign I3=(~S0&G)|(S0&H);

assign M=(~S1&I0)|(S1&I1);
assign N=(~S1&I2)|(S1&I3);

assign Y=(~S2&M)|(S2&N);


endmodule
  
