`timescale 1ns / 1ps
//Brendan Mulholand CM 1832
//ECE 433 Lab 5
//9/30/19
//My StopWatch2019fallUnit implimnetation
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

parameter Load = 4'b0000;


//module StopwatchController2019fall(ControlButton, Run, Clear, Reset, Clock);

StopwatchController2019fall Controller(ControlButton, Run, Clear,Reset,Clock);

//module SmartCounter #(parameter INIT = 0, parameter LOW = 0, parameter HIGH = 9, parameter LENGTH = 4)(input CLOCK, input Reset, 
//input Clear, input Pulse, input CarryRun, input [Length-1:0] Load, output Carry, output [3:0] Digit);

SmartCounter #(0, 0, 9, 4) Digit0Counter(Clock, Reset, Clear, TimeReference, Run, Load, CarryOut0, Digit0);
SmartCounter #(0, 0, 9, 4) Digit1Counter(Clock, Reset, Clear, TimeReference, CarryOut0, Load, CarryOut1, Digit1);
SmartCounter #(0, 0, 9, 4) Digit2Counter(Clock, Reset, Clear, TimeReference, CarryOut1, Load, CarryOut2, Digit2);
SmartCounter #(0, 0, 9, 4) Digit3Counter(Clock, Reset, Clear, TimeReference, CarryOut2, Load, CarryOut3, Digit3);


endmodule
