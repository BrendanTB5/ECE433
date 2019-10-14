`timescale 1ns / 1ps
//Author: Jianjian Song
//Date:	Oct 2019
//ECE433 Fall 2019
//A complete UART module based on files from Xilinx
module UARTmodule433template(tx, tx_full, write_to_uart, tx_data, en_16_x_baud, clock, reset);
output	tx;
output  	tx_full,en_16_x_baud;
input write_to_uart;
input  clock, reset;
input [7:0] tx_data;

parameter TRANSMITTED_BITS=8, BAUDRATE=20'd19200, FREQUENCY=30'd75000000;
wire  en_16_x_baud;

	BaudRateGenerator BaudRateUnit(en_16_x_baud, reset, clock, BAUDRATE, FREQUENCY);

wire write_one_shot;

ClockedOneShot WriteOneShotUnit(write_to_uart, write_one_shot, reset, clock) ;

// Signals for UART connections
//reg read_from_uart, write_to_uart;

wire  	tx_half_full;

uart_tx TransmitUnit(	.data_in(tx_data), .write_buffer(write_one_shot),
    	.reset_buffer(1'b0), .en_16_x_baud(en_16_x_baud),
    	.serial_out(tx),.buffer_full(tx_full),
    	.buffer_half_full(),.clk(clock));		
endmodule
