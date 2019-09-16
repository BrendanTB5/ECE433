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
static const char *ng0 = "E:/ECE433/ECE433/addsub/adderBNMversion2.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_18_0(char *t0)
{
    char t10[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t22;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3304);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:
LAB10:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);
    t7 = (t0 + 1184U);
    t8 = *((char **)t7);
    t7 = (t0 + 1344U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 5, t8, 4, t9, 4);
    t7 = (t0 + 1904);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 4);
    t11 = (t0 + 2064);
    xsi_vlogvar_assign_value(t11, t10, 4, 0, 1);
    goto LAB10;

LAB8:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    *((unsigned int *)t10) = t13;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB12;

LAB11:    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 4294967295U);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t4, 4, t10, 32);
    t9 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t20, 32, t9, 32);
    t11 = (t0 + 1904);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 4);
    t22 = (t0 + 2064);
    xsi_vlogvar_assign_value(t22, t21, 4, 0, 1);
    goto LAB10;

LAB12:    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t14 | t15);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t16 | t17);
    goto LAB11;

}


extern void work_m_00000000000760309807_2873092556_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_00000000000760309807_2873092556", "isim/adderSubtractorTB_isim_beh.exe.sim/work/m_00000000000760309807_2873092556.didat");
	xsi_register_executes(pe);
}
