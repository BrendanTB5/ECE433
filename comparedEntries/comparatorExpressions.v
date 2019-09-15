`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:29:45 09/14/2019 
// Design Name: 
// Module Name:    comparatorExpressions 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module comparatorExpressions(A,B, AeqB, AgeqB, AltB);

input [1:0] A;
input [1:0] B;
output AeqB, AgeqB, AltB;

wire A1, A0, B1, B0;

assign A1 = A[1];
assign B1 = B[1];
assign A0 = A[0];
assign B0 = B[0];

assign AeqB = (~B1&~B0&~A1&~A0) | (~B1&~A1&B0&A0) | (B1&B0&A1&A0) | (B1&A1&~B0&~A0);
assign AgeqB = (~B1&~B0) | (A1&A0) | (~B1&((~A1&A0) | (A1&~A0)) ) | (B1&~B0&A1);
assign AltB = (B1&~A1) | (B1&B0&~A0) | (~A1&~A0&B0);



endmodule
