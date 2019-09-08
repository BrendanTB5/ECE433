
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name lab1Part2 -dir "E:/ECE433/ECE433/lab1Part2/planAhead_run_3" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/ECE433/ECE433/lab1Part2/lab1part2ece433BNM.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/ECE433/ECE433/lab1Part2} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "lab1part2ece433BNM.ucf" [current_fileset -constrset]
add_files [list {lab1part2ece433BNM.ucf}] -fileset [get_property constrset [current_run]]
link_design
