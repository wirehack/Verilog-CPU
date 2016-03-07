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
static const char *ng0 = "D:/ISEProject/P7/datapath/Load_ext.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4U, 0U};



static void Always_27_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t12[8];
    char t37[8];
    char t51[8];
    char t52[8];
    char t55[8];
    char t82[8];
    char t96[8];
    char t97[8];
    char t100[8];
    char t127[8];
    char t141[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
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
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t3);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB21;

LAB18:    if (t22 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t12) = 1;

LAB21:    memset(t11, 0, 8);
    t26 = (t12 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t12);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t26) != 0)
        goto LAB24;

LAB25:    t33 = (t11 + 4);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB26;

LAB27:    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t33) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t11) > 0)
        goto LAB32;

LAB33:    memcpy(t10, t51, 8);

LAB34:    xsi_vlogtype_zero_extend(t9, 32, t10, 8);
    t151 = (t0 + 1768);
    xsi_vlogvar_assign_value(t151, t9, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t3);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB72;

LAB69:    if (t22 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t12) = 1;

LAB72:    memset(t11, 0, 8);
    t26 = (t12 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t12);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t26) != 0)
        goto LAB75;

LAB76:    t33 = (t11 + 4);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB77;

LAB78:    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t33) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t11) > 0)
        goto LAB83;

LAB84:    memcpy(t10, t51, 8);

LAB85:    xsi_vlogtype_sign_extend(t9, 32, t10, 8);
    t151 = (t0 + 1768);
    xsi_vlogvar_assign_value(t151, t9, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t12, 32, t4, t8, 2, t25, 32, 1);
    t26 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t32 = (t12 + 4);
    t33 = (t26 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t26);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t33);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t32);
    t21 = *((unsigned int *)t33);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB123;

LAB120:    if (t22 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t37) = 1;

LAB123:    memset(t11, 0, 8);
    t39 = (t37 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (~(t27));
    t29 = *((unsigned int *)t37);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t39) != 0)
        goto LAB126;

LAB127:    t53 = (t11 + 4);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t53);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB128;

LAB129:    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t53);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t53) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t11) > 0)
        goto LAB134;

LAB135:    memcpy(t10, t52, 8);

LAB136:    xsi_vlogtype_zero_extend(t9, 32, t10, 16);
    t78 = (t0 + 1768);
    xsi_vlogvar_assign_value(t78, t9, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t12, 32, t4, t8, 2, t25, 32, 1);
    t26 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t32 = (t12 + 4);
    t33 = (t26 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t26);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t33);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t32);
    t21 = *((unsigned int *)t33);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB140;

LAB137:    if (t22 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t37) = 1;

LAB140:    memset(t11, 0, 8);
    t39 = (t37 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (~(t27));
    t29 = *((unsigned int *)t37);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t39) != 0)
        goto LAB143;

LAB144:    t53 = (t11 + 4);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t53);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB145;

LAB146:    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t53);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t53) > 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t11) > 0)
        goto LAB151;

LAB152:    memcpy(t10, t52, 8);

LAB153:    xsi_vlogtype_sign_extend(t9, 32, t10, 16);
    t78 = (t0 + 1768);
    xsi_vlogvar_assign_value(t78, t9, 0, 0, 32);
    goto LAB17;

LAB20:    t25 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB24:    t32 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB26:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 255U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 255U);
    goto LAB27;

LAB28:    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    t53 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t54 + 4);
    t57 = (t53 + 4);
    t58 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t53);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB38;

LAB35:    if (t67 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t55) = 1;

LAB38:    memset(t52, 0, 8);
    t71 = (t55 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t55);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t71) != 0)
        goto LAB41;

LAB42:    t78 = (t52 + 4);
    t79 = *((unsigned int *)t52);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB43;

LAB44:    t92 = *((unsigned int *)t52);
    t93 = (~(t92));
    t94 = *((unsigned int *)t78);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t78) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t52) > 0)
        goto LAB49;

LAB50:    memcpy(t51, t96, 8);

LAB51:    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t10, 8, t37, 8, t51, 8);
    goto LAB34;

LAB32:    memcpy(t10, t37, 8);
    goto LAB34;

LAB37:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t52) = 1;
    goto LAB42;

LAB41:    t77 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB42;

LAB43:    t83 = (t0 + 1208U);
    t84 = *((char **)t83);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (t86 >> 8);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 8);
    *((unsigned int *)t83) = t89;
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 255U);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 255U);
    goto LAB44;

