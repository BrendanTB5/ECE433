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
static const char *ng0 = "C:/Users/mulholbn/Downloads/ECE433/ECE433/Lab7/I2C_BaudRateGenerator.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {2, 0};



static void Always_29_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB13:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t30 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(30, ng0);

LAB12:    xsi_set_current_line(31, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 16, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB14:    xsi_set_current_line(36, ng0);

LAB19:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 16, 0LL);
    goto LAB18;

LAB16:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1688U);
    t21 = *((char **)t8);
    t8 = (t0 + 1528U);
    t22 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t22, 20, t8, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_divide(t31, 32, t21, 30, t6, 32);
    t28 = ((char*)((ng1)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t31, 32, t28, 32);
    memset(t33, 0, 8);
    t29 = (t7 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB21;

LAB20:    t34 = (t32 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t7) < *((unsigned int *)t32))
        goto LAB22;

LAB23:    t36 = (t33 + 4);
    t9 = *((unsigned int *)t36);
    t10 = (~(t9));
    t11 = *((unsigned int *)t33);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(43, ng0);

LAB29:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t7) == 0)
        goto LAB30;

LAB32:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;

LAB33:    t21 = (t6 + 4);
    t22 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB35;

LAB34:    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 & 1U);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 & 1U);
    t28 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 1, 0LL);

LAB27:    goto LAB18;

LAB21:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t33) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(38, ng0);

LAB28:    xsi_set_current_line(39, ng0);
    t37 = (t0 + 2248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 16, t39, 16, t40, 16);
    t42 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t42, t41, 0, 0, 16, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    goto LAB27;

LAB30:    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB35:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t22);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t18 | t19);
    goto LAB34;

}


extern void work_m_00000000002049366275_2270040502_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000002049366275_2270040502", "isim/Lab7I2Cphase1Fall2019JJS_JJS_tb_isim_beh.exe.sim/work/m_00000000002049366275_2270040502.didat");
	xsi_register_executes(pe);
}
