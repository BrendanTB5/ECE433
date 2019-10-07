`timescale 1ns / 1ps
// File name	: Lab5TopLevel.v
// Written by	: Brendan Mulholland
// ECE433-01 Fall 2019
// Date: October 6,2019
// Purpose:	To hold all the components for the clock stopwatch
module Lab5TopLevel(
    input [1:0] TimeSelect,
    input Clock,
    input ControlButton,
    input Reset,
    input Select,
    input SetClock,
    input SetHour,
    input SetMinute,
    output [7:0] DisplayCode,
    output [3:0] Transistors,
    output AMPM,
    output SecondLED
    );
	 

wire PulseSec, PulseMin, Pulse10;
reg TimeRef;
//module Pulse1Minute(Reset,Pulse20ns,Clock);

	Pulse1Minute OneMinReference(Reset,PulseMin,Clock);
	Pulse1second OneSecReference(Reset,PulseSec,Clock);
	Pulse10millisecond TenMSReference(Reset,Pulse10,Clock);
	
	always@(*)
		case(TimeSelect)
			2'b00: TimeRef <= PulseMin;
			2'b01: TimeRef <= PulseSec;
			2'b10: TimeRef <= Pulse10;
			2'b11: TimeRef <= PulseMin;
		endcase
	
	wire [3:0] D0, D1, D2, D3;
		
	Stopwatch2019fallUnit StopwatchUnit(Clock, ControlButton,Reset, TimeRef, D0, D1, D2, D3);
//module ClockModule2019(input Clock, input Reset, input SetClock, input SetHour, input SetMinute, input TimeReference, output [3:0] Hour10, output [3:0] Hour1, output [3:0] Minute10, output [3:0] Minute1, output AMPM);

	wire [3:0] Hour10, Hour1, Minute10, Minute1;

	ClockModule2019 ClockUnit(Clock,Reset,SetClock,SetHour,SetMinute,TimeRef,Hour10,Hour1,Minute10,Minute1, AMPM);
	
	wire [3:0] Y0, Y1, Y2, Y3;
	
	DisplayMux Mux(D0,D1,D2,D3,Minute1,Minute10,Hour1,Hour10,Select,Y0,Y1,Y2,Y3);
	
	SevenSegDriver DisplayUnit(Y3,Y2,Y1,Y0, DisplayCode, Reset, Clock, Transistors);
	
	reg q = 0;
	
	
	
	always @(posedge PulseSec)
		if(q == 0)
			q <= 1;
		else
			q <= 0;

	
	assign SecondLED = q;
	
	

	
	
endmodule
