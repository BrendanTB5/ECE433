`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//Author: Brendan Mulholland
//CM 1832
//Date: Sept. 8 2019
//Purpose: ECE433-01 Homework 1 Problem 2
//////////////////////////////////////////////////////////////////////////////////
module ComparatorAssign(A[1:0],B[1:0], AeqB, AgeqB, AltB);
input A[1:0], B[1:0]];
output AeqB, AgeqB, AltB;

assign AeqB = A[1:0] == B[1:0];
assign AltB = (B[1]&~A[1]) || ((B[1]&B[1]&

endmodule
