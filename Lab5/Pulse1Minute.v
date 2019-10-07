`timescale 1ns / 1ps
// File name	: Pulse1min.v
// Written by	: Brendan Mulholland
// ECE433-01 Fall 2019
// Date: October 6,2019
// Purpose:	To generate one single positive pulse 
//	every 1minute from a 100MHz clock
module Pulse1Minute(Reset,Pulse20ns,Clock);


parameter	PulsePeriod = 33'd6000000000; //10nsx6,000,000,000=1minute
parameter 	NumberOfBits = 33;
input			Reset, Clock;
output reg	Pulse20ns;
reg 	[NumberOfBits-1:0]	count;
	
always @ (posedge Clock or posedge Reset)
	if(Reset==1)		begin count <= 0; Pulse20ns<=0; end
	else if (count==PulsePeriod)
		begin count<=0; Pulse20ns<=1; end
		else begin count <= count+1'b1; Pulse20ns <= 0; end
endmodule


