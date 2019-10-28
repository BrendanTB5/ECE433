`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Brendan Mulholland Issac Lau
// Module Name:    I2C_Controller 
// Control Unit Logic;
//////////////////////////////////////////////////////////////////////////////////
module I2C_Controller(
    input clock,
    input ClockI2C,
    input Go,
    input Reset,
    output reg BaudEnable,
    output reg ReadorWrite,
    output reg Select,
    output reg ShiftorHold,
    output reg StartStopAck,
    output reg WriteLoad
    );
	 
	 reg[3:0] Count;
	 reg[2:0] State, NextState;
	 wire TimeOut;
	 wire PosSCLEdge;
	 wire NegSCLEdge;
	 reg ClearTimer;
	 
	 parameter InitState = 3'b0, Start = 3'b1, LoadShiftReg = 3'b10, Write = 3'b11, Receive = 3'b100, Transit = 3'b101, Stop = 3'b110;
	 
	 //Output Logic
	 always @(*) begin
	 case(State)
		InitState: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 1; end
		Start: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 0; end
		LoadShiftReg: begin BaudEnable <= 1; ReadorWrite <= 0; WriteLoad <= 1; Select <= 0; StartStopAck <= 0; ClearTimer <= 1; end
		Write: begin BaudEnable <= 1; ReadorWrite <= 0; WriteLoad <= 0; Select <= 1; StartStopAck <= 0; ClearTimer <= 1; end
		Receive: begin BaudEnable <= 1; ReadorWrite <= 1; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 1; end
		Transit: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 0; ClearTimer <= 0; end
		Stop: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 0; end
		default: begin BaudEnable <= 0; ReadorWrite <= 0; WriteLoad <= 0; Select <= 0; StartStopAck <= 1; ClearTimer <= 1; end
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
			else
				Count <= 4'd10;
				
			State <= NextState;
		end
		
			
	end

	always @(*)
		if(State == Write)
			ShiftorHold <= NegSCLEdge;
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
					NextState <= Receive;
				else
					NextState <= Write;
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
