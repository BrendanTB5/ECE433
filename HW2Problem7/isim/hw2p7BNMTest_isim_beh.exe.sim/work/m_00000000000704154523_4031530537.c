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
static const char *ng0 = "C:/Users/mulholbn/Downloads/ECE433/ECE433/HW2Problem7/hw2p7BNMTest.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_22_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);

LAB4:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 6000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_23_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_25_2(char *t0)
{
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3720);
    t3 = (t0 + 3472);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 3968);
    t5 = (t0 + 3472);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 4216);
    t7 = (t0 + 3472);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 4464);
    t9 = (t0 + 3472);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 4712);
    t11 = (t0 + 3472);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 4960);
    t13 = (t0 + 3472);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 5208);
    t15 = (t0 + 3472);
    xsi_add_process_toexecute(0, t14, t15);
    t16 = (t0 + 5456);
    t17 = (t0 + 3472);
    xsi_add_process_toexecute(0, t16, t17);
    t18 = (t0 + 5704);
    t19 = (t0 + 3472);
    xsi_add_process_toexecute(0, t18, t19);
    t20 = (t0 + 5952);
    t21 = (t0 + 3472);
    xsi_add_process_toexecute(0, t20, t21);
    t22 = (t0 + 6200);
    t23 = (t0 + 3472);
    xsi_add_process_toexecute(0, t22, t23);
    t24 = (t0 + 6448);
    t25 = (t0 + 3472);
    xsi_add_process_toexecute(0, t24, t25);
    t26 = (t0 + 6696);
    t27 = (t0 + 3472);
    xsi_add_process_toexecute(0, t26, t27);
    t28 = (t0 + 6944);
    t29 = (t0 + 3472);
    xsi_add_process_toexecute(0, t28, t29);
    t30 = (t0 + 2248);
    memset(t31, 0, 8);
    *((unsigned int *)t31) = 14;
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 32);
    t32 = (t0 + 7456);
    *((int *)t32) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t33 = (t0 + 2248);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    if (*((int *)t35) > 0)
        goto LAB5;

LAB6:    t37 = (t0 + 3472);
    xsi_clean_active_fork_process_list(t37);
    goto LAB1;

LAB5:    t36 = (t0 + 7456);
    *((int *)t36) = 1;
    goto LAB1;

}

static void Forked_26_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3720);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(26, ng0);
    t3 = (t0 + 3720);
    xsi_process_wait(t3, 0LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_26_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3968);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(26, ng0);
    t3 = (t0 + 3968);
    xsi_process_wait(t3, 6000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_26_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4216);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(26, ng0);
    t3 = (t0 + 4216);
    xsi_process_wait(t3, 16000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4464);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 4464);
    xsi_process_wait(t3, 0LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4712);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 4712);
    xsi_process_wait(t3, 26000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4960);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 4960);
    xsi_process_wait(t3, 46000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_9(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5208);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 5208);
    xsi_process_wait(t3, 66000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_10(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5456);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 5456);
    xsi_process_wait(t3, 86000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_11(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5704);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 5704);
    xsi_process_wait(t3, 106000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_12(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5952);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 5952);
    xsi_process_wait(t3, 116000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_13(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6200);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 6200);
    xsi_process_wait(t3, 146000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_14(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6448);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 6448);
    xsi_process_wait(t3, 156000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_15(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6696);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 6696);
    xsi_process_wait(t3, 166000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_28_16(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 7136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6944);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(28, ng0);
    t3 = (t0 + 6944);
    xsi_process_wait(t3, 180000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);
    xsi_vlog_stop(1);
    goto LAB5;

}


extern void work_m_00000000000704154523_4031530537_init()
{
	static char *pe[] = {(void *)Initial_22_0,(void *)Always_23_1,(void *)Initial_25_2,(void *)Forked_26_3,(void *)Forked_26_4,(void *)Forked_26_5,(void *)Forked_27_6,(void *)Forked_27_7,(void *)Forked_27_8,(void *)Forked_27_9,(void *)Forked_27_10,(void *)Forked_27_11,(void *)Forked_27_12,(void *)Forked_27_13,(void *)Forked_27_14,(void *)Forked_27_15,(void *)Forked_28_16};
	xsi_register_didat("work_m_00000000000704154523_4031530537", "isim/hw2p7BNMTest_isim_beh.exe.sim/work/m_00000000000704154523_4031530537.didat");
	xsi_register_executes(pe);
}
