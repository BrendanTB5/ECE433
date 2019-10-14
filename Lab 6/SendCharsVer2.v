`timescale 1ns / 1ps
//overall controller for Transmit Test
//ECE433 Fall 2019
//Jianjian Song
//September 30, 2019
//Send a number of characters through uart
//starting RAMaddress == RAMRAMaddress
//number of characters ==NumberOfChars
//Start is high to start until Done
//ReadRAM is active low

module SendCharsVer2(Start, tx_full, uartClock, WriteOrRead, write_to_uart, RAMaddress, 
NumberOfChars, Transmitting,  reset, clock);
parameter RAMaddressBits=6;
input Start, tx_full, uartClock, reset, clock;
input [RAMaddressBits-1:0] NumberOfChars;
output reg write_to_uart, Transmitting, WriteOrRead;
output [RAMaddressBits-1:0] RAMaddress; 

reg [RAMaddressBits-1:0] RAMaddress; 
parameter Startingaddress=6'd0;
always@(posedge clock)
	if(reset==1) Transmitting<=0;
	else if (Start==1) Transmitting<=1;
	else if((Transmitting==1) && (RAMaddress==Startingaddress+NumberOfChars))
		Transmitting<=0;
	else Transmitting<=Transmitting;

//Overall Controller
always@(posedge clock)
	if (reset==1) begin write_to_uart<=0; RAMaddress<=Startingaddress; WriteOrRead<=0; end
	else 
		case ({Start,Transmitting})
			2'b00: begin write_to_uart<=1'b0;  RAMaddress<=RAMaddress; WriteOrRead<=0; end
			2'b01:
				if (tx_full==0 && uartClock==1) begin
					write_to_uart<=1;
					RAMaddress<=RAMaddress+1'b1; WriteOrRead<=0; 
					end
				else begin write_to_uart<=1'b0;  RAMaddress<=RAMaddress;  WriteOrRead<=0; end
			2'b10: begin write_to_uart<=0; RAMaddress<=Startingaddress; WriteOrRead<=0; end
			default: begin write_to_uart<=1'b0;  RAMaddress<=RAMaddress; WriteOrRead<=0; end
		endcase
	
endmodule

//UCF file
//NET "tx" LOC = N18;
//NET "clock" LOC = V10;
//NET "lock" LOC = V16;
//NET "reset" LOC = C9;
//
//NET "clock" IOSTANDARD = LVCMOS33;
//NET "lock" IOSTANDARD = LVCMOS33;
//NET "reset" IOSTANDARD = LVCMOS33;
//NET "tx" IOSTANDARD = LVCMOS33;