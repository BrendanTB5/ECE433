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
static const char *ng0 = "E:/ECE433/ECE433/Lab5/UniversalCounterWithoutLatch.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Always_12_0(char *t0)
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

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 2072U);
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

LAB10:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(13, ng0);
    t28 = (t0 + 880);
    t29 = *((char **)t28);
    t28 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    goto LAB11;

}

static void Cont_16_1(char *t0)
{
    char t4[8];
    char t22[8];
    char t38[8];
    char t75[8];
    char t90[8];
    char t124[8];
    char t142[8];
    char t158[8];
    char t195[8];
    char t210[8];
    char t242[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    char *t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    char *t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    int t234;
    int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    char *t247;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    char *t271;
    char *t272;
    char *t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    char *t283;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 1912U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB11;

LAB8:    if (t34 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t22) = 1;

LAB11:    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t22);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t4 + 4);
    t43 = (t22 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 2792);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t0 + 608);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    t73 = (t72 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t74);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t73);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t73);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB18;

LAB15:    if (t86 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t75) = 1;

LAB18:    t91 = *((unsigned int *)t38);
    t92 = *((unsigned int *)t75);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t38 + 4);
    t95 = (t75 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB19;

LAB20:
LAB21:    t122 = (t0 + 1752U);
    t123 = *((char **)t122);
    t122 = ((char*)((ng1)));
    memset(t124, 0, 8);
    t125 = (t123 + 4);
    t126 = (t122 + 4);
    t127 = *((unsigned int *)t123);
    t128 = *((unsigned int *)t122);
    t129 = (t127 ^ t128);
    t130 = *((unsigned int *)t125);
    t131 = *((unsigned int *)t126);
    t132 = (t130 ^ t131);
    t133 = (t129 | t132);
    t134 = *((unsigned int *)t125);
    t135 = *((unsigned int *)t126);
    t136 = (t134 | t135);
    t137 = (~(t136));
    t138 = (t133 & t137);
    if (t138 != 0)
        goto LAB25;

LAB22:    if (t136 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t124) = 1;

LAB25:    t140 = (t0 + 1912U);
    t141 = *((char **)t140);
    t140 = ((char*)((ng2)));
    memset(t142, 0, 8);
    t143 = (t141 + 4);
    t144 = (t140 + 4);
    t145 = *((unsigned int *)t141);
    t146 = *((unsigned int *)t140);
    t147 = (t145 ^ t146);
    t148 = *((unsigned int *)t143);
    t149 = *((unsigned int *)t144);
    t150 = (t148 ^ t149);
    t151 = (t147 | t150);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t144);
    t154 = (t152 | t153);
    t155 = (~(t154));
    t156 = (t151 & t155);
    if (t156 != 0)
        goto LAB29;

LAB26:    if (t154 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t142) = 1;

LAB29:    t159 = *((unsigned int *)t124);
    t160 = *((unsigned int *)t142);
    t161 = (t159 & t160);
    *((unsigned int *)t158) = t161;
    t162 = (t124 + 4);
    t163 = (t142 + 4);
    t164 = (t158 + 4);
    t165 = *((unsigned int *)t162);
    t166 = *((unsigned int *)t163);
    t167 = (t165 | t166);
    *((unsigned int *)t164) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 != 0);
    if (t169 == 1)
        goto LAB30;

LAB31:
LAB32:    t190 = (t0 + 2792);
    t191 = (t190 + 56U);
    t192 = *((char **)t191);
    t193 = (t0 + 744);
    t194 = *((char **)t193);
    memset(t195, 0, 8);
    t193 = (t192 + 4);
    t196 = (t194 + 4);
    t197 = *((unsigned int *)t192);
    t198 = *((unsigned int *)t194);
    t199 = (t197 ^ t198);
    t200 = *((unsigned int *)t193);
    t201 = *((unsigned int *)t196);
    t202 = (t200 ^ t201);
    t203 = (t199 | t202);
    t204 = *((unsigned int *)t193);
    t205 = *((unsigned int *)t196);
    t206 = (t204 | t205);
    t207 = (~(t206));
    t208 = (t203 & t207);
    if (t208 != 0)
        goto LAB36;

LAB33:    if (t206 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t195) = 1;

LAB36:    t211 = *((unsigned int *)t158);
    t212 = *((unsigned int *)t195);
    t213 = (t211 & t212);
    *((unsigned int *)t210) = t213;
    t214 = (t158 + 4);
    t215 = (t195 + 4);
    t216 = (t210 + 4);
    t217 = *((unsigned int *)t214);
    t218 = *((unsigned int *)t215);
    t219 = (t217 | t218);
    *((unsigned int *)t216) = t219;
    t220 = *((unsigned int *)t216);
    t221 = (t220 != 0);
    if (t221 == 1)
        goto LAB37;

LAB38:
LAB39:    t243 = *((unsigned int *)t90);
    t244 = *((unsigned int *)t210);
    t245 = (t243 | t244);
    *((unsigned int *)t242) = t245;
    t246 = (t90 + 4);
    t247 = (t210 + 4);
    t248 = (t242 + 4);
    t249 = *((unsigned int *)t246);
    t250 = *((unsigned int *)t247);
    t251 = (t249 | t250);
    *((unsigned int *)t248) = t251;
    t252 = *((unsigned int *)t248);
    t253 = (t252 != 0);
    if (t253 == 1)
        goto LAB40;

