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
static const char *ng0 = "D:/ISEProject/P8/COCOTimer.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {100, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Cont_43_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t22[8];
    char t30[8];
    char t62[8];
    char t78[8];
    char t94[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3272);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t30, t7, 8);

LAB10:    memset(t62, 0, 8);
    t63 = (t30 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t30);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t63) != 0)
        goto LAB20;

LAB21:    t70 = (t62 + 4);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB22;

LAB23:    memcpy(t102, t62, 8);

LAB24:    memset(t4, 0, 8);
    t134 = (t102 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t102);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t134) != 0)
        goto LAB38;

LAB39:    t141 = (t4 + 4);
    t142 = *((unsigned int *)t4);
    t143 = *((unsigned int *)t141);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB40;

LAB41:    t146 = *((unsigned int *)t4);
    t147 = (~(t146));
    t148 = *((unsigned int *)t141);
    t149 = (t147 || t148);
    if (t149 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t141) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t4) > 0)
        goto LAB46;

LAB47:    memcpy(t3, t150, 8);

LAB48:    t151 = (t0 + 6008);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    memset(t155, 0, 8);
    t156 = 1U;
    t157 = t156;
    t158 = (t3 + 4);
    t159 = *((unsigned int *)t3);
    t156 = (t156 & t159);
    t160 = *((unsigned int *)t158);
    t157 = (t157 & t160);
    t161 = (t155 + 4);
    t162 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t162 | t156);
    t163 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t163 | t157);
    xsi_driver_vfirst_trans(t151, 0, 0);
    t164 = (t0 + 5896);
    *((int *)t164) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 3112);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB17;

LAB18:    *((unsigned int *)t62) = 1;
    goto LAB21;

LAB20:    t69 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB21;

LAB22:    t74 = (t0 + 3432);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng1)));
    memset(t78, 0, 8);
    t79 = (t76 + 4);
    t80 = (t77 + 4);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB28;

LAB25:    if (t90 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t78) = 1;

LAB28:    memset(t94, 0, 8);
    t95 = (t78 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t78);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t95) != 0)
        goto LAB31;

LAB32:    t103 = *((unsigned int *)t62);
    t104 = *((unsigned int *)t94);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t62 + 4);
    t107 = (t94 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t94) = 1;
    goto LAB32;

LAB31:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB32;

LAB33:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t62 + 4);
    t117 = (t94 + 4);
    t118 = *((unsigned int *)t62);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t94);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB35;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB39;

LAB38:    t140 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB39;

LAB40:    t145 = ((char*)((ng2)));
    goto LAB41;

LAB42:    t150 = ((char*)((ng1)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t3, 1, t145, 1, t150, 1);
    goto LAB48;

LAB46:    memcpy(t3, t145, 8);
    goto LAB48;

}

static void Cont_44_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t48[8];
    char t49[8];
    char t52[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t29);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t48, 8);

LAB20:    t89 = (t0 + 6072);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memcpy(t93, t3, 8);
    xsi_driver_vfirst_trans(t89, 0, 31);
    t94 = (t0 + 5912);
    *((int *)t94) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 3592);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 3432);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3272);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng1)));
    xsi_vlogtype_concat(t33, 32, 32, 4U, t43, 28, t42, 1, t39, 2, t36, 1);
    goto LAB13;

LAB14:    t50 = (t0 + 1912U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng2)));
    memset(t52, 0, 8);
    t53 = (t51 + 4);
    t54 = (t50 + 4);
    t55 = *((unsigned int *)t51);
    t56 = *((unsigned int *)t50);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB24;

LAB21:    if (t64 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t52) = 1;

LAB24:    memset(t49, 0, 8);
    t68 = (t52 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t68) != 0)
        goto LAB27;

LAB28:    t75 = (t49 + 4);
    t76 = *((unsigned int *)t49);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB29;

LAB30:    t82 = *((unsigned int *)t49);
    t83 = (~(t82));
    t84 = *((unsigned int *)t75);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t75) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t49) > 0)
        goto LAB35;

LAB36:    memcpy(t48, t88, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t48, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t49) = 1;
    goto LAB28;

LAB27:    t74 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB29:    t79 = (t0 + 3752);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    goto LAB30;

