/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001443604142_4216367567_init();
    work_m_00000000001228884525_2470525276_init();
    work_m_00000000001763511317_3457389447_init();
    work_m_00000000000598810375_3181417155_init();
    work_m_00000000002952999317_3227676919_init();
    work_m_00000000000098181465_2787430017_init();
    work_m_00000000002115475261_1017937357_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002115475261_1017937357");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
