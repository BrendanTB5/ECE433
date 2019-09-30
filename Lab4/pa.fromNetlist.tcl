
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Lab4 -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab4/planAhead_run_1" -part xc3s500efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab4/lab4ece433detect01101withSegDisplay.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab4} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Constraints.ucf" [current_fileset -constrset]
add_files [list {Constraints.ucf}] -fileset [get_property constrset [current_run]]
link_design
