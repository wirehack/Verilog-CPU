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
static const char *ng0 = "D:/ISEProject/P5/datapath/dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {2048, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {12U, 0U};
static int ng8[] = {31, 0};
static int ng9[] = {16, 0};
static unsigned int ng10[] = {1U, 0U};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {2U, 0U};
static int ng13[] = {8, 0};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {23, 0};
static unsigned int ng16[] = {8U, 0U};
static int ng17[] = {24, 0};



static void Initial_31_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2248);
    t16 = (t0 + 2248);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_35_1(char *t0)
{
    char t6[8];
    char t33[8];
    char t34[8];
    char t53[8];
    char t54[8];
    char t55[8];
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
    char *t31;
    char *t32;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    char *t56;
    int t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t28, 4);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB12;

LAB15:    xsi_set_current_line(40, ng0);
    t31 = (t0 + 1368U);
    t32 = *((char **)t31);
    t31 = (t0 + 2248);
    t35 = (t0 + 2248);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 2248);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_array_indices(t33, t34, t37, t40, 2, 1, t42, 11, 2);
    t41 = (t33 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (!(t43));
    t45 = (t34 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB17:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t31 = (t28 + 64U);
    t32 = *((char **)t31);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t33, t34, t22, t32, 2, 1, t36, 11, 2);
    t35 = (t0 + 2248);
    t37 = (t35 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    t40 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t15 = *((unsigned int *)t41);
    t44 = (!(t15));
    t42 = (t34 + 4);
    t16 = *((unsigned int *)t42);
    t47 = (!(t16));
    t48 = (t44 && t47);
    t45 = (t53 + 4);
    t17 = *((unsigned int *)t45);
    t51 = (!(t17));
    t52 = (t48 && t51);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t56);
    t57 = (!(t18));
    t58 = (t52 && t57);
    t59 = (t55 + 4);
    t19 = *((unsigned int *)t59);
    t60 = (!(t19));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB32;

LAB33:    goto LAB29;

LAB19:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t31 = (t28 + 64U);
    t32 = *((char **)t31);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t33, t34, t22, t32, 2, 1, t36, 11, 2);
    t35 = (t0 + 2248);
    t37 = (t35 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng8)));
    t40 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t15 = *((unsigned int *)t41);
    t44 = (!(t15));
    t42 = (t34 + 4);
    t16 = *((unsigned int *)t42);
    t47 = (!(t16));
    t48 = (t44 && t47);
    t45 = (t53 + 4);
    t17 = *((unsigned int *)t45);
    t51 = (!(t17));
    t52 = (t48 && t51);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t56);
    t57 = (!(t18));
    t58 = (t52 && t57);
    t59 = (t55 + 4);
    t19 = *((unsigned int *)t59);
    t60 = (!(t19));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB34;

LAB35:    goto LAB29;

LAB21:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t31 = (t28 + 64U);
    t32 = *((char **)t31);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t33, t34, t22, t32, 2, 1, t36, 11, 2);
    t35 = (t0 + 2248);
    t37 = (t35 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng11)));
    t40 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t15 = *((unsigned int *)t41);
    t44 = (!(t15));
    t42 = (t34 + 4);
    t16 = *((unsigned int *)t42);
    t47 = (!(t16));
    t48 = (t44 && t47);
    t45 = (t53 + 4);
    t17 = *((unsigned int *)t45);
    t51 = (!(t17));
    t52 = (t48 && t51);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t56);
    t57 = (!(t18));
    t58 = (t52 && t57);
    t59 = (t55 + 4);
    t19 = *((unsigned int *)t59);
    t60 = (!(t19));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB36;

LAB37:    goto LAB29;

LAB23:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t31 = (t28 + 64U);
    t32 = *((char **)t31);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t33, t34, t22, t32, 2, 1, t36, 11, 2);
    t35 = (t0 + 2248);
    t37 = (t35 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    t40 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t15 = *((unsigned int *)t41);
    t44 = (!(t15));
    t42 = (t34 + 4);
    t16 = *((unsigned int *)t42);
    t47 = (!(t16));
    t48 = (t44 && t47);
    t45 = (t53 + 4);
    t17 = *((unsigned int *)t45);
    t51 = (!(t17));
    t52 = (t48 && t51);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t56);
    t57 = (!(t18));
    t58 = (t52 && t57);
    t59 = (t55 + 4);
    t19 = *((unsigned int *)t59);
    t60 = (!(t19));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB38;

