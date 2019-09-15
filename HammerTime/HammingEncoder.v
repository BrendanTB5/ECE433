`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:36:43 09/15/2019 
// Design Name: 
// Module Name:    HammingEncoder 
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
module HammingEncoder(Din, CodeWord);

input [3:0] Din;
output reg [6:0] CodeWord;

reg P1,P2,P3;

always @(*) begin
	
	
	P3 <= Din[1] ^ Din[2] ^ Din[3];
	P2 <= Din[0] ^ Din[2] ^ Din[3];
	P1 <= Din[0] ^ Din[1] ^ Din[3];
	
	CodeWord <= {Din [3:0], P3, P2, P1};
	

end


endmodule
