`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:22:23 09/14/2019 
// Design Name: 
// Module Name:    comparator4bit 
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
module comparator4bit(A,B, AeqB, AgeqB, AltB);

input [3:0] A;
input [3:0] B;
output reg AeqB;
output reg AgeqB;
output reg AltB;


always @(A[1] or A[0] or B[1] or B[0]) begin

if(A > B) begin
	AgeqB = 1;
	AeqB = 0;
	AltB = 0;
end
else if( A == B) begin
	AgeqB = 1;
	AeqB = 1;
	AltB = 0;
end
else begin
	AgeqB = 0;
	AeqB = 0;
	AltB = 1;
end
end



endmodule
