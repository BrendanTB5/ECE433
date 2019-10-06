
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Lab5 -dir "E:/ECE433/ECE433/Lab5/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/ECE433/ECE433/Lab5/StopwatchForLab5.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/ECE433/ECE433/Lab5} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "ClockModule2019.ucf" [current_fileset -constrset]
add_files [list {ClockModule2019.ucf}] -fileset [get_property constrset [current_run]]
link_design
