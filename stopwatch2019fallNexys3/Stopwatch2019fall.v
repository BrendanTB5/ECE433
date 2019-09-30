`timescale 1ns / 1ps
//v File Name: Stopwatch2019fall.v
// Jianjian Song
// ECE433 Fall 2019
//Date: Sept 25, 2019
// Four-digit stopwatch with 10ms precision on the Nexys 3 board
// Press BTNU to start, stop and clear the stopwatch.
// Press BTND to reset it.
module Stopwatch2019fall (Clock, ControlButton, Reset, Display, Transistors);
input Clock, ControlButton, Reset;
output [3:0] Transistors;
output [7:0] Display;
wire [3:0] Digit3, Digit2, Digit1, Digit0;	//
wire [7:0] SevenSegment3, SevenSegment2, SevenSegment1, SevenSegment0 ;
parameter ParallelLoad = 4'b0000;
wire Run, Clear, Pulse10ns; //Run==1 to count, Run==0 to hold, Clear==1 to clear counter
wire Digit0Carry, Digit1Carry, Digit2Carry;

	Pulse10millisecond Generate10msPulse(Reset,Pulse10ns,Clock);
//module StopwatchController2019fall(ControlButton, Run, Clear, Reset, Clock);
	StopwatchController2019fall Controller(ControlButton, Run, Clear, Reset, Clock);
//module UniversalCounterWithoutLatch(P,Q,S1,S0,MR,TerminalCount, CLOCK) ;
//digit 0
	UniversalCounterWithoutLatch Digit0Counter(ParallelLoad,Digit0,Clear,
	Run&Pulse10ns || Clear, Reset,Digit0Carry,Clock);
	
	BCDto7Segment SevenSegDisplay0 (Digit0,SevenSegment0);
//digit 1
	UniversalCounterWithoutLatch Digit1Counter(ParallelLoad,Digit1,Clear,
	Digit0Carry&Pulse10ns || Clear, Reset,Digit1Carry,Clock);
	
	BCDto7Segment SevenSegDisplay1 (Digit1,SevenSegment1);
//digit 2
	UniversalCounterWithoutLatch Digit2Counter(ParallelLoad,Digit2,Clear,
	Digit1Carry&Pulse10ns || Clear, Reset,Digit2Carry,Clock);
	
	BCDto7Segment SevenSegDisplay2 (Digit2,SevenSegment2);
//digit 3
	UniversalCounterWithoutLatch Digit3Counter(ParallelLoad,Digit3,Clear,
	Digit2Carry&Pulse10ns || Clear, Reset, ,Clock);

	BCDto7Segment SevenSegDisplay3 (Digit3,SevenSegment3);
	
	SevenSegDriver DriverUnit(SevenSegment3, SevenSegment2, SevenSegment1, 
	SevenSegment0, Display, Reset, Clock,Transistors);
endmodule
