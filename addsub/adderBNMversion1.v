`timescale 1ns / 1ps
// Lab #2, ECE433 Fall 2019
// Author: Brendan Mulholland
// Date: September 15, 2019
// 4-bit adder and subtractor V1
//This is a adder and subtracter for 4 bits. To add you must set mode to 0 and to subtract set mode to 1.
module adderBNMversion1(Minuend, Subtrahend, SumDiff, CarryOut, Mode);
parameter NumberOfBits = 4;
input [NumberOfBits-1:0] Minuend, Subtrahend;
input Mode;
output [NumberOfBits-1:0] SumDiff;
output CarryOut;
wire [NumberOfBits-1:0] NotSubtrahend;
wire [NumberOfBits-1:0] MuxOut;
wire [NumberOfBits-2:0] Cout;

//module mux4bits(A,B,Y,choice);
mux4bits MuxUnit(Subtrahend, NotSubtrahend, MuxOut,Mode);

// module inverter4bits(A,Y);
inverter4bits invert(Subtrahend,NotSubtrahend);

// module adder4bitV1(A,B,Cin,Cout,Out);
adder4bitV1 addUnit(Minuend,MuxOut,Mode,CarryOut,SumDiff);



endmodule 
