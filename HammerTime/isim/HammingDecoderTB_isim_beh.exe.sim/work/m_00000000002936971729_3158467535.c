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
static const char *ng0 = "C:/Users/mulholbn/Downloads/ECE433/ECE433/HammerTime/HammingDecoderBNM.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {6, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {6U, 0U};
static int ng14[] = {3, 0};
static unsigned int ng15[] = {7U, 0U};
static int ng16[] = {7, 0};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t24[8];
    char t40[8];
    char t48[8];
    char t64[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    int t87;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 4);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 4);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t16);
    t27 = (t25 ^ t26);
    *((unsigned int *)t24) = t27;
    t28 = (t6 + 4);
    t29 = (t16 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t40 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 5);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 5);
    t47 = (t46 & 1);
    *((unsigned int *)t38) = t47;
    t49 = *((unsigned int *)t24);
    t50 = *((unsigned int *)t40);
    t51 = (t49 ^ t50);
    *((unsigned int *)t48) = t51;
    t52 = (t24 + 4);
    t53 = (t40 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB9;

LAB10:
LAB11:    t62 = (t0 + 1048U);
    t63 = *((char **)t62);
    memset(t64, 0, 8);
    t62 = (t64 + 4);
    t65 = (t63 + 4);
    t66 = *((unsigned int *)t63);
    t67 = (t66 >> 6);
    t68 = (t67 & 1);
    *((unsigned int *)t64) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 6);
    t71 = (t70 & 1);
    *((unsigned int *)t62) = t71;
    t73 = *((unsigned int *)t48);
    t74 = *((unsigned int *)t64);
    t75 = (t73 ^ t74);
    *((unsigned int *)t72) = t75;
    t76 = (t48 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB12;

LAB13:
LAB14:    t86 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t86, t72, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t16);
    t27 = (t25 ^ t26);
    *((unsigned int *)t24) = t27;
    t15 = (t6 + 4);
    t17 = (t16 + 4);
    t28 = (t24 + 4);
    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t17);
    t33 = (t31 | t32);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t40, 0, 8);
    t29 = (t40 + 4);
    t38 = (t30 + 4);
    t42 = *((unsigned int *)t30);
    t43 = (t42 >> 5);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t38);
    t46 = (t45 >> 5);
    t47 = (t46 & 1);
    *((unsigned int *)t29) = t47;
    t49 = *((unsigned int *)t24);
    t50 = *((unsigned int *)t40);
    t51 = (t49 ^ t50);
    *((unsigned int *)t48) = t51;
    t39 = (t24 + 4);
    t41 = (t40 + 4);
    t52 = (t48 + 4);
    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t41);
    t57 = (t55 | t56);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t52);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB18;

LAB19:
LAB20:    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    memset(t64, 0, 8);
    t53 = (t64 + 4);
    t62 = (t54 + 4);
    t66 = *((unsigned int *)t54);
    t67 = (t66 >> 6);
    t68 = (t67 & 1);
    *((unsigned int *)t64) = t68;
    t69 = *((unsigned int *)t62);
    t70 = (t69 >> 6);
    t71 = (t70 & 1);
    *((unsigned int *)t53) = t71;
    t73 = *((unsigned int *)t48);
    t74 = *((unsigned int *)t64);
    t75 = (t73 ^ t74);
    *((unsigned int *)t72) = t75;
    t63 = (t48 + 4);
    t65 = (t64 + 4);
    t76 = (t72 + 4);
    t79 = *((unsigned int *)t63);
    t80 = *((unsigned int *)t65);
    t81 = (t79 | t80);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t76);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB21;

LAB22:
LAB23:    t77 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t77, t72, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t16);
    t27 = (t25 ^ t26);
    *((unsigned int *)t24) = t27;
    t15 = (t6 + 4);
    t17 = (t16 + 4);
    t28 = (t24 + 4);
    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t17);
    t33 = (t31 | t32);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB24;

LAB25:
LAB26:    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t40, 0, 8);
    t29 = (t40 + 4);
    t38 = (t30 + 4);
    t42 = *((unsigned int *)t30);
    t43 = (t42 >> 4);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t38);
    t46 = (t45 >> 4);
    t47 = (t46 & 1);
    *((unsigned int *)t29) = t47;
    t49 = *((unsigned int *)t24);
    t50 = *((unsigned int *)t40);
    t51 = (t49 ^ t50);
    *((unsigned int *)t48) = t51;
    t39 = (t24 + 4);
    t41 = (t40 + 4);
    t52 = (t48 + 4);
    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t41);
    t57 = (t55 | t56);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t52);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB27;

