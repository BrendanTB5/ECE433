`timescale 1ns / 1ps

//Brendan Mulholland CM1832
//ECE343 HW2 Problem 7
//9/22/19
//This is the Test Bench for Detect 1001
module hw2p7BNMTestBench;

		
	
	reg x;
	reg CLK;
	reg r;
	

	// Outputs
	wire Detected1001;
	wire [2:0] nextState;
	wire [2:0] currentState;

	// Instantiate the Unit Under Test (UUT)
	hw2p7BNMdetect1001 uut (x, CLK, r, Detected1001,nextState,currentState);

	initial begin #6 CLK=0; end
	always #5 CLK = ~CLK;
	
	initial fork
	#0 r=1; #6 r=0; #16 r=1;
	#0 x=0; #26 x=1; #46 x=0; #66 x=1; #86 x=0; 
	#106 x=1; #116 x=0; #146 x=1; #156 x=0; #166 x=1;
	#180 $stop;
	
	join
	

      
endmodule




