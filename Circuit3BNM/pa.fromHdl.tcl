
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Circuit3BNM -dir "E:/ECE433/Circuit3BNM/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Gate3Mulholland.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Gate3Mulholland.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Gate3Mulholland $srcset
add_files [list {Gate3Mulholland.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
