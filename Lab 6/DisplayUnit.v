`timescale 1ns / 1ps
//Jianjian Song
////ECE433 Fall 2019
//Integrated 7-Segment Display Unit for Xilinx Nexys 3
module DisplayUnit(D0,D1,D2,D3, Reset, Clock, Display, Transistors);	 
input [3:0] D0,D1,D2,D3;
input Reset, Clock;
output [7:0] Display;
output [3:0] Transistors;
wire [7:0] D0Seg, D1Seg, D2Seg, D3Seg;

	 //module BCDto7Segment (BCDnumber,SEGMENTS);
	HEXto7Segment Digit0(D0,D0Seg);
	HEXto7Segment Digit1(D1,D1Seg);
	HEXto7Segment Digit2(D2,D2Seg);
	HEXto7Segment Digit3(D3,D3Seg);

//module SevenSegDriver(D3, D2, D1, D0, Display, Reset, Clock, Select) ;
 SevenSegDriver DriverUnit(D0Seg,D1Seg,D2Seg,D3Seg, Display, Reset, Clock,Transistors) ;	


endmodule
