`timescale 1ns / 1ps
// File name	: Pulse1s.v
// Written by	: Brendan Mulholland
// ECE433-01 Fall 2019
// Date: October 6,2019
// Purpose:	To generate one single positive pulse 
//	every 1s from a 100MHz clock
module Pulse1second(Reset,Pulse20ns,Clock);

parameter	PulsePeriod = 30'd100000000; //10nsx100,000,000=1s
parameter 	NumberOfBits = 30;
input			Reset, Clock;
output reg	Pulse20ns;
reg 	[NumberOfBits-1:0]	count;
	
always @ (posedge Clock or posedge Reset)
	if(Reset==1)		begin count <= 0; Pulse20ns<=0; end
	else if (count==PulsePeriod)
		begin count<=0; Pulse20ns<=1; end
		else begin count <= count+1'b1; Pulse20ns <= 0; end
endmodule

