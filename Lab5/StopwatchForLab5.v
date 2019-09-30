`timescale 1ns / 1ps
//Brendan Mulholand CM 1832
//ECE 433 Lab 5
//9/30/19
//The top level module for the Stopwatch
module StopwatchForLab5(
    input Clock,
    input Reset,
    input Select,
    input ControlButton,
    output [7:0] DisplayCode,
    output [3:0] Transistor
    );
	 
wire Pulse;
wire [3:0] D0, D1, D2, D3;
wire [3:0] Y0, Y1, Y2, Y3;
parameter Null = 4'b0000;
	 
//module Pulse10millisecond(Reset,Pulse20ns,Clock);
	Pulse10millisecond Generate10msPulse(Reset,Pulse,Clock);

//module Stopwatch2019fallUnit(input Clock,input ControlButton,input Reset,input TimeReference,output [3:0] Digit0,output [3:0] Digit1,output [3:0] Digit2,output [3:0] Digit3);	 

	Stopwatch2019fallUnit StopwatchUnit(Clock, ControlButton,Reset, Pulse, D0, D1, D2, D3);
	
	DisplayMux Mux(D0,D1,D2,D3,Null,Null,Null,Null,Select,Y0,Y1,Y2,Y3);
	
//module SevenSegDriver(D3, D2, D1, D0, Display, Reset, Clock, Select)
	SevenSegDriver DisplayUnit(Y3,Y2,Y1,Y0, DisplayCode, Reset, Clock, Transistor);
	
	
endmodule
