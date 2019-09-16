`timescale 1ns / 1ps
// Lab #2, ECE433 Fall 2019
// Author: Brendan Mulholland
// Date: September 15, 2019
// 4-bit adder and subtractor V2
//This is a adder and subtracter for 4 bits. To add you must set mode to 0 and to subtract set mode to 1.
module adderBNMversion2(Minuend, Subtrahend, SumDiff, CarryOut, Mode);

parameter NumberOfBits = 4;

input [NumberOfBits-1:0] Minuend, Subtrahend;
input Mode;

output reg [NumberOfBits-1:0] SumDiff; 
output reg CarryOut; 


always @ (Minuend,Subtrahend, Mode)
case (Mode)
0: {CarryOut, SumDiff} = Minuend + Subtrahend;
1: {CarryOut, SumDiff} = Minuend + ~Subtrahend + 1;
endcase 



endmodule
