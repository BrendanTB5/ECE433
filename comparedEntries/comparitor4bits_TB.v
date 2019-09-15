`timescale 1ns / 1ps
//Problem 4 HW1 Fall 2019
//implement a 4-bit comparator
module comparitor4bits_TB;
reg [3:0] A,B;
wire AeqBbehavior;
wire AgeqBbehavior;
wire AltBbehavior;
 comparator4bit UnitBehavior (A,B,AeqBbehavior,AgeqBbehavior,AltBbehavior);
 initial begin
 A=10; B=12; #5;
 A=5; B=12; #5;
 A=8; B=8; #5;
 A=12; B=10; #5;
 A=10; B=5; #5;
 A=0; B=0; #5;
 A=3; B=3; #5;
 A=20; B=12; #5;
 $stop;
 end
endmodule 