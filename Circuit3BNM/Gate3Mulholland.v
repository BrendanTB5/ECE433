`timescale 1ns / 1ps
//Author: Brendan Mulholland
//CM 1832
//Date: Sept. 5 2019
//Purpose: ECE433-01 Lab #1 Pre-lab
module Gate3Mulholland(All, Blink, Right,Left);
input All, Blink;
output Right, Left;

wire w1;
	not U1(w1, All);
	nand U2(Right, w1,Blink);
	or U3(Left,All,Blink);


endmodule
