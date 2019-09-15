`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:53 09/14/2019 
// Design Name: 
// Module Name:    comparatorTruthTable 
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
module comparatorTruthTable(A,B, AeqB, AgeqB, AltB);

input [1:0] A;
input [1:0] B;
output reg AeqB;
output reg AgeqB;
output reg AltB;


always @(A[1] or A[0] or B[1] or B[0]) begin
	case({A[1],A[0],B[1],B[0]})
	4'b0000: {AeqB,AgeqB,AltB} = 3'b110;
	4'b0001: {AeqB,AgeqB,AltB} = 3'b001;
	4'b0011: {AeqB,AgeqB,AltB} = 3'b001;
	4'b0010: {AeqB,AgeqB,AltB} = 3'b001;
	4'b0100: {AeqB,AgeqB,AltB} = 3'b010;
	4'b0101: {AeqB,AgeqB,AltB} = 3'b110;
	4'b0111: {AeqB,AgeqB,AltB} = 3'b001;
	4'b0110: {AeqB,AgeqB,AltB} = 3'b001;
	4'b1100: {AeqB,AgeqB,AltB} = 3'b010;
	4'b1101: {AeqB,AgeqB,AltB} = 3'b010;
	4'b1111: {AeqB,AgeqB,AltB} = 3'b110;
	4'b1110: {AeqB,AgeqB,AltB} = 3'b010;
	4'b1000: {AeqB,AgeqB,AltB} = 3'b010;
	4'b1001: {AeqB,AgeqB,AltB} = 3'b010;
	4'b1011: {AeqB,AgeqB,AltB} = 3'b001;
	4'b1010: {AeqB,AgeqB,AltB} = 3'b110;
	endcase
end


endmodule
