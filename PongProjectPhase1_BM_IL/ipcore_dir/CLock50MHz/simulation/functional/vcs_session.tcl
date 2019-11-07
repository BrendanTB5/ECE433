gui_open_window Wave
gui_sg_create CLock50MHz_group
gui_list_add_group -id Wave.1 {CLock50MHz_group}
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.test_phase}
gui_set_radix -radix {ascii} -signals {CLock50MHz_tb.test_phase}
gui_sg_addsignal -group CLock50MHz_group {{Input_clocks}} -divider
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.CLK_IN1}
gui_sg_addsignal -group CLock50MHz_group {{Output_clocks}} -divider
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.dut.clk}
gui_list_expand -id Wave.1 CLock50MHz_tb.dut.clk
gui_sg_addsignal -group CLock50MHz_group {{Status_control}} -divider
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.RESET}
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.LOCKED}
gui_sg_addsignal -group CLock50MHz_group {{Counters}} -divider
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.COUNT}
gui_sg_addsignal -group CLock50MHz_group {CLock50MHz_tb.dut.counter}
gui_list_expand -id Wave.1 CLock50MHz_tb.dut.counter
gui_zoom -window Wave.1 -full