LAB45:    t98 = (t0 + 1048U);
    t99 = *((char **)t98);
    t98 = ((char*)((ng3)));
    memset(t100, 0, 8);
    t101 = (t99 + 4);
    t102 = (t98 + 4);
    t103 = *((unsigned int *)t99);
    t104 = *((unsigned int *)t98);
    t105 = (t103 ^ t104);
    t106 = *((unsigned int *)t101);
    t107 = *((unsigned int *)t102);
    t108 = (t106 ^ t107);
    t109 = (t105 | t108);
    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t102);
    t112 = (t110 | t111);
    t113 = (~(t112));
    t114 = (t109 & t113);
    if (t114 != 0)
        goto LAB55;

LAB52:    if (t112 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t100) = 1;

LAB55:    memset(t97, 0, 8);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t100);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t116) != 0)
        goto LAB58;

LAB59:    t123 = (t97 + 4);
    t124 = *((unsigned int *)t97);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB60;

LAB61:    t137 = *((unsigned int *)t97);
    t138 = (~(t137));
    t139 = *((unsigned int *)t123);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t123) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t97) > 0)
        goto LAB66;

LAB67:    memcpy(t96, t141, 8);

LAB68:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t51, 8, t82, 8, t96, 8);
    goto LAB51;

LAB49:    memcpy(t51, t82, 8);
    goto LAB51;

LAB54:    t115 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t97) = 1;
    goto LAB59;

LAB58:    t122 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB59;

LAB60:    t128 = (t0 + 1208U);
    t129 = *((char **)t128);
    memset(t127, 0, 8);
    t128 = (t127 + 4);
    t130 = (t129 + 4);
    t131 = *((unsigned int *)t129);
    t132 = (t131 >> 16);
    *((unsigned int *)t127) = t132;
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 16);
    *((unsigned int *)t128) = t134;
    t135 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t135 & 255U);
    t136 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t136 & 255U);
    goto LAB61;

LAB62:    t142 = (t0 + 1208U);
    t143 = *((char **)t142);
    memset(t141, 0, 8);
    t142 = (t141 + 4);
    t144 = (t143 + 4);
    t145 = *((unsigned int *)t143);
    t146 = (t145 >> 24);
    *((unsigned int *)t141) = t146;
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 24);
    *((unsigned int *)t142) = t148;
    t149 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t149 & 255U);
    t150 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t150 & 255U);
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t96, 8, t127, 8, t141, 8);
    goto LAB68;

LAB66:    memcpy(t96, t127, 8);
    goto LAB68;

LAB71:    t25 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t11) = 1;
    goto LAB76;

LAB75:    t32 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB76;

LAB77:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 255U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 255U);
    goto LAB78;

LAB79:    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    t53 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t54 + 4);
    t57 = (t53 + 4);
    t58 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t53);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB89;

LAB86:    if (t67 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t55) = 1;

LAB89:    memset(t52, 0, 8);
    t71 = (t55 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t55);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t71) != 0)
        goto LAB92;

LAB93:    t78 = (t52 + 4);
    t79 = *((unsigned int *)t52);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB94;

LAB95:    t92 = *((unsigned int *)t52);
    t93 = (~(t92));
    t94 = *((unsigned int *)t78);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t78) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t52) > 0)
        goto LAB100;

LAB101:    memcpy(t51, t96, 8);

LAB102:    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t10, 8, t37, 8, t51, 8);
    goto LAB85;

LAB83:    memcpy(t10, t37, 8);
    goto LAB85;

LAB88:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t52) = 1;
    goto LAB93;

LAB92:    t77 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB93;

LAB94:    t83 = (t0 + 1208U);
    t84 = *((char **)t83);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (t86 >> 8);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 8);
    *((unsigned int *)t83) = t89;
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 255U);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 255U);
    goto LAB95;

LAB96:    t98 = (t0 + 1048U);
    t99 = *((char **)t98);
    t98 = ((char*)((ng3)));
    memset(t100, 0, 8);
    t101 = (t99 + 4);
    t102 = (t98 + 4);
    t103 = *((unsigned int *)t99);
    t104 = *((unsigned int *)t98);
    t105 = (t103 ^ t104);
    t106 = *((unsigned int *)t101);
    t107 = *((unsigned int *)t102);
    t108 = (t106 ^ t107);
    t109 = (t105 | t108);
    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t102);
    t112 = (t110 | t111);
    t113 = (~(t112));
    t114 = (t109 & t113);
    if (t114 != 0)
        goto LAB106;

LAB103:    if (t112 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t100) = 1;

LAB106:    memset(t97, 0, 8);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t100);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t116) != 0)
        goto LAB109;

LAB110:    t123 = (t97 + 4);
    t124 = *((unsigned int *)t97);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB111;

