`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Brendan Mulholland Issac Lau
// 
// Create Date:    19:36:07 10/20/2019 
// Design Name: 
// Module Name:    I2C_Controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: Alcohol
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module I2C_Controller(
    input clock,
    input ClockI2C,
    input Go,
    input Reset,
    output BaudEnable,
    output ReadorWrite,
    output Select,
    output ShiftorHold,
    output StartStopAck,
    output WriteLoad
    );
	 
	 reg[3:0] Count;
	 reg[2:0] State, NextState;
	 reg TimeOut;
	 reg PosSCLEdge;
	 reg NegSCLEdge;
	 
	 parameter InitState = 3'b0, Start = 3'b1, LoadShiftReg = 3'b10, Write = 3'b11, Receive = 3'b100, Transit = 3'b101, Stop = 3'b110;
	 
	 //Output Logic
	 always @(State) begin
	 case(State)
	 endcase
	 end
	 
	 //Clock logic
	 always @(posedge Clock)
		if(Reset == 1)
			State <= InitState;
		else
			State <= NextState;
			
	
	//module ClockedNegativeOneShot(InputPulse, OneShot, Reset, CLOCK) ;
	ClockedNegativeOneShot NegShot(ClockI2C, NegSCLEdge, Reset, clock);
	
	//module ClockedPositiveOneShot(InputPulse, OneShot, Reset, CLOCK) ;
	
	ClockedPositiveOneShot PosShot(ClockI2C, PosSCLEdge, Reset, clock);
	
	//Next State Logic
	
	always @(*)
		case(State)
			InitState: 
				if(Go == 1)
					if(ClockI2C == 1)
						NextState <= Start;
					else
						NextState <= InitState;
				else
					NextState <= InitState;
			Start: 
				if(TimeOut == 1)
					NextState <= LoadShiftReg;
				else
					NextState <= Start;
			LoadShiftReg:
				if(Count == 9)
					NextState <= LoadShiftReg;
				else
					NextState <= Write;
			Write:
				if(Count == 1)
					NextState <= Recieve;
				else
					NextState <= Write;
			Recieve:
				if(PosSCLEdge == 1)
					NextState <= Transit;
				else
					NextState <= Recieve;
			Transit:
				if(TimeOut == 1)
					NextState <= Stop;
				else
					NextState <= Transit;
			Stop:
				if(TimeOut == 1)
					NextState <= InitState;
				else
					NextState <= Stop;
			default:
				NextState <= InitState;
		endcase


endmodule
