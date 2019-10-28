`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
// Engineer: Brendan Mulholland Issac Lau
// 
// Create Date:    18:07:34 10/20/2019 
// Design Name: 
// Module Name:    I2C_DataUnit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: The module that contains the SDAUnit and the ShiftUnit
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
 module I2C_DataUnit(
    input WriteLoad,
    input ReadorWrite,
    input ShiftorHold,
    input Select,
    input [7:0] SentData,
    output [7:0] ReceivedData,
    inout SDA,
    input StartStopAck,
    input Reset,
    input clock
    );
	 
	 
	 parameter LENGTH = 8;
	 
	//module I2C_ShiftRegister(WriteLoad, SentData, ReceivedData,ShiftIn,ShiftOut,ShiftorHold,Reset,CLOCK) ;
	wire ShiftDataIn, ShiftDataOut;
	I2C_ShiftRegister ShiftUnit(.Load(WriteLoad), .ParallelIn(SentData), .ParallelOut(ReceivedData),.ShiftIn(ShiftDataIn),.ShiftOut(ShiftDataOut),.ShiftorHold(ShiftorHold),.Reset(Reset),.CLOCK(clock));

	//module I2C_SDAmodule(SDA, ReadorWrite, Select, StartStopAck, ShiftIn, ShiftOut) ;

	I2C_SDAmodule SDAUnit(SDA, ReadorWrite, Select, StartStopAck, ShiftDataIn, ShiftDataOut) ;




endmodule
