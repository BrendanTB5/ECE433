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
static const char *ng0 = "C:/Users/mulholbn/Downloads/ECE433/ECE433/lab3part1/kcpsm3_int_test.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Cont_112_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void Cont_113_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5512);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Always_116_2(char *t0)
{
    char t6[8];
    char t15[8];
    char t31[8];
    char t45[8];
    char t61[8];
    char t69[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t32) != 0)
        goto LAB12;

LAB13:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    memcpy(t69, t31, 8);

LAB16:    t101 = (t69 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t69);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t5);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB35;

LAB32:    if (t27 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t15) = 1;

LAB35:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t17) != 0)
        goto LAB38;

LAB39:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB40;

LAB41:    memcpy(t69, t31, 8);

LAB42:    t83 = (t69 + 4);
    t102 = *((unsigned int *)t83);
    t103 = (~(t102));
    t104 = *((unsigned int *)t69);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB12:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB13;

LAB14:    t43 = (t0 + 2168U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng2)));
    memset(t45, 0, 8);
    t46 = (t44 + 4);
    t47 = (t43 + 4);
    t48 = *((unsigned int *)t44);
    t49 = *((unsigned int *)t43);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB20;

LAB17:    if (t57 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t45) = 1;

LAB20:    memset(t61, 0, 8);
    t62 = (t45 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t62) != 0)
        goto LAB23;

LAB24:    t70 = *((unsigned int *)t31);
    t71 = *((unsigned int *)t61);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t73 = (t31 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB23:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB24;

LAB25:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t31 + 4);
    t84 = (t61 + 4);
    t85 = *((unsigned int *)t31);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (~(t87));
    t89 = *((unsigned int *)t61);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (~(t91));
    t93 = (t86 & t88);
    t94 = (t90 & t92);
    t95 = (~(t93));
    t96 = (~(t94));
    t97 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t97 & t95);
    t98 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t98 & t96);
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t95);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t96);
    goto LAB27;

LAB28:    xsi_set_current_line(120, ng0);

LAB31:    xsi_set_current_line(121, ng0);
    t107 = (t0 + 1848U);
    t108 = *((char **)t107);
    t107 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t107, t108, 0, 0, 8, 0LL);
    goto LAB30;

LAB34:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB38:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB40:    t38 = (t0 + 2168U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng2)));
    memset(t45, 0, 8);
    t43 = (t39 + 4);
    t44 = (t38 + 4);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t38);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t44);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB46;

LAB43:    if (t57 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t45) = 1;

LAB46:    memset(t61, 0, 8);
    t47 = (t45 + 4);
    t63 = *((unsigned int *)t47);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t47) != 0)
        goto LAB49;

LAB50:    t70 = *((unsigned int *)t31);
    t71 = *((unsigned int *)t61);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t62 = (t31 + 4);
    t68 = (t61 + 4);
    t73 = (t69 + 4);
    t76 = *((unsigned int *)t62);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    *((unsigned int *)t73) = t78;
    t79 = *((unsigned int *)t73);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t46 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t61) = 1;
    goto LAB50;

LAB49:    t60 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB50;

LAB51:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t73);
    *((unsigned int *)t69) = (t81 | t82);
    t74 = (t31 + 4);
    t75 = (t61 + 4);
    t85 = *((unsigned int *)t31);
    t86 = (~(t85));
    t87 = *((unsigned int *)t74);
    t88 = (~(t87));
    t89 = *((unsigned int *)t61);
    t90 = (~(t89));
    t91 = *((unsigned int *)t75);
    t92 = (~(t91));
    t93 = (t86 & t88);
    t94 = (t90 & t92);
    t95 = (~(t93));
    t96 = (~(t94));
    t97 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t97 & t95);
    t98 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t98 & t96);
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t95);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t96);
    goto LAB53;

LAB54:    xsi_set_current_line(126, ng0);

LAB57:    xsi_set_current_line(127, ng0);
    t84 = (t0 + 1848U);
    t101 = *((char **)t84);
    t84 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t84, t101, 0, 0, 8, 0LL);
    goto LAB56;

}

static void Always_135_3(char *t0)
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

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);

LAB5:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(145, ng0);

LAB22:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(137, ng0);

LAB13:    xsi_set_current_line(138, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(141, ng0);

LAB21:    xsi_set_current_line(142, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    goto LAB20;

}


extern void work_m_00000000001710164255_2740450212_init()
{
	static char *pe[] = {(void *)Cont_112_0,(void *)Cont_113_1,(void *)Always_116_2,(void *)Always_135_3};
	xsi_register_didat("work_m_00000000001710164255_2740450212", "isim/testbench_isim_beh.exe.sim/work/m_00000000001710164255_2740450212.didat");
	xsi_register_executes(pe);
}
