
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name PongGameTemplate2019fall -dir "C:/Users/isaac/OneDrive - Rose-Hulman Institute of Technology/ECE433/PongProjectPhase1_BM_IL/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "PongNexys3.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {UniversalCounter2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ClockedNegativeOneShot.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {vsyncModule2019fallTemplate.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {hsyncModule2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CRTClock2019Template.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Game2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CRTcontroller2019fall.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {PongGame2019fall_JJS_JJS.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top PongNexys3 $srcset
add_files [list {PongNexys3.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
