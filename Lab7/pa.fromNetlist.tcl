
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Lab7 -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab7/planAhead_run_1" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab7/Lab7I2Cphase1Fall2019BNM_IML.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab7} {ipcore_dir} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Lab7I2Cphase1Fall2019BNM_IML.ucf" [current_fileset -constrset]
add_files [list {Lab7I2Cphase1Fall2019BNM_IML.ucf}] -fileset [get_property constrset [current_run]]
link_design