LAB31:    t86 = (t0 + 3912);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t48, 32, t81, 32, t88, 32);
    goto LAB37;

LAB35:    memcpy(t48, t81, 8);
    goto LAB37;

}

static void Initial_47_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    xsi_set_current_line(48, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 3592);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 3912);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 3272);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_57_3(char *t0)
{
    char t13[8];
    char t17[8];
    char t33[8];
    char t41[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5928);
    *((int *)t2) = 1;
    t3 = (t0 + 5608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB15;

LAB16:    memcpy(t41, t13, 8);

LAB17:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB33:    t5 = ((char*)((ng1)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t65 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng2)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t65 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng6)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t65 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng7)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t65 == 1)
        goto LAB40;

LAB41:
LAB42:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 1912U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t18 = (t12 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t11);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB21;

LAB18:    if (t29 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t17) = 1;

LAB21:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t34) != 0)
        goto LAB24;

LAB25:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t13 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB20:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t33) = 1;
    goto LAB25;

LAB24:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB25;

LAB26:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t13 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB28;

LAB29:    xsi_set_current_line(72, ng0);

LAB32:    xsi_set_current_line(73, ng0);
    t79 = (t0 + 2232U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    t79 = (t81 + 4);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 3);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 3);
    t88 = (t87 & 1);
    *((unsigned int *)t79) = t88;
    t89 = (t0 + 3272);
    xsi_vlogvar_assign_value(t89, t81, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = (t0 + 3432);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3592);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 1);
    goto LAB31;

LAB34:    xsi_set_current_line(78, ng0);

LAB43:    xsi_set_current_line(79, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3112);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t11);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB48;

LAB49:    memcpy(t41, t13, 8);

LAB50:    t79 = (t41 + 4);
    t74 = *((unsigned int *)t79);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB42;

LAB36:    xsi_set_current_line(88, ng0);

LAB69:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t18 = (t11 + 4);
    t19 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t19);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB73;

LAB70:    if (t21 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t34 = (t13 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t18 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t18);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t18);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB80;

LAB77:    if (t21 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t13) = 1;

LAB80:    t32 = (t13 + 4);
    t24 = *((unsigned int *)t32);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB81;

LAB82:
LAB83:
LAB76:    goto LAB42;

LAB38:    xsi_set_current_line(98, ng0);

LAB85:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t18 = (t11 + 4);
    t19 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t19);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB89;

LAB86:    if (t21 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t13) = 1;

LAB89:    t34 = (t13 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t18 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t18);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t18);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB96;

LAB93:    if (t21 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t13) = 1;

LAB96:    t32 = (t13 + 4);
    t24 = *((unsigned int *)t32);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 32, t11, 32);
    t12 = (t0 + 3912);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);

LAB99:
LAB92:    goto LAB42;

LAB40:    xsi_set_current_line(111, ng0);

LAB108:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t18 = (t11 + 4);
    t19 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t19);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB112;

LAB109:    if (t21 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t13) = 1;

LAB112:    t34 = (t13 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t2) != 0)
        goto LAB118;

LAB119:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t11);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB120;

LAB121:    memcpy(t41, t13, 8);

LAB122:    t79 = (t41 + 4);
    t74 = *((unsigned int *)t79);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB134;

LAB135:
LAB136:
LAB115:    goto LAB42;

LAB44:    *((unsigned int *)t13) = 1;
    goto LAB47;

LAB46:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB48:    t12 = (t0 + 1912U);
    t18 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t19 = (t18 + 4);
    t32 = (t12 + 4);
    t20 = *((unsigned int *)t18);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t32);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t32);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB54;

LAB51:    if (t29 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t17) = 1;

LAB54:    memset(t33, 0, 8);
    t40 = (t17 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t40) != 0)
        goto LAB57;

LAB58:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t46 = (t13 + 4);
    t47 = (t33 + 4);
    t55 = (t41 + 4);
    t48 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t47);
    t50 = (t48 | t49);
    *((unsigned int *)t55) = t50;
    t51 = *((unsigned int *)t55);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t33) = 1;
    goto LAB58;

LAB57:    t45 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB58;

LAB59:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t55);
    *((unsigned int *)t41) = (t53 | t54);
    t56 = (t13 + 4);
    t73 = (t33 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t73);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t69 & t67);
    t70 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB61;

