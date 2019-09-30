// File name	: UniversalCounterWithoutLatch.v
// Written by	: Jianjian Song
// ECE433 Fall 2019
// 4-bit universal bidirectional counter
`timescale 1ns / 1ps

module UniversalCounterWithoutLatch # (parameter LENGTH=4, parameter EndCount=9, parameter BeginCount=0, parameter InitialCount=0)
(input [LENGTH-1:0] P, output reg [LENGTH-1:0] Q, input S1, input S0, input Reset, output TerminalCount,input CLOCK) ;

reg[LENGTH-1:0] NextQ;

always @ (posedge CLOCK or posedge Reset)
	if(Reset==1)	Q <= InitialCount;
	else	Q<=NextQ;

assign TerminalCount = (S1==0)&(S0==1)&(Q==EndCount) | (S1==1)&(S0==0)&(Q==BeginCount);

always@(P or Q or S1 or S0)
	case ({S1,S0})
	0:	NextQ <= Q;	// hold
	1:	begin if (Q==EndCount) begin NextQ<=BeginCount; end
		else begin NextQ <= Q+1'b1;	end
		end // count up
	2:	begin if (Q==BeginCount) begin NextQ<=EndCount; end
		else begin NextQ <= Q-1'b1;	end
		end // count down
	3:	NextQ <= P;				// parallel load
	endcase
endmodule