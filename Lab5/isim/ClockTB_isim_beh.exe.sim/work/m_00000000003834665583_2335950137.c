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
static const char *ng0 = "E:/ECE433/ECE433/Lab5/SmartCounter.v";



static void NetDecl_13_0(char *t0)
{
    char t5[8];
    char t36[8];
    char t51[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t36, 0, 8);
    t37 = (t5 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t5);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t37) != 0)
        goto LAB9;

LAB10:    t44 = (t36 + 4);
    t45 = *((unsigned int *)t36);
    t46 = (!(t45));
    t47 = *((unsigned int *)t44);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB11;

LAB12:    memcpy(t58, t36, 8);

LAB13:    t86 = (t0 + 4432);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t90, 0, 8);
    t91 = 1U;
    t92 = t91;
    t93 = (t58 + 4);
    t94 = *((unsigned int *)t58);
    t91 = (t91 & t94);
    t95 = *((unsigned int *)t93);
    t92 = (t92 & t95);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t97 | t91);
    t98 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t98 | t92);
    xsi_driver_vfirst_trans(t86, 0, 0U);
    t99 = (t0 + 4352);
    *((int *)t99) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t36) = 1;
    goto LAB10;

LAB9:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB10;

LAB11:    t49 = (t0 + 1912U);
    t50 = *((char **)t49);
    memset(t51, 0, 8);
    t49 = (t50 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t49) != 0)
        goto LAB16;

LAB17:    t59 = *((unsigned int *)t36);
    t60 = *((unsigned int *)t51);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = (t36 + 4);
    t63 = (t51 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB13;

LAB14:    *((unsigned int *)t51) = 1;
    goto LAB17;

LAB16:    t57 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB17;

LAB18:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t36 + 4);
    t73 = (t51 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t36);
    t77 = (t76 & t75);
    t78 = *((unsigned int *)t73);
    t79 = (~(t78));
    t80 = *((unsigned int *)t51);
    t81 = (t80 & t79);
    t82 = (~(t77));
    t83 = (~(t81));
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t82);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t83);
    goto LAB20;

}


extern void work_m_00000000003834665583_2335950137_init()
{
	static char *pe[] = {(void *)NetDecl_13_0};
	xsi_register_didat("work_m_00000000003834665583_2335950137", "isim/ClockTB_isim_beh.exe.sim/work/m_00000000003834665583_2335950137.didat");
	xsi_register_executes(pe);
}
