`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:43:11 10/06/2019
// Design Name:   ClockModule2019
// Module Name:   E:/ECE433/ECE433/Lab5/ClockTB.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ClockModule2019
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ClockTB;

	// Inputs
	reg Clock;
	reg Reset;
	reg SetClock;
	reg SetHour;
	reg SetMinute;
	reg TimeReference;

	// Outputs
	wire [3:0] Hour10;
	wire [3:0] Hour1;
	wire [3:0] Minute10;
	wire [3:0] Minute1;
	wire AMPM;
	
	reg [6:0] i;

	// Instantiate the Unit Under Test (UUT)
	ClockModule2019 uut (
		.Clock(Clock), 
		.Reset(Reset), 
		.SetClock(SetClock), 
		.SetHour(SetHour), 
		.SetMinute(SetMinute), 
		.TimeReference(TimeReference), 
		.Hour10(Hour10), 
		.Hour1(Hour1), 
		.Minute10(Minute10), 
		.Minute1(Minute1), 
		.AMPM(AMPM)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		Reset = 0;
		SetClock = 0;
		SetHour = 0;
		SetMinute = 0;
		TimeReference = 0;
	end
	always #5 Clock = ~Clock;

	
	initial begin
	#10 Reset = 1;
	#10 Reset = 0;
	
	//Increment through 10 minutes
	#2 TimeReference = ~TimeReference;
	for(i=0; i < 64; i= i+1) begin
		#5 TimeReference = ~TimeReference;
		#5 TimeReference = ~TimeReference;
	end
	
	$stop;
	
	end
	
	
	
	
      
endmodule

