`timescale 1ns / 1ps
//Brendan Mulholland CM1832
//ECE343 Lab 4
//9/23/19
//This is a test bench for the detect module for the 01101 Sequence

module lab4BNMTestBench;

	// Inputs
	reg Clock;
	reg Reset;
	reg X;

	// Outputs
	wire Detected;
	wire [4:0] FiveBitInput;
	wire [2:0] CurrentState;

	// Instantiate the Unit Under Test (UUT)
	lab4BNMDetect uut (
		.Clock(Clock), 
		.Reset(Reset), 
		.X(X), 
		.Detected(Detected), 
		.FiveBitInput(FiveBitInput), 
		.CurrentState(CurrentState)
	);

	initial begin #0 Clock=0; end
	always #10 Clock = ~Clock;
	
	initial fork
	#0 Reset=0; #5 Reset=1; #25 Reset=0;
	#0 X=0; #25 X=1; #45 X=0; #65 X=1; #105 X=0; 
	#125 X=1; #165 X=0; #185 X=1; #205 X=0; #245 X=1;
	#285 X=0; #325 X=1; #345 X=0; #365 X=1;
	#450 $stop;
	
	join
      
endmodule

