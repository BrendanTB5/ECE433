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
	 input SDA,
    output reg BaudEnable,
    output reg ReadorWrite,
    output reg Select,
    output reg ShiftorHold,
    output reg StartStopAck,
    output reg WriteLoad,
	 output reg DONE
    );
	 
	 reg[3:0] Count;
	 reg[2:0] State, NextState;
	 wire TimeOut;
	 wire PosSCLEdge;
	 wire NegSCLEdge;
	 reg ClearTimer;
	 
	 parameter InitState = 4'd0, Start = 4'd1, LoadShiftReg = 4'd2, Write = 4'd3, Ack1 = 4'd4, Connected = 4'd5, Read = 4'd6, Ack2 = 4'd7, Transit = 4'd8, Stop = 4'd9, Wait = 4'd10;
	 
	 //Output Logic
	 always @(*) begin
	 case(State)
		InitState: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 1; DONE <= 0; end
		Start: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 0; DONE <= 0; end
		LoadShiftReg: begin BaudEnable <= 1; ReadorWrite <= 0; WriteLoad <= 1; Select <= 0; StartStopAck <= 0; ClearTimer <= 1; DONE <= 0; end
		Write: begin BaudEnable <= 1; ReadorWrite <= 0; WriteLoad <= 0; Select <= 1; StartStopAck <= 0; ClearTimer <= 1; DONE <= 0; end
		Ack1: begin BaudEnable <= 1; ReadorWrite <= 1; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 1; DONE <= 0; end
		Connected: begin BaudEnable <= 1; ReadorWrite <= 1; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 1; DONE <= 0; end
		Read: begin BaudEnable <= 1; ReadorWrite <= 1; WriteLoad <= 0; Select <= 1; StartStopAck <= 0; ClearTimer <= 1; DONE <= 0; end
		Wait: begin BaudEnable <= 1; ReadorWrite <= 1; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 1; DONE <= 0; end
		Ack2: begin BaudEnable <= 1; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 1; DONE <= 0; end
		Transit: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 0; DONE <= 0; end
		Stop: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 0; DONE <= 1; end
		default: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 1; DONE <= 0; end
	 endcase
	 end
	 
	 //Clock logic
	 always @(posedge clock) begin
		if(Reset == 1)
			State <= InitState;
		else begin
			if((NextState == LoadShiftReg || NextState == Write))
				if(NegSCLEdge == 1)
					Count <= Count - 1'b1;
				else
					Count <= Count;
			else if(NextState == Read)
				if(PosSCLEdge == 1)
					Count <= Count - 1'b1;
				else
					Count <= Count;
			else
				Count <= 4'd10;
			State <= NextState;
		end
		
			
	end
			
	
	always @(*)
		if(State == Write)
			ShiftorHold <= NegSCLEdge;
		else if(State == Read)
			ShiftorHold <= PosSCLEdge;
		else
			ShiftorHold <= 0;
		
			
	
	//module ClockedNegativeOneShot(InputPulse, OneShot, Reset, CLOCK) ;
	ClockedNegativeOneShot NegShot(ClockI2C, NegSCLEdge, Reset, clock);
	
	//module ClockedPositiveOneShot(InputPulse, OneShot, Reset, CLOCK) ;
	
	ClockedPositiveOneShot PosShot(ClockI2C, PosSCLEdge, Reset, clock);
	
	//module DelayLoop(MR,Timeout,Clock) ;
	
	DelayLoop Timer(ClearTimer, TimeOut,clock);
	
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
					NextState <= Write;
				else
					NextState <= LoadShiftReg;
			Write:
				if(Count == 1)
					NextState <= Ack1;
				else
					NextState <= Write;
			Ack1:
				if(PosSCLEdge == 1)
					NextState <= Connected;
				else
					NextState <= Ack1;
			Connected:
				if(SDA ==0)
					NextState <= Read;
				else
					NextState <= InitState;
			Receive:
				if(PosSCLEdge == 1)
					NextState <= Transit;
				else
					NextState <= Receive;
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
