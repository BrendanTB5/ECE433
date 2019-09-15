`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:17 09/14/2019 
// Design Name: 
// Module Name:    comparatorGates 
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
module comparatorGates(A,B,AeqB,AgeqB,AltB);

input [1:0] A;
input [1:0] B;
output AeqB, AgeqB, AltB;

wire A1not, A0not, B1not, B0not,lt1out,lt2out,lt3out,eq1out,eq2out,eq3out,eq4out,geq1out,geq2out,geq3out,geq4out,geq5out;


not N1(A1not,A[1]);
not N2(A0not,A[0]);
not N3(B1not,B[1]);
not N4(B0not,B[0]);


and lt1(lt1out, B[1], A1not);
and lt2(lt2out, B[1],B[0],A0not);
and lt3(lt3out, A1not, A0not, B[0]);
or lt(AltB, lt1out,lt2out,lt3out);

and eq1(eq1out,B1not,B0not,A1not,A0not);
and eq2(eq2out,B1not,A1not,B[0],A[0]);
and eq3(eq3out,B[1],B[0],A[1],A[0]);
and eq4(eq4out,B[1],A[1],B0not,A0not);
or eq(AeqB,eq1out,eq2out,eq3out,eq4out);


and geq1(geq1out,B1not,B0not);
and geq2(geq2out,A[1],A[0]);
and geq3(geq3out,B1not,A1not,A[0]);
and geq4(geq4out,B1not,A0not,A[1]);
and geq5(geq5out,B[1],B0not,A[1]);
or geq(AgeqB,geq1out,geq2out,geq3out,geq4out,geq5out);




endmodule
