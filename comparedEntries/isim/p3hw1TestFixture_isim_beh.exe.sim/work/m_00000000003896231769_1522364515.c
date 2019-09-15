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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/mulholbn/Downloads/ECE433/ECE433/comparedEntries/p3hw1TestFixture.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};



static void Initial_61_0(char *t0)
{
    char t6[8];
    char t20[8];
    char t29[8];
    char t38[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    int t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    int t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    int t54;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);

LAB4:    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB5:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(70, ng0);
    xsi_vlog_stop(1);

LAB1:    return;
LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(65, ng0);

LAB13:    xsi_set_current_line(66, ng0);
    t16 = (t0 + 3048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t21 = (t0 + 2888);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t20, t23, 2, t24, 32, 1);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB14;

LAB15:    t28 = (t0 + 2888);
    t30 = (t0 + 2888);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t29, t32, 2, t33, 32, 1);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    if (t36 == 1)
        goto LAB16;

LAB17:    t37 = (t0 + 2728);
    t39 = (t0 + 2728);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t38, t41, 2, t42, 32, 1);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    if (t45 == 1)
        goto LAB18;

LAB19:    t46 = (t0 + 2728);
    t48 = (t0 + 2728);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t47, t50, 2, t51, 32, 1);
    t52 = (t47 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    if (t54 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB14:    xsi_vlogvar_wait_assign_value(t19, t18, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t28, t18, 1, *((unsigned int *)t29), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t37, t18, 2, *((unsigned int *)t38), 1, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t46, t18, 3, *((unsigned int *)t47), 1, 0LL);
    goto LAB21;

LAB22:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB5;

}


extern void work_m_00000000003896231769_1522364515_init()
{
	static char *pe[] = {(void *)Initial_61_0};
	xsi_register_didat("work_m_00000000003896231769_1522364515", "isim/p3hw1TestFixture_isim_beh.exe.sim/work/m_00000000003896231769_1522364515.didat");
	xsi_register_executes(pe);
}
