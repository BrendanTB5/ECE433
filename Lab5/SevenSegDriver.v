//Brendan Mulholand CM 1832
//ECE 433 Lab 5
//9/30/19
//The Display Driver with BCD built in
`timescale 1ns / 1ps

module SevenSegDriver(D3, D2, D1, D0, Display, Reset, Clock, Select) ;
input [3:0] D3, D2, D1, D0;
input Reset, Clock;
output [7:0]	Display;
output [3:0] Select;

wire [7:0] SEG0,SEG1,SEG2,SEG3;

//module BCDto7Segment (BCDnumber,SEGMENTS);
BCDto7Segment Dig0(D0,SEG0);
BCDto7Segment Dig1(D1,SEG1);
BCDto7Segment Dig2(D2,SEG2);
BCDto7Segment Dig3(D3,SEG3);

//module DisplayMux(D3, D2, D1, D0, Select, Display, Reset, Clock) ;
	DriverMux DisplayInput(SEG3, SEG2, SEG1, SEG0, Select, Display, Reset, Clock);

//module Refreshing7Seg(Transistors,Reset, CLOCK) ;
  Refreshing7Seg Update(Select,Reset, Clock);
 
endmodule
