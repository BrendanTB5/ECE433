`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:42:43 09/30/2019 
// Design Name: 
// Module Name:    DisplayMux 
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
module DisplayMux(
    input [3:0] A0,
    input [3:0] A1,
    input [3:0] A2,
    input [3:0] A3,
    input [3:0] B0,
    input [3:0] B1,
    input [3:0] B2,
    input [3:0] B3,
	 input Select,
    output reg [3:0] Y0,
    output reg [3:0] Y1,
    output reg [3:0] Y2,
    output reg [3:0] Y3
    );
	 
	
always @(Select) begin
		if(Select == 0) begin
			Y0 <= A0;
			Y1 <= A1;
			Y2 <= A2;
			Y3 <= A3;
		end else begin
			Y0 <= B0;
			Y1 <= B1;
			Y2 <= B2;
			Y3 <= B3;
		end
end


endmodule
