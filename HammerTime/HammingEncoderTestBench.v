`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:42:08 09/15/2019
// Design Name:   HammingEncoder
// Module Name:   C:/Users/mulholbn/Downloads/ECE433/ECE433/HammerTime/HammingEncoderTestBench.v
// Project Name:  HammerTime
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: HammingEncoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module HammingEncoderTestBench;

	// Inputs
	reg [3:0] Din;

	// Outputs
	wire [6:0] CodeWord;
	reg [4:0] i;

	// Instantiate the Unit Under Test (UUT)
	HammingEncoder uut (
		.Din(Din), 
		.CodeWord(CodeWord)
	);

	initial begin
	
	for(i=0;i < 16; i = i + 1) begin
	    Din = i; #5;
	end
	$stop;
	end
      
endmodule

