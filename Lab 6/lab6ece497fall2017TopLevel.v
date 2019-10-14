`timescale 1ns / 1ps
//File Name:  Lab6ece433fall2019template.v
//Display RAM or ROM content to serial port
//ROMorRAM on SW0: SW0=0 to send ROM data
//ROMorRAM on SW0: SW0=1 to send RAM data

// change memory content of a 50x8bits RAM
// send RAM content to a serial port
// Jianjian Song
// Lab #6, ECE433 Fall 2019 Template
//Baud = 19200, Clock = 75MHz
//Press Send on BTNR to send charaters to uart
//Press Mode to change mode from 
//Mode=0 SW7: update memory content
//Mode=1 SW7: send memory content to serial port

module Lab6ece433fall2019template(Mode, WriteOrRead, Send, NextAddress, DataIn, Locked, Transmitting, RAMaddress, 
tx, Display, Transistors, reset, clock);
parameter RAMAddressSize=6;

input Mode, WriteOrRead, Send, NextAddress, reset, clock;
input [6:0] DataIn;
output [7:0] Display;
output [3:0] Transistors;
output Locked, Transmitting, tx;
output reg [RAMAddressSize-1:0] RAMaddress;
wire [RAMAddressSize-1:0] RAMaddressUpdate, SendAddress;
//Mode==0 to update memory content
//Mode==1 to send to uart

wire ROMorRAM=DataIn[0];
/*
 Clock75MHz instance_name
   (// Clock in ports
    .CLK_IN1(CLK_IN1),      // IN
    // Clock out ports
    .CLK_OUT1(CLK_OUT1),     // OUT
    // Status and control signals
    .LOCKED(LOCKED));      // OUT
*/
wire clk75MHz;
//assign clk75MHz=clock;

Clock75MHz SystemClock(clock,clk75MHz,Locked);

always@(Mode,RAMaddressUpdate,WriteOrRead,SendAddress)
	case(Mode)
	1'b1: begin RAMaddress<=RAMaddressUpdate; //write to RAM
			end
	1'b0: begin RAMaddress<=SendAddress; //read RAM
			end
	endcase
// Signals for UART connections
wire  	write_to_uart;
wire  	tx_full;

wire DebouncedNext, OneShotNext;
wire [7:0] tx_data;
wire [6:0] ROM_data;
wire [6:0] RAMDataout;
//module DebouncerWithoutLatch(InputPulse, DebouncedOuput, Reset, CLOCK);
DebouncerWithoutLatch NextDebounceUnit(NextAddress, DebouncedNext, reset, clk75MHz) ;
//module ClockedOneShot(InputPulse, OneShot, Reset, CLOCK);
ClockedOneShot NextOneShot(DebouncedNext, OneShotNext, reset, clk75MHz);

//module RAMAddressUpdate(NextAddress, RAMaddress, reset, clock);
RAMAddressUpdate UpdateAddress(OneShotNext, RAMaddressUpdate, reset, clk75MHz);

//module RAM40x7bits(address, din, dout, writeOrread, reset, clock);

RAM50x7bits RAMUnit(RAMaddress, DataIn, RAMDataout, WriteOrRead, reset, clk75MHz);

//ROM
/*
ROM50x7bits your_instance_name (
  .clka(clka), // input clka
  .addra(addra), // input [5 : 0] addra
  .douta(douta) // output [6 : 0] douta
);
*/

	assign tx_data = (ROMorRAM==0)?{1'b0,ROM_data}:{1'b0,RAMDataout};

ROM50x7bits ROMunit (.clka(clk75MHz),
  .addra(SendAddress), // input [5 : 0] addra
  .douta(ROM_data) // output [6 : 0] douta
);
wire en_16_x_baud;
//module SendChars(Start, tx_full, write_to_uart, RAMaddress, 
//data, Transmitting,  reset, clock);
SendChars SendCharsUnit(Send, tx_full, write_to_uart, 
     SendAddress, tx_data, Transmitting, en_16_x_baud, reset, clk75MHz);

//module UARTmodule497(tx, tx_full, write_to_uart, tx_data, transmitted_bits, clock, reset);
wire [7:0] transmitted_bits;

UARTmodule433tempate UART(tx, tx_full, write_to_uart, tx_data, en_16_x_baud, clk75MHz, reset);

//module DisplayUnit(D0,D1,D2,D3, Reset, Clock, Display, Transistors);	 
DisplayUnit SevenSegUnit({1'b0,RAMDataout[6:4]},RAMDataout[3:0],{2'd0,RAMaddressUpdate[5:4]},RAMaddressUpdate[3:0], reset, clk75MHz, Display, Transistors);	 

endmodule
