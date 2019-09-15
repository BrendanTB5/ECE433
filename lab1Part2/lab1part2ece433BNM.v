`timescale 1ns / 1ps
//Author: Brendan Mulholland
//CM 1832
//Date: Sept. 8 2019
//Purpose: ECE433-01 Lab #1 Part 2
module lab1part2ece433BNM(A0,A1,B0,B1,Y0,Y1,Y2);
input A0,A1,B0,B1;
output Y0,Y1,Y2;

wire A0not,A1not,B0not,B1not,OR1out,OR2out,OR3out,OR4out,OR5out,OR6out,AND1out,AND2out,AND3out,AND4out,AND5out;

	not NA0(A0not,A0);
	not NA1(A1not,A1);
	not NB0(B0not,B0);
	not NB1(B1not,B1);

	xor U1(Y0, B0, A0);
	or U2(OR1out, A0,A1,B1);
	or U3(OR2out, A1,B0,B1);
	or	U4(OR3out, A0not, A1, B0not,B1not);
	or U5(OR4out, A0not, A1not, B0not, B1);
	or U6(OR5out, A1not, A0, B1not);
	or U7(OR6out, A1not, B1not, B0);
	and U8(AND1out, B0, A0, A1);
	and U9(AND2out, B0, B1, A0);
	and U10(AND3out, B1, A1);
	
	
	and U11(AND4out,OR1out, OR2out, OR3out);
	and U12(AND5out, OR4out, OR5out, OR6out);
	
	
	and U13(Y1, AND4out, AND5out);
	or U14(Y2, AND1out, AND2out, AND3out);
endmodule

/* UCF FILE COMPONENTS

# PlanAhead Generated physical constraints 

NET "A0" LOC = V8;
NET "A1" LOC = T5;
NET "B0" LOC = N8;
NET "B1" LOC = U8;
NET "Y2" LOC = M11;
NET "Y1" LOC = U15;
NET "Y0" LOC = U16;
*/
