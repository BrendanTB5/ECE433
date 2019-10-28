`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Brendan Mulholland Isaac Lau
// Module Name:    I2C_SDAmodule 
// Description: The SDA Control Module
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

