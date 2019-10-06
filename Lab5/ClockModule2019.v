`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:11:08 09/30/2019 
// Design Name: 
// Module Name:    ClockModule2019 
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
module ClockModule2019(input Clock, input Reset, input SetClock, input SetHour, input SetMinute, input TimeReference,
output reg [3:0] Hour10, output reg [3:0] Hour1, output reg [3:0] Minute10, output reg [3:0] Minute1, output reg AMPM);

wire HourInput, MinInput;
wire HourSet, MinSet;
wire IncMin10, IncHour1, IncHour10;
wire IncMin10Out, IncHour1Out, IncHour10Out;

assign HourInput = SetHour && SetClock;
assign MinInput = SetMinute && SetClock;

parameter DefMin = 0, Def10 = 0, DefHour = 1, DefHour10 = 0;
wire AMPMCarry;
wire RollOver;
reg RollOverReg;
reg AMPMCarryReg;

wire [3:0] holdHour10, holdHour1, holdMin10, holdMin1;
wire holdAMPM;



//module DebouncedOneShot(input Clock, input Button, input Reset, output OneShot);

	DebouncedOneShot HourDetect(Clock, HourInput, Reset, HourSet);
	DebouncedOneShot MinDetect(Clock, MinInput, Reset, MinSet);
	
	
	wire IncMinReference = MinSet || TimeReference;
	wire IncHourReference = HourSet || TimeReference;
	
//PositiveClockedOneShot(InputPulse, OneShot, Reset, CLOCK) ;

	PositiveClockedOneShot OS10Min(IncMin10Out, IncMin10, Reset,Clock);
	PositiveClockedOneShot OSHour1(IncHour1Out, IncHour1, Reset,Clock);
	PositiveClockedOneShot OSHour10(IncHour10Out, IncHour10, Reset,Clock);

	
	
	
	wire LoadClock = (holdHour10 == 1) && (holdHour1 == 2) && (holdMin10 == 5) && (holdMin1 == 9) && TimeReference || HourSet && (holdHour10 == 1) && (holdHour1 == 2);
	wire IncAMPM = (holdHour10 == 1) && (holdHour1 == 1) && (holdMin10 == 5) && (holdMin1 == 9) && TimeReference || HourSet && (holdHour10 == 1) && (holdHour1 == 1);
	
	
//module SmartCounter #(parameter INIT = 0, parameter LOW = 0, parameter HIGH = 9, parameter LENGTH = 4)(input CLOCK, input Reset, 
//input Clear, input Pulse, input CarryRun, input [Length-1:0] Load, output Carry, output [3:0] Digit);

	SmartCounter #(0, 0, 9, 4) Min1Counter(Clock, Reset, LoadClock, IncMinReference, 1'b1, 1'b0, IncMin10Out, holdMin1);
	SmartCounter #(0, 0, 5, 4) Min10Counter(Clock, Reset, LoadClock, IncMinReference, IncMin10, 1'b0, IncHour1Out, holdMin10);
	SmartCounter #(1, 0, 9, 4) Hour1Counter(Clock, Reset, LoadClock, IncHourReference, IncHour1, 1'b1, IncHour10Out, holdHour1);
	SmartCounter #(0, 0, 1, 4) Hour10Counter(Clock, Reset, LoadClock, IncHourReference, IncHour10, 1'b0, RollOver, holdHour10);

	//AM = 0 PM = 1
	SmartCounter #(0,0,1,1) AMPMCounter(Clock, Reset, IncAMPM, IncAMPM, IncAMPM, 1'b0, AMPMCarry, holdAMPM);
	
	always @(*)begin
		Hour10 <= holdHour10;
		Hour1 <= holdHour1;
		Minute10 <= holdMin10;
		Minute1 <= holdMin1;
		AMPM <= holdAMPM;
		RollOverReg <= RollOver;
		AMPMCarryReg <= AMPMCarry;
	end

endmodule