LAB28:
LAB29:    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    memset(t64, 0, 8);
    t53 = (t64 + 4);
    t62 = (t54 + 4);
    t66 = *((unsigned int *)t54);
    t67 = (t66 >> 6);
    t68 = (t67 & 1);
    *((unsigned int *)t64) = t68;
    t69 = *((unsigned int *)t62);
    t70 = (t69 >> 6);
    t71 = (t70 & 1);
    *((unsigned int *)t53) = t71;
    t73 = *((unsigned int *)t48);
    t74 = *((unsigned int *)t64);
    t75 = (t73 ^ t74);
    *((unsigned int *)t72) = t75;
    t63 = (t48 + 4);
    t65 = (t64 + 4);
    t76 = (t72 + 4);
    t79 = *((unsigned int *)t63);
    t80 = *((unsigned int *)t65);
    t81 = (t79 | t80);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t76);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB30;

LAB31:
LAB32:    t77 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t77, t72, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    t15 = (t0 + 1768);
    t17 = (t15 + 56U);
    t28 = *((char **)t17);
    xsi_vlogtype_concat(t6, 3, 3, 3U, t28, 1, t14, 1, t4, 1);

LAB33:    t29 = ((char*)((ng1)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t29, 3);
    if (t87 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng3)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t87 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    goto LAB8;

LAB9:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    goto LAB11;

LAB12:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t24) = (t36 | t37);
    goto LAB17;

LAB18:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t52);
    *((unsigned int *)t48) = (t60 | t61);
    goto LAB20;

LAB21:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t76);
    *((unsigned int *)t72) = (t84 | t85);
    goto LAB23;

LAB24:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t24) = (t36 | t37);
    goto LAB26;

LAB27:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t52);
    *((unsigned int *)t48) = (t60 | t61);
    goto LAB29;

LAB30:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t76);
    *((unsigned int *)t72) = (t84 | t85);
    goto LAB32;

LAB34:    xsi_set_current_line(40, ng0);

LAB51:    xsi_set_current_line(41, ng0);
    t30 = (t0 + 1048U);
    t38 = *((char **)t30);
    memset(t16, 0, 8);
    t30 = (t16 + 4);
    t39 = (t38 + 4);
    t8 = *((unsigned int *)t38);
    t9 = (t8 >> 3);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t39);
    t11 = (t10 >> 3);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 15U);
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 15U);
    t41 = (t0 + 1448);
    xsi_vlogvar_assign_value(t41, t16, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB36:    xsi_set_current_line(44, ng0);

LAB52:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB38:    xsi_set_current_line(48, ng0);

LAB53:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB40:    xsi_set_current_line(52, ng0);

LAB54:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 3U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 3U);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t48, 0, 8);
    t7 = (t48 + 4);
    t15 = (t14 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 5);
    t20 = (t19 & 1);
    *((unsigned int *)t48) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 5);
    t23 = (t22 & 1);
    *((unsigned int *)t7) = t23;
    memset(t40, 0, 8);
    t17 = (t48 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t48);
    t31 = (t27 & t26);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t17) == 0)
        goto LAB55;

LAB57:    t28 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t28) = 1;

LAB58:    t29 = (t40 + 4);
    t30 = (t48 + 4);
    t33 = *((unsigned int *)t48);
    t34 = (~(t33));
    *((unsigned int *)t40) = t34;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB60;

LAB59:    t43 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t43 & 1U);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t44 & 1U);
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t64, 0, 8);
    t38 = (t64 + 4);
    t41 = (t39 + 4);
    t45 = *((unsigned int *)t39);
    t46 = (t45 >> 6);
    t47 = (t46 & 1);
    *((unsigned int *)t64) = t47;
    t49 = *((unsigned int *)t41);
    t50 = (t49 >> 6);
    t51 = (t50 & 1);
    *((unsigned int *)t38) = t51;
    xsi_vlogtype_concat(t16, 4, 4, 3U, t64, 1, t40, 1, t24, 2);
    t52 = (t0 + 1448);
    xsi_vlogvar_assign_value(t52, t16, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB42:    xsi_set_current_line(56, ng0);

LAB61:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB44:    xsi_set_current_line(60, ng0);

LAB62:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t48, 0, 8);
    t7 = (t48 + 4);
    t15 = (t14 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 4);
    t20 = (t19 & 1);
    *((unsigned int *)t48) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 4);
    t23 = (t22 & 1);
    *((unsigned int *)t7) = t23;
    memset(t40, 0, 8);
    t17 = (t48 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t48);
    t31 = (t27 & t26);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t17) == 0)
        goto LAB63;

