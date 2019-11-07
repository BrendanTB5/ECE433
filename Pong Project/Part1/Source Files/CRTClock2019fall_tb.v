`timescale 1ns / 1ps
//ECE433 Fall 2019
module CRTClock2019fall_tb;

	reg [30:0] SystemClock, CRTclock;
	reg Reset, Clock;

	wire pixelclock;
//module CRTClock2018fall(SystemClockFreq, CRTClockFreq, PixelClock, Reset, Clock);
	CRTClock2019Template uut (SystemClock, CRTclock, pixelclock, Reset, Clock);

	initial begin SystemClock = 100; CRTclock=4; Reset = 0; Clock = 0; end
 
	initial fork
	#0 Reset=1; #20 Reset=0;
	#800 $stop;
	join
	always #4 Clock=~Clock;   
endmodule

