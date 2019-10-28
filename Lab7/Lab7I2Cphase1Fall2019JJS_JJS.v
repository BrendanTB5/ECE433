//File Name: Lab7I2Cphase1ECE433fall2019JJS_JJS.v
//Author: Brendan Mulholland Isaac Lau
//Date: October 15, 2019
//ECE433 Fall 2019
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
//send first byte to I2C bus with slave address
//Output: 
//Go is "1" to start communication

module Lab7I2Cphase1Fall2019BNM_IML(Go, SCL, SDA, Reset, clock, ClockLocked);

input Go, Reset, clock;
output SCL, ClockLocked;
inout SDA;
//send this byte as address
parameter FirstByte=8'b10010101;
//I2C speed frequency and system clock frequency
//parameter BaudRate=20'd20000, ClockFrequency=30'd75000000;
wire clk75MHz;
//These are simulation parameters. 
//Comment the following two lines before making bit stream file
parameter BaudRate=2, ClockFrequency=20;
assign clk75MHz=clock;
//disable SystemClock75MHz to simulate this circuit
//SystemClock75MHz SystemClock(clock,clk75MHz,ClockLocked);

wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
//module SquareWaveGenerator (WaveFrequency, ClockFrequency, StartStop, SignalOut, Reset, clock);
I2C_BaudRateGenerator  BaudUnit(.WaveFrequency(BaudRate), .ClockFrequency(ClockFrequency), .StartStop(BaudEnable), .SignalOut(SCL), .Reset(Reset), .clock(clk75MHz));

I2C_Controller  ControlUnit(.Go(Go), .WriteLoad(WriteLoad), .ReadorWrite(ReadorWrite), .ShiftorHold(ShiftorHold), .Select(Select), 
	.BaudEnable(BaudEnable), .StartStopAck(StartStopAck), .Reset(Reset), .ClockI2C(SCL), .clock(clk75MHz));

//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
//ReceivedData, SDA, StartStopAck, Reset, clock);
wire [7:0] ReceivedData;
I2C_DataUnit DataUnit(.WriteLoad(WriteLoad), .ReadorWrite(ReadorWrite), .ShiftorHold(ShiftorHold), .Select(Select), .SentData(FirstByte), 
.ReceivedData(ReceivedData), .SDA(SDA), .StartStopAck(StartStopAck), .Reset(Reset), .clock(clk75MHz));

endmodule
