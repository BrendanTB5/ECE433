
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name lab1Part2 -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/lab1Part2/planAhead_run_4" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "lab1part2ece433BNM.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {lab1part2ece433BNM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top lab1part2ece433BNM $srcset
add_files [list {lab1part2ece433BNM.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