LAB65:    t28 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t28) = 1;

LAB66:    t29 = (t40 + 4);
    t30 = (t48 + 4);
    t33 = *((unsigned int *)t48);
    t34 = (~(t33));
    *((unsigned int *)t40) = t34;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB68;

LAB67:    t43 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t43 & 1U);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t44 & 1U);
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t64, 0, 8);
    t38 = (t64 + 4);
    t41 = (t39 + 4);
    t45 = *((unsigned int *)t39);
    t46 = (t45 >> 5);
    *((unsigned int *)t64) = t46;
    t47 = *((unsigned int *)t41);
    t49 = (t47 >> 5);
    *((unsigned int *)t38) = t49;
    t50 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t50 & 3U);
    t51 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t51 & 3U);
    xsi_vlogtype_concat(t16, 4, 4, 3U, t64, 2, t40, 1, t24, 1);
    t52 = (t0 + 1448);
    xsi_vlogvar_assign_value(t52, t16, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB46:    xsi_set_current_line(64, ng0);

LAB69:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t40, 0, 8);
    t3 = (t40 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    memset(t24, 0, 8);
    t7 = (t40 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t40);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t7) == 0)
        goto LAB70;

LAB72:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;

LAB73:    t15 = (t24 + 4);
    t17 = (t40 + 4);
    t23 = *((unsigned int *)t40);
    t25 = (~(t23));
    *((unsigned int *)t24) = t25;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB75;

LAB74:    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t48, 0, 8);
    t28 = (t48 + 4);
    t30 = (t29 + 4);
    t35 = *((unsigned int *)t29);
    t36 = (t35 >> 4);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t30);
    t42 = (t37 >> 4);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t43 & 7U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 7U);
    xsi_vlogtype_concat(t16, 4, 4, 2U, t48, 3, t24, 1);
    t38 = (t0 + 1448);
    xsi_vlogvar_assign_value(t38, t16, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB48:    xsi_set_current_line(68, ng0);

LAB76:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 7U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 7U);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t48, 0, 8);
    t7 = (t48 + 4);
    t15 = (t14 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 6);
    t20 = (t19 & 1);
    *((unsigned int *)t48) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 6);
    t23 = (t22 & 1);
    *((unsigned int *)t7) = t23;
    memset(t40, 0, 8);
    t17 = (t48 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t48);
    t31 = (t27 & t26);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t17) == 0)
        goto LAB77;

LAB79:    t28 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t28) = 1;

LAB80:    t29 = (t40 + 4);
    t30 = (t48 + 4);
    t33 = *((unsigned int *)t48);
    t34 = (~(t33));
    *((unsigned int *)t40) = t34;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB82;

LAB81:    t43 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t43 & 1U);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t44 & 1U);
    xsi_vlogtype_concat(t16, 4, 4, 2U, t40, 1, t24, 3);
    t38 = (t0 + 1448);
    xsi_vlogvar_assign_value(t38, t16, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB55:    *((unsigned int *)t40) = 1;
    goto LAB58;

LAB60:    t35 = *((unsigned int *)t40);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t40) = (t35 | t36);
    t37 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t37 | t42);
    goto LAB59;

LAB63:    *((unsigned int *)t40) = 1;
    goto LAB66;

LAB68:    t35 = *((unsigned int *)t40);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t40) = (t35 | t36);
    t37 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t37 | t42);
    goto LAB67;

LAB70:    *((unsigned int *)t24) = 1;
    goto LAB73;

LAB75:    t26 = *((unsigned int *)t24);
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t24) = (t26 | t27);
    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t17);
    *((unsigned int *)t15) = (t31 | t32);
    goto LAB74;

LAB77:    *((unsigned int *)t40) = 1;
    goto LAB80;

LAB82:    t35 = *((unsigned int *)t40);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t40) = (t35 | t36);
    t37 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t37 | t42);
    goto LAB81;

}


extern void work_m_00000000002936971729_3158467535_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002936971729_3158467535", "isim/HammingDecoderTB_isim_beh.exe.sim/work/m_00000000002936971729_3158467535.didat");
	xsi_register_executes(pe);
}
