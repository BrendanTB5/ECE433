`timescale 1ns / 1ps
///File: PongGame2019fall_JJS_JJS.v
//pong game with new controller template
//ECE433-01 Fall 2019
//Term Project VGA driver template
//
//Date: October 28, 2019
//the video controller uses synch timings from the pong game
//the system clock should be 100MHz
//the VGA pixel clock is 25MHz
//this is a template for students to complete
//try to match the video_timer
//based on pong from http://www.bigmessowires.com/2009/06/21/fpga-pong/. 

module PongNexys3(
    input rota, rotb, Reset, Clock, 
    output [2:0] red,
    output [2:0] green,
    output [1:0] blue,
    output hsync, vsync
    );

wire [9:0] xpos;
wire [9:0] ypos;

parameter [9:0] NumberofPixels=10'd640, NumberofLines=10'd480;
parameter [9:0] SystemClock=10'd100, CRTClock=10'd25; //MHz 

//module CRTcontroller2019fall #(parameter ResolutionSize=10, SystemClockSize=10) (
//input [SystemClockSize-1:0] SystemClockFreq, CRTClockFreq, 
//input [ResolutionSize-1:0] Xresolution, Yresolution,
//input reset, clock, output hsync, vsync, 
//output [ResolutionSize-1:0] xpos, ypos);

CRTcontroller2019fall VGAdisplay(SystemClock, CRTClock, 
     NumberofPixels, NumberofLines, Reset, Clock, hsync, vsync, xpos, ypos);
	  
//module game2019fall(
//				input [9:0] xpos, ypos,
//				input rota, rotb,Reset, clk25,
//				output [2:0] red,
//				output [2:0] green,
//				output [1:0] blue,
//				);
game2019fall gameUnit(xpos, ypos, rota, rotb, Reset,Clock, red, green, blue);
					
endmodule
