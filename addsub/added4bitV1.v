`timescale 1ns / 1ps
// Lab #2, ECE433 Fall 2019
// Author: Brendan Mulholland
// Date: September 15, 2019
// 4-bit adder 
//This is a module I created so that the 4 bit adder would be easier to impliment in a higher design. This is just strining 4 adders together.
module adder4bitV1(A,B,Cin,Cout,Out);

input [3:0] A;
input [3:0] B;
input Cin;
output Cout;
output [3:0] Out;

//These are the carries between each adder
wire b0out, b1out,b2out;

adder1bitV1 add0(A[0],B[0],Out[0],Cin,b0out);
adder1bitV1 add1(A[1],B[1],Out[1],b0out,b1out);
adder1bitV1 add2(A[2],B[2],Out[2],b1out,b2out);
adder1bitV1 add3(A[3],B[3],Out[3],b2out,Cout);





endmodule
