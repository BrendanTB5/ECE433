`timescale 1ns / 1ps
// TxModule_Toplevel__2019Fall.v
//uart transmission unit with data unit and controller
module TxModule_Toplevel__2019Fall(Start, Data, Speed, Parity, Tx, Reset, Clock);
input Start, Parity, Reset, Clock;
input [8:0] Data;
input [3:0] Speed;	//baud in the number of clock cycles
output Tx;

wire Load, ShiftOut;

//ControlUnit(input Clock, input Reset, input [3:0] Speed, input Start, output reg Load, output reg ShiftOut)

ControlUnit ControlUnit(Clock,Reset,Speed,Start,Load,ShiftOut);

//module TxDataUnit2019Fall(Load, Data, Parity, Tx, ShiftOut, Reset, Clock);

TxDataUnit2019Fall DataUnit(Load, Data, Parity, Tx, ShiftOut, Reset, Clock);

endmodule
