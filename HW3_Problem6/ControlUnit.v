`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:55:46 09/29/2019 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(input Clock, input Reset, input [3:0] Speed, input Start, output reg Load, output reg ShiftOut);
reg [3:0] DelayCount;
reg [3:0] SentCount;
reg [1:0] State;
reg [1:0] NextState;

parameter Init = 2'd0, LoadState = 2'd1, Delay = 2'd2, Shift = 2'd3;
parameter ShiftTarget = 12;



always @(posedge Clock or posedge Reset) begin
	if(Reset == 1)
		State <= Init;
	else
		State <= NextState;
end

always @(*) begin
	case(State)
		Init: begin
				Load <= 0;
				ShiftOut <=0;
				SentCount <= 0;
				DelayCount <= 0;
				if(Start == 1)
					NextState <= LoadState;
				else
					NextState <= Init;
			end
		
		LoadState: begin
				Load <= 1;
				ShiftOut <=0;
				NextState <= Shift;
				SentCount <= 0;
				DelayCount <= 0;
			end
		
		Delay: begin
				Load <= 0;
				ShiftOut <=0;
				if(DelayCount == 0) begin
					NextState <= Shift;
					DelayCount <= 0;
					end
				else begin
					NextState <= Delay;
					DelayCount <= DelayCount -1;
				end
			end
		
		Shift: begin
				Load <= 0;
				ShiftOut <=1;
				SentCount <= SentCount + 1;
				if(SentCount == 12) begin
					NextState <= Init;
					DelayCount <= 0;
				end else
					case(Speed)
						1: begin 
							NextState <= Shift;
							DelayCount <= 0;
							end
						default: begin
							NextState <=Delay;
							DelayCount <= Speed - 1;
							end
					endcase
					
			end
			default: begin
				Load <= 0;
				ShiftOut <= 0;
				SentCount <= 0;
				DelayCount <= 0;
			end
	endcase
end





endmodule
