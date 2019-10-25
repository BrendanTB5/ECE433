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
    output reg ShiftIn,
    input ShiftOut
    );
	 
	
	always @(*)
		if(Select == 1)
			ShiftIn <= ShiftOut;
		else
			ShiftIn <= StartStopAck;

	assign SDA = (ReadorWrite) ? 1'bZ: ShiftIn;
	


endmodule
