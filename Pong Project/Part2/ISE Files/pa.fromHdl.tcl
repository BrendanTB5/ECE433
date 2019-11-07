
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name PongProjectPhase2_BNM_IML -dir "E:/ECE433/ECE433/Pong Project/Part2/ISE Files/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "E:/ECE433/ECE433/Pong Project/Part2/Source Files/PongGame2019fall_JJS_JJS.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {../Source Files/UniversalCounter2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/ClockedNegativeOneShot.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/vsyncModule2019fallTemplate.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/hsyncModule2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/CRTClock2019Template.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/Game2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/CRTcontroller2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Source Files/PongGame2019fall_JJS_JJS.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top PongNexys3 $srcset
add_files [list {E:/ECE433/ECE433/Pong Project/Part2/Source Files/PongGame2019fall_JJS_JJS.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
