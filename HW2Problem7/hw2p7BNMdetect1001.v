`timescale 1ns / 1ps
//Brendan Mulholland CM1832
//ECE343 HW2 Problem 7
//9/22/19
//This is the Detect 1001 that I created in problem 6
module hw2p7BNMdetect1001(input InputBit, input CLK, input Reset, output reg Detected1001,
output reg [2:0] nextState,output reg [2:0] currState);

parameter S0 = 3'd0, S1 = 3'd1, S10 = 3'd2, S100 = 3'd3, S1001 = 3'd4;

always @(posedge CLK or negedge Reset)
	if(Reset == 0)
		currState <= 0;
	else
		currState <= nextState;

always @(currState or InputBit) begin
	if(currState == S1001)
		Detected1001 <= 1;
	else
		Detected1001 <= 0;		
	case(currState)
		S0: begin
			if(InputBit == 0)
				nextState <= S0;
			else
				nextState <= S1;
			end
		S1: begin
			if(InputBit == 0)
				nextState <= S10;
			else
				nextState <= S1;
			end
		S10: begin
			if(InputBit == 0)
				nextState <= S100;
			else
				nextState <= S1;
			end
		S100: begin
			if(InputBit == 0)
				nextState <= S0;
			else
				nextState <= S1001;
			end
		S1001: begin
			if(InputBit == 0)
				nextState <= S10;
			else
				nextState <= S1;
			end
	endcase


end



endmodule
