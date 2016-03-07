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
static const char *ng0 = "D:/ISEProject/P8/datapath/multDiv.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {6, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {42, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {45, 0};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_46_1(char *t0)
{
    char t17[8];
    char t43[8];
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
    int t13;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB30:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB23;

LAB17:    xsi_set_current_line(63, ng0);

LAB25:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB23;

LAB19:    xsi_set_current_line(64, ng0);

LAB26:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB23;

LAB21:    xsi_set_current_line(65, ng0);

LAB27:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB23;

LAB28:    xsi_set_current_line(69, ng0);

LAB31:    xsi_set_current_line(70, ng0);
    t12 = (t0 + 4168);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
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
        goto LAB35;

LAB32:    if (t29 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t17) = 1;

LAB35:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t5, 8, t11, 32);
    t12 = (t0 + 4168);
    xsi_vlogvar_assign_value(t12, t17, 0, 0, 8);

LAB38:    goto LAB30;

LAB34:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(71, ng0);

LAB39:    xsi_set_current_line(72, ng0);
    t39 = (t0 + 3688);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);

LAB40:    t42 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t41, 2, t42, 2);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t13 == 1)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB38;

LAB41:    xsi_set_current_line(73, ng0);

LAB50:    xsi_set_current_line(73, ng0);
    t44 = (t0 + 2328U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 8);
    t47 = (t45 + 12);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 4294967295U);
    t54 = (t0 + 3368);
    xsi_vlogvar_assign_value(t54, t43, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 4294967295U);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 32);
    goto LAB49;

LAB43:    xsi_set_current_line(74, ng0);

LAB51:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t11 = (t5 + 8);
    t12 = (t5 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 4294967295U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 4294967295U);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 32);
    goto LAB49;

LAB45:    xsi_set_current_line(75, ng0);

LAB52:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 2648U);
    t5 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t11 = (t5 + 8);
    t12 = (t5 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 4294967295U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 4294967295U);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 32);
    goto LAB49;

LAB47:    xsi_set_current_line(76, ng0);

LAB53:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t11 = (t5 + 8);
    t12 = (t5 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 4294967295U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2808U);
    t4 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 4294967295U);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 32);
    goto LAB49;

LAB54:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 1688U);
    t11 = *((char **)t5);

LAB57:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 1, t5, 1);
    if (t13 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 1, t2, 1);
    if (t13 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB56;

LAB58:    xsi_set_current_line(85, ng0);
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB62;

LAB60:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB62;

}


extern void work_m_00000000001712440342_3061580709_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000001712440342_3061580709", "isim/microSystem_tb_isim_beh.exe.sim/work/m_00000000001712440342_3061580709.didat");
	xsi_register_executes(pe);
}
