
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name addsub -dir "E:/ECE433/ECE433/addsub/planAhead_run_5" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "adderBNMversion1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {adderBNMversion2.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top adderBNMversion2 $srcset
add_files [list {adderBNMversion1.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
