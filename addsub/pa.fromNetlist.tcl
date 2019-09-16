
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name addsub -dir "E:/ECE433/ECE433/addsub/planAhead_run_3" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/ECE433/ECE433/addsub/adderBNMversion1.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/ECE433/ECE433/addsub} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "adderBNMversion1.ucf" [current_fileset -constrset]
add_files [list {adderBNMversion1.ucf}] -fileset [get_property constrset [current_run]]
link_design
