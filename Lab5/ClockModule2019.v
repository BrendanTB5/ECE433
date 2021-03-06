`timescale 1ns / 1ps
// File name	: ClockModule2019.v
// Written by	: Brendan Mulholland
// ECE433-01 Fall 2019
// Date: October 6,2019
// Purpose:	The main file for the clock module
module ClockModule2019(input Clock, input Reset, input SetClock, input SetHour, input SetMinute, input TimeReference,
output [3:0] Hour10, output [3:0] Hour1, output [3:0] Minute10, output [3:0] Minute1, output AMPM);

wire HourInput, MinInput;
wire HourSet, MinSet;
wire IncMin10, IncHour1, IncHour10;
wire IncMin10Out, IncHour1Out, IncHour10Out;

assign HourInput = SetHour && SetClock;
assign MinInput = SetMinute && SetClock;

wire AMPMCarry;
wire RollOver;
reg RollOverReg;
reg AMPMCarryReg;



//module DebouncedOneShot(input Clock, input Button, input Reset, output OneShot);

	DebouncedOneShot HourDetect(Clock, HourInput, Reset, HourSet);
	DebouncedOneShot MinDetect(Clock, MinInput, Reset, MinSet);
	
	
	wire IncMinReference = MinSet || TimeReference;
	wire IncHourReference = HourSet || TimeReference;
	
//PositiveClockedOneShot(InputPulse, OneShot, Reset, CLOCK) ;

	//PositiveClockedOneShot OS10Min(IncMin10Out, IncMin10, Reset,Clock);
	//PositiveClockedOneShot OSHour1(IncHour1Out, IncHour1, Reset,Clock);
	//PositiveClockedOneShot OSHour10(IncHour10Out, IncHour10, Reset,Clock);

	
	
	
	wire LoadClock = ((Hour10 == 1) && (Hour1 == 2) && (Minute10 == 5) && (Minute1 == 9) && TimeReference) || (HourSet && (Hour10 == 1) && (Hour1 == 2));
	wire IncAMPM = ((Hour10 == 1) && (Hour1 == 1) && (Minute10 == 5) && (Minute1 == 9) && TimeReference) || (HourSet && (Hour10 == 1) && (Hour1 == 1));
	
	assign IncHour1 = IncHour1Out || HourSet;
	
//module SmartCounter #(parameter INIT = 0, parameter LOW = 0, parameter HIGH = 9, parameter LENGTH = 4)(input CLOCK, input Reset, 
//input Clear, input Pulse, input CarryRun, input [Length-1:0] Load, output Carry, output [3:0] Digit);

	SmartCounter #(0, 0, 9, 4) Min1Counter(Clock, Reset, LoadClock, IncMinReference, 1'b1, 4'b0000, IncMin10, Minute1);
	SmartCounter #(0, 0, 5, 4) Min10Counter(Clock, Reset, LoadClock, IncMinReference, IncMin10, 4'b0000, IncHour1Out, Minute10);
	SmartCounter #(1, 0, 9, 4) Hour1Counter(Clock, Reset, LoadClock, IncHourReference, IncHour1, 4'b0001, IncHour10, Hour1);
	SmartCounter #(0, 0, 1, 4) Hour10Counter(Clock, Reset, LoadClock, IncHourReference, IncHour10, 4'b0000, RollOver, Hour10);

	//AM = 0 PM = 1
	SmartCounter #(0,0,1,1) AMPMCounter(Clock, Reset, Reset, IncAMPM, IncAMPM, 1'b0, AMPMCarry, AMPM);
	

endmodule
