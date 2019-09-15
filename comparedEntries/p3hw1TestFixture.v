`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:06:01 09/14/2019
// Design Name:   comparatorGates
// Module Name:   C:/Users/mulholbn/Downloads/ECE433/ECE433/comparedEntries/p3hw1TestFixture.v
// Project Name:  comparedEntries
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparatorGates
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module p3hw1TestFixture;

	// Inputs
	reg [1:0] A;
	reg [1:0] B;
	
	reg[4:0] i;

	// Outputs
	wire AeqBgates, AeqBexpressions, AeqBTruthTable;
	wire AgeqBgates, AgeqBexpressions, AgeqBTruthTable;
	wire AltBgates, AltBexpressions, AltBTruthTable;

	// Instantiate the Unit Under Test (UUT)
	comparatorGates uut1 (
		.A(A), 
		.B(B), 
		.AeqB(AeqBgates), 
		.AgeqB(AgeqBgates), 
		.AltB(AltBgates)
	);
	comparatorExpressions uut2 (
		.A(A), 
		.B(B), 
		.AeqB(AeqBexpressions), 
		.AgeqB(AgeqBexpressions), 
		.AltB(AltBexpressions)
	);
	comparatorTruthTable uut3 (
		.A(A), 
		.B(B), 
		.AeqB(AeqBTruthTable), 
		.AgeqB(AgeqBTruthTable), 
		.AltB(AltBTruthTable)
	);

	initial begin
	
	
	
	for(i=0; i < 16; i = i+1) begin
		{A[1],A[0],B[1],B[0]} <= i;
		#5;
		
	end
	$stop;
		

	end
      
endmodule

