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
output [3:0] Hour10, output [3:0] Hour1, output [3:0] Minute10, output [3:0] Minute1, output AMPM);

wire HourInput, MinInput;
wire HourSet, MinSet;

assign HourInput = SetHour && SetClock;
assign MinInput = SetMinute && SetClock;

//module DebouncedOneShot(input Clock, input Button, input Reset, output OneShot);

	DebouncedOneShot HourDetect(Clock, HourInput, Reset, HourSet);
	DebouncedOneShot HourDetect(Clock, MinInput, Reset, MinSet);
	
//module SmartCounter #(parameter INIT = 0, parameter LOW = 0, parameter HIGH = 9, parameter LENGTH = 4)(input CLOCK, input Reset, 
//input Clear, input Pulse, input CarryRun, input [Length-1:0] Load, output Carry, output [3:0] Digit);

SmartCounter #(0, 0, 9, 4) Min1Counter(CLOCK, Reset, Clear, TimeReference, Run, Load, CarryOut0, Digit0);
SmartCounter #(0, 0, 9, 4) Min10Counter(CLOCK, Reset, Clear, TimeReference, Run, Load, CarryOut0, Digit0);
SmartCounter #(0, 0, 9, 4) Hour1Counter(CLOCK, Reset, Clear, TimeReference, Run, Load, CarryOut0, Digit0);
SmartCounter #(0, 0, 9, 4) Hour10Counter(CLOCK, Reset, Clear, TimeReference, Run, Load, CarryOut0, Digit0);

endmodule
