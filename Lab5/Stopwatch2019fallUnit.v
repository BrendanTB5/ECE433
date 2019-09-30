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
	 
reg Run;
reg Clear;


	 
//module StopwatchController2019fall(ControlButton, Run, Clear, Reset, Clock);

StopwatchController2019fall Controller(ControlButton, Run, Clear,Reset,Clock);


endmodule
