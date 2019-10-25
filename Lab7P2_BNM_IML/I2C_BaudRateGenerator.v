`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Brendan Mulholland Issac Lau
// 
// Create Date:    18:14:50 10/20/2019 
// Design Name: 
// Module Name:    I2C_BaudRateGenerator 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Generates a Baud for I2C
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module I2C_BaudRateGenerator (WaveFrequency, ClockFrequency, StartStop, SignalOut, Reset, clock);
input StartStop, Reset, clock;
input [19:0] WaveFrequency;  //up to 1,000,000
input [29:0] ClockFrequency; //up to 1GHz

output reg  SignalOut; 
reg [15:0] 	baud_count;

 always @(posedge clock)
      if(Reset==1) begin 
			baud_count <= 16'b0;
      	SignalOut <= 1'b1;
		end
	else 
		case (StartStop)
			1'b0: begin SignalOut <= 1'b1; baud_count <= 16'b0; end
			1'b1: if (baud_count < (ClockFrequency/(WaveFrequency*2)-1)) 
			begin
						baud_count <= baud_count + 1'b1;
						SignalOut <= SignalOut;
			end
			 else
			begin   baud_count <= 16'b0;   SignalOut <= ~SignalOut;   end
		endcase
endmodule

