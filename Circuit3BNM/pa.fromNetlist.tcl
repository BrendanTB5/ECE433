
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Circuit3BNM -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/Circuit3BNM/planAhead_run_1" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/mulholbn/Downloads/ECE433/ECE433/Circuit3BNM/Gate3Mulholland.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/mulholbn/Downloads/ECE433/ECE433/Circuit3BNM} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Gate3Mulholland.ucf" [current_fileset -constrset]
add_files [list {Gate3Mulholland.ucf}] -fileset [get_property constrset [current_run]]
link_design
