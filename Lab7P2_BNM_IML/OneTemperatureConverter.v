`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Brendan Mulholland Isaac Lau
// 
// Create Date:    13:06:09 10/25/2019 
// Design Name: 
// Module Name:    OneTemperatureConverter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: Translates the temperatures into types that can be displayed by the 7-Seg.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module OneTemperatureConverter(Temp, First1, First0, Second1, Second0);
input [7:0] Temp;
output [3:0] First1, First0, Second1, Second0;
assign First1 = (Temp*18/10+32)/10;
assign First0 = (Temp*18/10+32)%10;
assign Second1 = Temp/10;
assign Second0 = Temp%10;
endmodule 