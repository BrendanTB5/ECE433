`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:28:19 10/20/2019 
// Design Name: 
// Module Name:    I2C_SDAmodule 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module I2C_SDAmodule(
    inout SDA,
    input ReadorWrite,
    input Select,
    input StartStopAck,
    output ShiftIn,
    input ShiftOut
    );
	 
	 reg DataOut;
	 
	
	always @(*)
		if(Select == 1)
			DataOut <= ShiftOut;
		else
			DataOut <= StartStopAck;

	assign SDA = (ReadorWrite) ? 1'bZ: DataOut;
	assign ShiftIn = SDA;


endmodule
