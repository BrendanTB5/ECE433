`timescale 1ns / 1ps
//Brendan Mulholand CM 1832
//ECE 433 Prob
//
//
module SmartCounter #(parameter INIT = 0, parameter LOW = 0, parameter HIGH = 9, parameter LENGTH = 4)(input CLOCK, input Reset, 
input Clear, input Pulse, input CarryRun, input [Length-1:0] Load, output Carry, output [7:0] SEGMENTS);

//module UniversalCounterWithoutLatch # (parameter LENGTH, parameter EndCount, parameter BeginCount, parameter InitialCount)
//(input [LENGTH-1:0] P, output reg [LENGTH-1:0] Q, input S1, input S0, input Reset, output TerminalCount,input CLOCK)

	wire [LENGTH-1:0] Num;

	wire S0 = CarryRun & Pulse || Clear;

	UniversalCounterWithoutLatch #(LENGTH, HIGH, LOW, INIT) counter(Load,Num, Clear, S0, Reset, Carry, CLOCK);


//module BCDto7Segment (BCDnumber,SEGMENTS);
	BCDto7Segment Seg (Num, SEGMENTS);


endmodule