LAB41:
LAB42:    t270 = (t0 + 4800);
    t271 = (t270 + 56U);
    t272 = *((char **)t271);
    t273 = (t272 + 56U);
    t274 = *((char **)t273);
    memset(t274, 0, 8);
    t275 = 1U;
    t276 = t275;
    t277 = (t242 + 4);
    t278 = *((unsigned int *)t242);
    t275 = (t275 & t278);
    t279 = *((unsigned int *)t277);
    t276 = (t276 & t279);
    t280 = (t274 + 4);
    t281 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t281 | t275);
    t282 = *((unsigned int *)t280);
    *((unsigned int *)t280) = (t282 | t276);
    xsi_driver_vfirst_trans(t270, 0, 0);
    t283 = (t0 + 4704);
    *((int *)t283) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB10:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t4 + 4);
    t53 = (t22 + 4);
    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t22);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB14;

LAB17:    t89 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB18;

LAB19:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t38 + 4);
    t105 = (t75 + 4);
    t106 = *((unsigned int *)t38);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t75);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB21;

LAB24:    t139 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB25;

LAB28:    t157 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB29;

LAB30:    t170 = *((unsigned int *)t158);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t158) = (t170 | t171);
    t172 = (t124 + 4);
    t173 = (t142 + 4);
    t174 = *((unsigned int *)t124);
    t175 = (~(t174));
    t176 = *((unsigned int *)t172);
    t177 = (~(t176));
    t178 = *((unsigned int *)t142);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (~(t180));
    t182 = (t175 & t177);
    t183 = (t179 & t181);
    t184 = (~(t182));
    t185 = (~(t183));
    t186 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t186 & t184);
    t187 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t187 & t185);
    t188 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t188 & t184);
    t189 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t189 & t185);
    goto LAB32;

LAB35:    t209 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t209) = 1;
    goto LAB36;

LAB37:    t222 = *((unsigned int *)t210);
    t223 = *((unsigned int *)t216);
    *((unsigned int *)t210) = (t222 | t223);
    t224 = (t158 + 4);
    t225 = (t195 + 4);
    t226 = *((unsigned int *)t158);
    t227 = (~(t226));
    t228 = *((unsigned int *)t224);
    t229 = (~(t228));
    t230 = *((unsigned int *)t195);
    t231 = (~(t230));
    t232 = *((unsigned int *)t225);
    t233 = (~(t232));
    t234 = (t227 & t229);
    t235 = (t231 & t233);
    t236 = (~(t234));
    t237 = (~(t235));
    t238 = *((unsigned int *)t216);
    *((unsigned int *)t216) = (t238 & t236);
    t239 = *((unsigned int *)t216);
    *((unsigned int *)t216) = (t239 & t237);
    t240 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t240 & t236);
    t241 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t241 & t237);
    goto LAB39;

LAB40:    t254 = *((unsigned int *)t242);
    t255 = *((unsigned int *)t248);
    *((unsigned int *)t242) = (t254 | t255);
    t256 = (t90 + 4);
    t257 = (t210 + 4);
    t258 = *((unsigned int *)t256);
    t259 = (~(t258));
    t260 = *((unsigned int *)t90);
    t261 = (t260 & t259);
    t262 = *((unsigned int *)t257);
    t263 = (~(t262));
    t264 = *((unsigned int *)t210);
    t265 = (t264 & t263);
    t266 = (~(t261));
    t267 = (~(t265));
    t268 = *((unsigned int *)t248);
    *((unsigned int *)t248) = (t268 & t266);
    t269 = *((unsigned int *)t248);
    *((unsigned int *)t248) = (t269 & t267);
    goto LAB42;

}

static void Always_18_2(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
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
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    t3 = (t0 + 4400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);
    t5 = (t0 + 1912U);
    t6 = *((char **)t5);
    t5 = (t0 + 1752U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 32, 2, 2U, t7, 1, t6, 1);

LAB5:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t5, 32);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);
    t9 = (t0 + 2792);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB14;

LAB8:    xsi_set_current_line(21, ng0);

LAB15:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 2792);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    t7 = (t6 + 4);
    t10 = (t9 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB19;

LAB16:    if (t23 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB19:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(22, ng0);

LAB24:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t5, 4, t6, 4);
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 4, 0LL);

LAB22:    goto LAB14;

LAB10:    xsi_set_current_line(24, ng0);

LAB25:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 2792);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 744);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    t7 = (t6 + 4);
    t10 = (t9 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB29;

LAB26:    if (t23 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;

LAB29:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(25, ng0);

LAB34:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 4, t5, 4, t6, 4);
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 4, 0LL);

LAB32:    goto LAB14;

LAB12:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1592U);
    t5 = *((char **)t3);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 4, 0LL);
    goto LAB14;

LAB18:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(21, ng0);

LAB23:    xsi_set_current_line(21, ng0);
    t31 = (t0 + 744);
    t32 = *((char **)t31);
    t31 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t31, t32, 0, 0, 4, 0LL);
    goto LAB22;

LAB28:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(24, ng0);

LAB33:    xsi_set_current_line(24, ng0);
    t31 = (t0 + 608);
    t32 = *((char **)t31);
    t31 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t31, t32, 0, 0, 4, 0LL);
    goto LAB32;

}


extern void work_m_00000000000784138287_3870391266_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Cont_16_1,(void *)Always_18_2};
	xsi_register_didat("work_m_00000000000784138287_3870391266", "isim/ClockTB_isim_beh.exe.sim/work/m_00000000000784138287_3870391266.didat");
	xsi_register_executes(pe);
}
