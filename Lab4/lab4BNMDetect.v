`timescale 1ns / 1ps
//Brendan Mulholland CM1832
//ECE343 Lab 4
//9/23/19
//This is a detect module for the 01101 Sequence
module lab4BNMDetect(input Clock, input Reset, input X, output reg Detected,
output reg [4:0] FiveBitInput, output reg [2:0] CurrentState);

reg [2:0] nextState;

parameter S1 = 3'd0, S0 = 3'd1, S01 = 3'd2, S011 = 3'd3, S0110 = 3'd4, S01101 = 3'd5;

always @(posedge Clock)

	if(Reset == 1) begin
		CurrentState <= S1;
		FiveBitInput <= 5'd0;
		end
	else begin
		CurrentState <= nextState;
		FiveBitInput <= {FiveBitInput[3:0],X};
		end

always @(CurrentState or X) begin
	if(CurrentState == S01101)
		Detected <= 1;
	else
		Detected <= 0;		
end		


always @(CurrentState or X)	
	case(CurrentState)
		S1: begin
			if(X == 0)
				nextState <= S0;
			else
				nextState <= S1;
			end
		S0: begin
			if(X == 0)
				nextState <= S0;
			else
				nextState <= S01;
			end
		S01: begin
			if(X == 0)
				nextState <= S0;
			else
				nextState <= S011;
			end
		S011: begin
			if(X == 0)
				nextState <= S0110;
			else
				nextState <= S1;
			end
		S0110: begin
			if(X == 0)
				nextState <= S0;
			else
				nextState <= S01101;
			end
		S01101: begin
			if(X == 0)
				nextState <= S0;
			else
				nextState <= S011;
			end
	endcase



endmodule

