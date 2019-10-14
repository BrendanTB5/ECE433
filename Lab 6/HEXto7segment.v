`timescale 1ns / 100ps
//Jianjian Song
//Date: Oct. 13 2019
//ECE433 Fall 2019
//Hex to 7 Segment Decoding
//Common-Cathode decoding for all hex values
module HEXto7Segment (HEXnumber,SEGMENTS);
//SevenSegments are ordered from G,F,E,D,C,B,A
//Segment A = SevenSegments[0].
//Active lower Enable
input	[3:0] HEXnumber; 
output reg[7:0] SEGMENTS;

	always @ (HEXnumber)
			case (HEXnumber)
				0:	SEGMENTS <= 8'B11000000;
				1:	SEGMENTS <= 8'B11111001;
				2:	SEGMENTS <= 8'B10100100;
				3:	SEGMENTS <= 8'B10110000;
				4:	SEGMENTS <= 8'B10011001;
				5:	SEGMENTS <= 8'B10010010;
				6:	SEGMENTS <= 8'B10000010;
				7:	SEGMENTS <= 8'B11111000;
				8:	SEGMENTS <= 8'B10000000;
				9:	SEGMENTS <= 8'B10010000;
				10: SEGMENTS <= 8'B10001000;
				11: SEGMENTS <= 8'B10000011;
				12: SEGMENTS <= 8'B11000110;
				13: SEGMENTS <= 8'B11000001;
				14: SEGMENTS <= 8'B10000110;
				15: SEGMENTS <= 8'B10001110;
			default:	SEGMENTS <= 8'B00000000;
			endcase
			
endmodule