LAB39:    goto LAB29;

LAB25:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t31 = (t28 + 64U);
    t32 = *((char **)t31);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t33, t34, t22, t32, 2, 1, t36, 11, 2);
    t35 = (t0 + 2248);
    t37 = (t35 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng15)));
    t40 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t15 = *((unsigned int *)t41);
    t44 = (!(t15));
    t42 = (t34 + 4);
    t16 = *((unsigned int *)t42);
    t47 = (!(t16));
    t48 = (t44 && t47);
    t45 = (t53 + 4);
    t17 = *((unsigned int *)t45);
    t51 = (!(t17));
    t52 = (t48 && t51);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t56);
    t57 = (!(t18));
    t58 = (t52 && t57);
    t59 = (t55 + 4);
    t19 = *((unsigned int *)t59);
    t60 = (!(t19));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB40;

LAB41:    goto LAB29;

LAB27:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t31 = (t28 + 64U);
    t32 = *((char **)t31);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t33, t34, t22, t32, 2, 1, t36, 11, 2);
    t35 = (t0 + 2248);
    t37 = (t35 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng8)));
    t40 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t15 = *((unsigned int *)t41);
    t44 = (!(t15));
    t42 = (t34 + 4);
    t16 = *((unsigned int *)t42);
    t47 = (!(t16));
    t48 = (t44 && t47);
    t45 = (t53 + 4);
    t17 = *((unsigned int *)t45);
    t51 = (!(t17));
    t52 = (t48 && t51);
    t56 = (t54 + 4);
    t18 = *((unsigned int *)t56);
    t57 = (!(t18));
    t58 = (t52 && t57);
    t59 = (t55 + 4);
    t19 = *((unsigned int *)t59);
    t60 = (!(t19));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB42;

LAB43:    goto LAB29;

LAB30:    t49 = *((unsigned int *)t33);
    t50 = *((unsigned int *)t34);
    t51 = (t49 - t50);
    t52 = (t51 + 1);
    xsi_vlogvar_assign_value(t31, t32, 0, *((unsigned int *)t34), t52);
    goto LAB31;

LAB32:    t20 = *((unsigned int *)t55);
    t62 = (t20 + 0);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t54);
    t63 = (t23 + t24);
    t25 = *((unsigned int *)t53);
    t26 = *((unsigned int *)t54);
    t64 = (t25 - t26);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t7, t6, t62, t63, t65);
    goto LAB33;

LAB34:    t20 = *((unsigned int *)t55);
    t62 = (t20 + 0);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t54);
    t63 = (t23 + t24);
    t25 = *((unsigned int *)t53);
    t26 = *((unsigned int *)t54);
    t64 = (t25 - t26);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t7, t6, t62, t63, t65);
    goto LAB35;

LAB36:    t20 = *((unsigned int *)t55);
    t62 = (t20 + 0);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t54);
    t63 = (t23 + t24);
    t25 = *((unsigned int *)t53);
    t26 = *((unsigned int *)t54);
    t64 = (t25 - t26);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t7, t6, t62, t63, t65);
    goto LAB37;

LAB38:    t20 = *((unsigned int *)t55);
    t62 = (t20 + 0);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t54);
    t63 = (t23 + t24);
    t25 = *((unsigned int *)t53);
    t26 = *((unsigned int *)t54);
    t64 = (t25 - t26);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t7, t6, t62, t63, t65);
    goto LAB39;

LAB40:    t20 = *((unsigned int *)t55);
    t62 = (t20 + 0);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t54);
    t63 = (t23 + t24);
    t25 = *((unsigned int *)t53);
    t26 = *((unsigned int *)t54);
    t64 = (t25 - t26);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t7, t6, t62, t63, t65);
    goto LAB41;

LAB42:    t20 = *((unsigned int *)t55);
    t62 = (t20 + 0);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t54);
    t63 = (t23 + t24);
    t25 = *((unsigned int *)t53);
    t26 = *((unsigned int *)t54);
    t64 = (t25 - t26);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t7, t6, t62, t63, t65);
    goto LAB43;

}

static void Cont_50_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2248);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2248);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 11, 2);
    t12 = (t0 + 4240);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4160);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003036462674_3338738821_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_35_1,(void *)Cont_50_2};
	xsi_register_didat("work_m_00000000003036462674_3338738821", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003036462674_3338738821.didat");
	xsi_register_executes(pe);
}
