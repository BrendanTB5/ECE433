
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Lab4 -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab4/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Constraints.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {lab4BNMDetect.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {BCDto7Segment.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {labece433detect01101withSegDisplay.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top lab4ece433detect01101withSegDisplay $srcset
add_files [list {Constraints.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
