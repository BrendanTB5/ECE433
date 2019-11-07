`timescale 1ns / 1ps
//File: CRTClock2019Template.v
//Generate 25MHz VGA clock from a SystemClock
//SystemClockFreq and CRTClockFreq are input parameters in MHz
//ECE433-01 Fall 2019
//Term Project on Pong game on VGA
//this is a template to be completed by students

module CRTClock2019Template #(parameter SystemClockSize=10)(
input [SystemClockSize-1:0] SystemClockFreq, CRTClockFreq, 
input Reset, Clock,
output reg PixelClock);

reg [15:0] PixelCount;

//a counter is needed to generate PixelClock

	always @(posedge Clock) begin
		if(Reset == 1) begin
			PixelClock <= 1'b0;
			PixelCount <= 1'b1;
		end
		else
			if(PixelCount == (SystemClockFreq/(2*CRTClockFreq))) begin
				PixelClock <= ~PixelClock;
				PixelCount <= 1;
			end
			else
				PixelCount <= PixelCount + 1'b1;
				PixelClock <= PixelClock;
	end

endmodule