LAB112:    t137 = *((unsigned int *)t97);
    t138 = (~(t137));
    t139 = *((unsigned int *)t123);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t123) > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t97) > 0)
        goto LAB117;

LAB118:    memcpy(t96, t141, 8);

LAB119:    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t51, 8, t82, 8, t96, 8);
    goto LAB102;

LAB100:    memcpy(t51, t82, 8);
    goto LAB102;

LAB105:    t115 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t97) = 1;
    goto LAB110;

LAB109:    t122 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB110;

LAB111:    t128 = (t0 + 1208U);
    t129 = *((char **)t128);
    memset(t127, 0, 8);
    t128 = (t127 + 4);
    t130 = (t129 + 4);
    t131 = *((unsigned int *)t129);
    t132 = (t131 >> 16);
    *((unsigned int *)t127) = t132;
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 16);
    *((unsigned int *)t128) = t134;
    t135 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t135 & 255U);
    t136 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t136 & 255U);
    goto LAB112;

LAB113:    t142 = (t0 + 1208U);
    t143 = *((char **)t142);
    memset(t141, 0, 8);
    t142 = (t141 + 4);
    t144 = (t143 + 4);
    t145 = *((unsigned int *)t143);
    t146 = (t145 >> 24);
    *((unsigned int *)t141) = t146;
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 24);
    *((unsigned int *)t142) = t148;
    t149 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t149 & 255U);
    t150 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t150 & 255U);
    goto LAB114;

LAB115:    xsi_vlog_unsigned_bit_combine(t96, 8, t127, 8, t141, 8);
    goto LAB119;

LAB117:    memcpy(t96, t127, 8);
    goto LAB119;

LAB122:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t11) = 1;
    goto LAB127;

LAB126:    t40 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB127;

LAB128:    t54 = (t0 + 1208U);
    t56 = *((char **)t54);
    memset(t51, 0, 8);
    t54 = (t51 + 4);
    t57 = (t56 + 4);
    t41 = *((unsigned int *)t56);
    t42 = (t41 >> 0);
    *((unsigned int *)t51) = t42;
    t43 = *((unsigned int *)t57);
    t44 = (t43 >> 0);
    *((unsigned int *)t54) = t44;
    t45 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t45 & 65535U);
    t46 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t46 & 65535U);
    goto LAB129;

LAB130:    t70 = (t0 + 1208U);
    t71 = *((char **)t70);
    memset(t52, 0, 8);
    t70 = (t52 + 4);
    t77 = (t71 + 4);
    t58 = *((unsigned int *)t71);
    t59 = (t58 >> 16);
    *((unsigned int *)t52) = t59;
    t60 = *((unsigned int *)t77);
    t61 = (t60 >> 16);
    *((unsigned int *)t70) = t61;
    t62 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t62 & 65535U);
    t63 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t63 & 65535U);
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t10, 16, t51, 16, t52, 16);
    goto LAB136;

LAB134:    memcpy(t10, t51, 8);
    goto LAB136;

LAB139:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB140;

LAB141:    *((unsigned int *)t11) = 1;
    goto LAB144;

LAB143:    t40 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB144;

LAB145:    t54 = (t0 + 1208U);
    t56 = *((char **)t54);
    memset(t51, 0, 8);
    t54 = (t51 + 4);
    t57 = (t56 + 4);
    t41 = *((unsigned int *)t56);
    t42 = (t41 >> 0);
    *((unsigned int *)t51) = t42;
    t43 = *((unsigned int *)t57);
    t44 = (t43 >> 0);
    *((unsigned int *)t54) = t44;
    t45 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t45 & 65535U);
    t46 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t46 & 65535U);
    goto LAB146;

LAB147:    t70 = (t0 + 1208U);
    t71 = *((char **)t70);
    memset(t52, 0, 8);
    t70 = (t52 + 4);
    t77 = (t71 + 4);
    t58 = *((unsigned int *)t71);
    t59 = (t58 >> 16);
    *((unsigned int *)t52) = t59;
    t60 = *((unsigned int *)t77);
    t61 = (t60 >> 16);
    *((unsigned int *)t70) = t61;
    t62 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t62 & 65535U);
    t63 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t63 & 65535U);
    goto LAB148;

LAB149:    xsi_vlog_unsigned_bit_combine(t10, 16, t51, 16, t52, 16);
    goto LAB153;

LAB151:    memcpy(t10, t51, 8);
    goto LAB153;

}


extern void work_m_00000000003242446445_0315600269_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003242446445_0315600269", "isim/microSystem_tb_isim_beh.exe.sim/work/m_00000000003242446445_0315600269.didat");
	xsi_register_executes(pe);
}
