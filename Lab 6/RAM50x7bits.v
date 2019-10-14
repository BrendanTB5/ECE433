`timescale 1ns / 1ps
//one read port and one write port
//both read and write are synchronized by clock
//WriteOrRead=1 to write and 0 to read

module RAM50x7bits(address, din, dout, writeOrread, reset, clock);
parameter DataWidth=7;
parameter MemorySize=43;
input [5:0] address;
input [DataWidth-1:0] din;
input reset, clock, writeOrread;
output [DataWidth-1:0] dout;

reg[DataWidth-1:0] memory [MemorySize-1:0]; 
parameter LineFeed=8'h0A, CarriageReturn=8'h0D, NUL=8'h00;
always@(posedge clock)
	if(reset==1) begin
	memory[0]<=LineFeed;	memory[1]<=CarriageReturn;	memory[2]<="E";	memory[3]<="C";
	memory[4]<="E";	memory[5]<="4";	memory[6]<="3";	memory[7]<="3";
	memory[8]<=" ";	memory[9]<="F";	memory[10]<="a";	memory[11]<="l";
	memory[12]<="l";	memory[13]<=" ";	memory[14]<="2";	memory[15]<="0";
	memory[16]<="1";	memory[17]<="8";	memory[18]<=" ";	memory[19]<=" ";
	memory[20]<=" ";	memory[21]<="D";	memory[22]<="i";	memory[23]<="g";

	memory[40]<=CarriageReturn;
	memory[41]<=LineFeed;	//line feed
	memory[42]<=NUL;
	end 
	else
		if (writeOrread==1) memory[address] <= din; 
		else  memory[address]<= memory[address];
assign dout = memory[address];
endmodule
