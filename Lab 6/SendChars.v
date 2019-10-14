`timescale 1ns / 1ps
//overall controller for Transmit Test
//ECE433 Fall 2019
//Jianjian Song
//September 30, 2019
//Send a number of characters through uart
//send data until data=NUL
//Start is a one shot
//baud rate clock is made a one shot to write to uart
//using tx_full==0 to write to uart does not seem to work
//because the uart tranmit buffer is overwritten.

module SendChars(Start, tx_full, write_to_uart, RAMaddress, 
data, Transmitting,  en_16_x_baud, reset, clock);
parameter RAMaddressBits=6;
parameter NUL=8'd0;
input Start, tx_full, en_16_x_baud, reset, clock;
input [7:0] data;
output reg write_to_uart, Transmitting;
output [RAMaddressBits-1:0] RAMaddress; 

//module PositiveClockedOneShot(InputPulse, OneShot, Reset, CLOCK) ;

PositiveClockedOneShot StartOneShot(Start, OneShotStart,reset, clock);
wire  BaudOneShot;
PositiveClockedOneShot baudOneShotUnit(en_16_x_baud, BaudOneShot,reset, clock);
reg [RAMaddressBits-1:0] RAMaddress; 
parameter Startingaddress=6'd0;
always@(posedge clock)
	if(reset==1) Transmitting<=0;
	else if (OneShotStart==1) Transmitting<=1;
	else if(data==NUL)
		Transmitting<=0;
	else Transmitting<=Transmitting;

//Overall Controller
always@(posedge clock)
	if (reset==1 || data==NUL) begin write_to_uart<=0; RAMaddress<=Startingaddress; end
	else 
		case (Transmitting)
			1'b0: begin write_to_uart<=1'b0;  RAMaddress<=Startingaddress; end
			1'b1:
				if (BaudOneShot==1&&tx_full==0) begin
					write_to_uart<=1;
					RAMaddress<=RAMaddress+1'b1; 
					end
				else begin write_to_uart<=1'b0;  RAMaddress<=RAMaddress;  end
		endcase
	
endmodule
