
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name HW2Problem7 -dir "C:/Users/mulholbn/Downloads/ECE433/ECE433/HW2Problem7/planAhead_run_2" -part xc3s500efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/mulholbn/Downloads/ECE433/ECE433/HW2Problem7/hw2p7BNMdetect1001.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/mulholbn/Downloads/ECE433/ECE433/HW2Problem7} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "hw2p7BNMdetect1001.ucf" [current_fileset -constrset]
add_files [list {hw2p7BNMdetect1001.ucf}] -fileset [get_property constrset [current_run]]
link_design