LAB62:    xsi_set_current_line(81, ng0);

LAB65:    xsi_set_current_line(82, ng0);
    t80 = ((char*)((ng2)));
    t82 = (t0 + 2952);
    xsi_vlogvar_assign_value(t82, t80, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB64;

LAB66:    xsi_set_current_line(86, ng0);
    t12 = ((char*)((ng2)));
    t18 = (t0 + 2952);
    xsi_vlogvar_assign_value(t18, t12, 0, 0, 2);
    goto LAB68;

LAB72:    t32 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(90, ng0);
    t40 = ((char*)((ng1)));
    t45 = (t0 + 2952);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 2);
    goto LAB76;

LAB79:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(92, ng0);

LAB84:    xsi_set_current_line(93, ng0);
    t34 = ((char*)((ng6)));
    t40 = (t0 + 2952);
    xsi_vlogvar_assign_value(t40, t34, 0, 0, 2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3912);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);
    goto LAB83;

LAB88:    t32 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(100, ng0);
    t40 = ((char*)((ng1)));
    t45 = (t0 + 2952);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 2);
    goto LAB92;

LAB95:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(102, ng0);

LAB100:    xsi_set_current_line(103, ng0);
    t34 = (t0 + 3432);
    t40 = (t34 + 56U);
    t45 = *((char **)t40);
    t46 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t47 = (t45 + 4);
    t55 = (t46 + 4);
    t29 = *((unsigned int *)t45);
    t30 = *((unsigned int *)t46);
    t31 = (t29 ^ t30);
    t35 = *((unsigned int *)t47);
    t36 = *((unsigned int *)t55);
    t37 = (t35 ^ t36);
    t38 = (t31 | t37);
    t39 = *((unsigned int *)t47);
    t42 = *((unsigned int *)t55);
    t43 = (t39 | t42);
    t44 = (~(t43));
    t48 = (t38 & t44);
    if (t48 != 0)
        goto LAB104;

LAB101:    if (t43 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t17) = 1;

LAB104:    t73 = (t17 + 4);
    t49 = *((unsigned int *)t73);
    t50 = (~(t49));
    t51 = *((unsigned int *)t17);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB105;

LAB106:
LAB107:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB99;

LAB103:    t56 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(104, ng0);
    t79 = ((char*)((ng2)));
    t80 = (t0 + 2952);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 2);
    goto LAB107;

LAB111:    t32 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(113, ng0);
    t40 = ((char*)((ng1)));
    t45 = (t0 + 2952);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 2);
    goto LAB115;

LAB116:    *((unsigned int *)t13) = 1;
    goto LAB119;

LAB118:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB119;

LAB120:    t12 = (t0 + 1912U);
    t18 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t19 = (t18 + 4);
    t32 = (t12 + 4);
    t20 = *((unsigned int *)t18);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t32);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t32);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB126;

LAB123:    if (t29 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t17) = 1;

LAB126:    memset(t33, 0, 8);
    t40 = (t17 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t40) != 0)
        goto LAB129;

LAB130:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t46 = (t13 + 4);
    t47 = (t33 + 4);
    t55 = (t41 + 4);
    t48 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t47);
    t50 = (t48 | t49);
    *((unsigned int *)t55) = t50;
    t51 = *((unsigned int *)t55);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB122;

LAB125:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t33) = 1;
    goto LAB130;

LAB129:    t45 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB130;

LAB131:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t55);
    *((unsigned int *)t41) = (t53 | t54);
    t56 = (t13 + 4);
    t73 = (t33 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t73);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t69 & t67);
    t70 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB133;

LAB134:    xsi_set_current_line(115, ng0);

LAB137:    xsi_set_current_line(116, ng0);
    t80 = ((char*)((ng1)));
    t82 = (t0 + 2952);
    xsi_vlogvar_assign_value(t82, t80, 0, 0, 2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB136;

}


extern void work_m_00000000000856528213_1574930566_init()
{
	static char *pe[] = {(void *)Cont_43_0,(void *)Cont_44_1,(void *)Initial_47_2,(void *)Always_57_3};
	xsi_register_didat("work_m_00000000000856528213_1574930566", "isim/microSystem_tb_isim_beh.exe.sim/work/m_00000000000856528213_1574930566.didat");
	xsi_register_executes(pe);
}
