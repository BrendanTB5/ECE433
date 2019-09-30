`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:41:40 09/30/2019 
// Design Name: 
// Module Name:    Stopwatch2019fallUnit 
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
module Stopwatch2019fallUnit(
    input Clock,
    input ControlButton,
    input Reset,
    input TimeReference,
    output [3:0] Digit0,
    output [3:0] Digit1,
    output [3:0] Digit2,
    output [3:0] Digit3
    );
	 
wire Run;
wire Clear;
wire CarryOut0;
wire CarryOut1;
wire CarryOut2;
wire CarryOut3;


//module StopwatchController2019fall(ControlButton, Run, Clear, Reset, Clock);

StopwatchController2019fall Controller(ControlButton, Run, Clear,Reset,Clock);

//module SmartCounter #(parameter INIT = 0, parameter LOW = 0, parameter HIGH = 9, parameter LENGTH = 4)(input CLOCK, input Reset, 
//input Clear, input Pulse, input CarryRun, input [Length-1:0] Load, output Carry, output [7:0] SEGMENTS);

SmartCounter #(0, 0, 9, 4) Digit0Counter(CLOCK, Reset, Clear, TimeReference, Run, 


endmodule
