`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:25 09/15/2019 
// Design Name: 
// Module Name:    HammingDecoderBNM 
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
module HammingDecoderBNM(H_word,D_word,Error_Position);


input [6:0] H_word;
output reg [3:0] D_word;
output reg [2:0] Error_Position;

reg P1error;
reg P2error;
reg P3error;

always @(*) begin

	P3error <= H_word[2] ^ H_word[4] ^ H_word[5] ^ H_word[6];
	P2error <= H_word[1] ^ H_word[3] ^ H_word[5] ^ H_word[6];
	P1error <= H_word[0] ^ H_word[3] ^ H_word[4] ^ H_word[6];
	
	
	case({P1error,P2error,P3error})
	3'b000: begin
		D_word = H_word[6:3];
		Error_Position = 0;
	end
	3'b001: begin
		D_word = H_word[6:3];
		Error_Position = 4;
	end
	3'b010: begin
		D_word = H_word[6:3];
		Error_Position = 2;
	end
	3'b011: begin
		D_word = {H_word[6],~H_word[5],H_word[4:3]};
		Error_Position = 6;
	end
	3'b100: begin
		D_word = H_word[6:3];
		Error_Position = 1;
	end
	3'b101: begin
		D_word = {H_word[6:5],~H_word[4],H_word[3]};
		Error_Position = 5;
	end
	3'b110: begin
		D_word = {H_word[6:4],~H_word[3]};
		Error_Position = 3;
	end
	3'b111: begin
		D_word = {~H_word[6],H_word[5:3]};
		Error_Position = 7;
	end
	
	endcase
	




end


endmodule
