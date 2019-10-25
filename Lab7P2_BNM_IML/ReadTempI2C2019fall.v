`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Brendan Mulholland Isaac Lau
// 
// Create Date:    12:59:45 10/25/2019 
// Design Name: 
// Module Name:    ReadTempI2C2019fall 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: The top level for the Read Temp Module
//
// Dependencies: Alcohol
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ReadTempI2C2019fall(
    input Start,
    input [7:0] FirstByte,
    input [29:0] ClockFrequency,
    input [19:0] BaudRate,
    input clock,
    input Reset,
    inout SDA,
    output SCL,
    output DONE,
    output [7:0] ReceivedData
    );
	 
	wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
	 
	 
	I2C_BaudRateGenerator  BaudUnit(.WaveFrequency(BaudRate), .ClockFrequency(ClockFrequency), .StartStop(BaudEnable), .SignalOut(SCL), .Reset(Reset), .clock(clock));

	I2C_Controller  ControlUnit(.Go(Start), .WriteLoad(WriteLoad), .ReadorWrite(ReadorWrite), .ShiftorHold(ShiftorHold), .Select(Select), 
	.BaudEnable(BaudEnable), .StartStopAck(StartStopAck), .Reset(Reset), .ClockI2C(SCL), .clock(clock), .DONE(DONE), .SDA(SDA));

	//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
	//ReceivedData, SDA, StartStopAck, Reset, clock);
	
	I2C_DataUnit DataUnit(.WriteLoad(WriteLoad), .ReadorWrite(ReadorWrite), .ShiftorHold(ShiftorHold), .Select(Select), .SentData(FirstByte), 
	.ReceivedData(ReceivedData), .SDA(SDA), .StartStopAck(StartStopAck), .Reset(Reset), .clock(clock));


endmodule
