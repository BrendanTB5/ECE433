`timescale 1ns / 1ps
// Lab #2, ECE433 Fall 2019
// Author: Brendan Mulholland
// Date: September 15, 2019
// 4-bit adder and subtractor Test Bench
//This is the test bench for the adder and the subtractor. This will test both the cascading 1 bit adders and the single file adder.

module adderSubtractorTB;
	 reg [3:0] D1, D2; reg AddOrSub;
	 wire [3:0] Sum1, Sum2;
	 wire Cout1, Cout2;
	//version 1
	//module AdderBNMversion1 (Minuend, Subtrahend, SumDiff, CarryOut, Mode);
	adderBNMversion1 TestBench1(.Minuend(D1),.Subtrahend(D2),.SumDiff(Sum1),.CarryOut(Cout1),.Mode(AddOrSub));
	//version 2
	adderBNMversion2 TestBench2(D1, D2, Sum2, Cout2, AddOrSub);
 
 
	//test patterns AddOrSub=0 for addition = 1 for subtraction
	 initial begin
	 D1=0; D2=0; AddOrSub=0; #10; //#10 states the values remain for 10 ns
	 D1=3; D2=4; AddOrSub=0; #20;
	 D1=5; D2=2; AddOrSub=1; #10;
	 D1=6; D2=5; AddOrSub=0; #10;
	 D1=7; D2=7; AddOrSub=1; #10;
	 D1=7; D2=7; AddOrSub=0; #10;
	 D1=8; D2=9; AddOrSub=0; #10;
	 D1=15; D2=12; AddOrSub=1; #10;
	 $stop;
	 end
endmodule 