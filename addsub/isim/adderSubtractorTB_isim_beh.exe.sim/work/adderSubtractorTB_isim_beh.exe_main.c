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
    work_m_00000000002383877933_3254621162_init();
    work_m_00000000002970239660_1200402174_init();
    work_m_00000000003947787588_0205104907_init();
    work_m_00000000002218661814_1559508664_init();
    work_m_00000000003116829735_0842446966_init();
    work_m_00000000000760309807_2873092556_init();
    work_m_00000000003287741533_0472792673_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003287741533_0472792673");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
