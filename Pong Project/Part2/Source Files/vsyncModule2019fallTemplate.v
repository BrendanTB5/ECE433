`timescale 1ns / 1ps
//File: vsyncModule2019fallTemplate.v
//To be completed by students. Add your name and date after you have revised this file
//Author: 
//Date: October 28, 2019
//ECE433 Fall 2019
//The line increment is synchronized with the hsync pulse
//synch pulse is generated at the end of the line: Active Video-BackPorch-SynchPulse-FrontPorch
//this is how it is done by the video timer of the pong game
//LineEnd and FrameEnd are ANDed to restart frame

module vsyncModule2019fallTemplate#(parameter yresolution=10)(
input [yresolution-1:0] SynchPulse, FrontPorch, ActiveVideo, BackPorch, 
input LineEnd, reset, clock,
output vsync, output reg [yresolution-1:0] yposition);

wire [yresolution-1:0] ycount;
//hsynch starts next line
ClockedNegativeOneShot RestartUnit(LineEnd, reset, clock, NextLineOneShot);
//a counter is needed to generate synch signal and y coordinate
//to be completed by students
wire [yresolution-1:0] EndCount=SynchPulse+FrontPorch+ActiveVideo+BackPorch;
assign ScreenEnd=ycount==EndCount;	//reset counter

assign vsync = ~(ycount>(ActiveVideo+FrontPorch)&&ycount<=(ActiveVideo+FrontPorch+SynchPulse));
always@(*) 
	yposition<=ycount;


//module UniversalCounter2019fall #(parameter	length = 10) (
//input	[length-1:0] P,BeginCount, EndCount, 
//input S1,S0,Reset, CLOCK,
//output 	reg [length-1:0]	Q,
//output reg TerminalCount);
UniversalCounter2019fall YPositionCounter(10'd0,10'd0, EndCount, ScreenEnd,ScreenEnd||NextLineOneShot, 
 reset, clock, ycount,   ) ;

endmodule
