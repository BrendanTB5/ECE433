`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:36:48 09/30/2019
// Design Name:   ControlUnit
// Module Name:   C:/Users/mulholbn/Downloads/ECE433/ECE433/HW3_Problem6/ControlTestBench.v
// Project Name:  HW3_Problem6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlTestBench;

	// Inputs
	reg Clock;
	reg Reset;
	reg [3:0] Speed;
	reg Start;

	// Outputs
	wire Load;
	wire ShiftOut;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.Clock(Clock), 
		.Reset(Reset), 
		.Speed(Speed), 
		.Start(Start), 
		.Load(Load), 
		.ShiftOut(ShiftOut)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		Reset = 0;
		Speed = 0;
		Start = 0;
		end
		always #4 Clock=~Clock;
		initial fork
		#0 Reset = 1;  #10 Reset = 0;  
		#0 Start = 0; #23 Start = 1;  #40 Start = 0; #230 Start = 1; #250 Start = 0; 
		#0 Speed = 2;  #220 Speed = 3;  
		#400 $stop;
		join
      
endmodule

