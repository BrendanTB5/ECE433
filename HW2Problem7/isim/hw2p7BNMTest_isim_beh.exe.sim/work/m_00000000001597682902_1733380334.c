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
static const char *ng0 = "C:/Users/mulholbn/Downloads/ECE433/ECE433/HW2Problem7/hw2p7BNMdetect1001.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Always_11_0(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 2048U);
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

LAB10:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(13, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    goto LAB11;

}

static void Always_17_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 4272);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 2768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t32 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(23, ng0);

LAB25:    xsi_set_current_line(24, ng0);
    t6 = (t0 + 1728U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t20 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t8) = 1;

LAB29:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB32:    goto LAB24;

LAB16:    xsi_set_current_line(29, ng0);

LAB33:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1728U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t8) = 1;

LAB37:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB40:    goto LAB24;

LAB18:    xsi_set_current_line(35, ng0);

LAB41:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1728U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB45;

LAB42:    if (t20 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t8) = 1;

LAB45:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB48:    goto LAB24;

LAB20:    xsi_set_current_line(41, ng0);

LAB49:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1728U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB53;

LAB50:    if (t20 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t8) = 1;

LAB53:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB56:    goto LAB24;

LAB22:    xsi_set_current_line(47, ng0);

LAB57:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1728U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB61;

LAB58:    if (t20 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t8) = 1;

LAB61:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB64:    goto LAB24;

LAB28:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(25, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB32;

LAB36:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(31, ng0);
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB40;

LAB44:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(37, ng0);
    t23 = ((char*)((ng7)));
    t24 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB48;

LAB52:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(43, ng0);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB56;

LAB60:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(49, ng0);
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 3, 0LL);
    goto LAB64;

}


extern void work_m_00000000001597682902_1733380334_init()
{
	static char *pe[] = {(void *)Always_11_0,(void *)Always_17_1};
	xsi_register_didat("work_m_00000000001597682902_1733380334", "isim/hw2p7BNMTest_isim_beh.exe.sim/work/m_00000000001597682902_1733380334.didat");
	xsi_register_executes(pe);
}
