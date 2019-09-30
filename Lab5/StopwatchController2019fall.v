`timescale 1ns / 1ps
//Brendan Mulholand CM 1832
//ECE 433 Lab 5
//9/30/19
//Added my combbined debouncer and one shot to the control block
module StopwatchController2019fall(ControlButton, Run, Clear, Reset, Clock);
input ControlButton, Reset, Clock;
output Run, Clear;
reg [1:0] State;
parameter ClearState=0, RunState=1, StopState=2, UnusedState=3;
wire ButtonOneShot, ButtonOutput;

//module DebouncedOneShot(input Clock, input Button, input Reset, output OneShot);

	DebouncedOneShot ControlDevice(Clock, ControlButton, Reset, ButtonOneShot);

	//Debouncer2019fall ControlInput(ControlButton, ButtonOutput, Reset, Clock);
	//PositiveClockedOneShot ButtonDevice(ButtonOutput, ButtonOneShot, Reset, Clock);

always@(posedge Clock or posedge Reset)
	if(Reset==1) State<=ClearState; else
	case (State)
	ClearState: if (ButtonOneShot==0) State<=ClearState; else State<=RunState;	//Clear counter
	RunState: if (ButtonOneShot==0) State<=RunState; else State<=StopState;	//count up
	StopState: if (ButtonOneShot==0) State<=StopState; else State<=ClearState;	//hold counter
	UnusedState: if (ButtonOneShot==0) State<=ClearState;
	endcase
assign Run = (State==RunState);
assign Clear = (State==ClearState);

endmodule
