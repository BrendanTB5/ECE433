`timescale 1ns / 1ps
//Brendan Mulholand CM 1832
//ECE 433 Lab 5
//9/30/19
//Combined Debounce And One Shot into one module for ease of use later.
module DebouncedOneShot(input Clock, input Button, input Reset, output OneShot);

wire DebounceOut;

//module Debouncer2019fall(InputPulse, DebouncedOuput, Reset, CLOCK) ;

	Debouncer2019fall Debouncer(Button,DebounceOut,Reset,Clock);
	
//module PositiveClockedOneShot(InputPulse, OneShot, Reset, CLOCK) ;
	PositiveClockedOneShot Shot(DebounceOut, OneShot, Reset, Clock);

endmodule
