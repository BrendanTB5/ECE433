
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name HW2Problem7 -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/HW2Problem7/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "hw2p7BNMdetect1001.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {hw2p7BNMdetect1001.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top hw2p7BNMdetect1001 $srcset
add_files [list {hw2p7BNMdetect1001.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
