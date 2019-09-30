`timescale 1ns / 1ps
//Brendan Mulholland CM1832
//ECE343 Lab 4
//9/23/19
//This is the top level implimentation for the system to be put on the board.
module lab4ece433detect01101withSegDisplay(X, Clock, Reset, FiveBitInput, Detected, Segments);
input X, Clock, Reset;
output Detected;
output[7:0] Segments;
output [4:0] FiveBitInput;
wire [2:0] State;
//module lab4BNMDetect(input Clock, input Reset, input X, output reg Detected,
//output reg [4:0] FiveBitInput, output reg [2:0] CurrentState);
lab4BNMDetect DetectUnit(Clock, Reset, X, Detected, FiveBitInput, State);
//module BCDto7Segment (BCDnumber,SEGMENTS);
BCDto7Segment SevenSegmentDecoder({1'b0,State},Segments);
endmodule 