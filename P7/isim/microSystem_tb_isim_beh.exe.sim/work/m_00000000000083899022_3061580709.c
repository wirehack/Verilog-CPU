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
static const char *ng0 = "D:/ISEProject/P7/datapath/multDiv.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {31, 0};
static int ng8[] = {63, 0};
static int ng9[] = {32, 0};
static int ng10[] = {9, 0};
static unsigned int ng11[] = {3U, 0U};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_39_1(char *t0)
{
    char t14[16];
    char t15[16];
    char t16[16];
    char t17[8];
    char t18[8];
    char t19[8];
    char t20[8];
    char t21[8];
    char t22[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
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

LAB7:    xsi_set_current_line(48, ng0);
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

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB38:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(51, ng0);
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

LAB20:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(52, ng0);

LAB24:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogtype_zero_extend(t14, 64, t5, 32);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    xsi_vlogtype_zero_extend(t15, 64, t11, 32);
    xsi_vlog_unsigned_multiply(t16, 64, t14, 64, t15, 64);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 64);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(53, ng0);

LAB25:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t14, 64, t5, 32);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    xsi_vlogtype_sign_extend(t15, 64, t11, 32);
    xsi_vlog_signed_multiply(t16, 64, t14, 64, t15, 64);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 64);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(54, ng0);

LAB26:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_divide(t19, 32, t5, 32, t11, 32);
    t4 = (t0 + 3208);
    t12 = (t0 + 3208);
    t23 = (t12 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    t26 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t20 + 4);
    t6 = *((unsigned int *)t27);
    t28 = (!(t6));
    t29 = (t21 + 4);
    t7 = *((unsigned int *)t29);
    t30 = (!(t7));
    t31 = (t28 && t30);
    t32 = (t22 + 4);
    t8 = *((unsigned int *)t32);
    t33 = (!(t8));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_mod(t19, 32, t4, 32, t5, 32);
    t2 = (t0 + 3208);
    t11 = (t0 + 3208);
    t12 = (t11 + 72U);
    t23 = *((char **)t12);
    t24 = ((char*)((ng8)));
    t25 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t20 + 4);
    t6 = *((unsigned int *)t26);
    t13 = (!(t6));
    t27 = (t21 + 4);
    t7 = *((unsigned int *)t27);
    t28 = (!(t7));
    t30 = (t13 && t28);
    t29 = (t22 + 4);
    t8 = *((unsigned int *)t29);
    t31 = (!(t8));
    t33 = (t30 && t31);
    if (t33 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(55, ng0);

LAB31:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t19, 0, 8);
    xsi_vlog_signed_divide(t19, 32, t5, 32, t11, 32);
    t4 = (t0 + 3208);
    t12 = (t0 + 3208);
    t23 = (t12 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    t26 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t20 + 4);
    t6 = *((unsigned int *)t27);
    t28 = (!(t6));
    t29 = (t21 + 4);
    t7 = *((unsigned int *)t29);
    t30 = (!(t7));
    t31 = (t28 && t30);
    t32 = (t22 + 4);
    t8 = *((unsigned int *)t32);
    t33 = (!(t8));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t19, 0, 8);
    xsi_vlog_signed_mod(t19, 32, t4, 32, t5, 32);
    t2 = (t0 + 3208);
    t11 = (t0 + 3208);
    t12 = (t11 + 72U);
    t23 = *((char **)t12);
    t24 = ((char*)((ng8)));
    t25 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t20, t21, t22, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t20 + 4);
    t6 = *((unsigned int *)t26);
    t13 = (!(t6));
    t27 = (t21 + 4);
    t7 = *((unsigned int *)t27);
    t28 = (!(t7));
    t30 = (t13 && t28);
    t29 = (t22 + 4);
    t8 = *((unsigned int *)t29);
    t31 = (!(t8));
    t33 = (t30 && t31);
    if (t33 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB23;

LAB27:    t9 = *((unsigned int *)t22);
    t35 = (t9 + 0);
    t10 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t10 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t4, t19, t35, *((unsigned int *)t21), t38);
    goto LAB28;

LAB29:    t9 = *((unsigned int *)t22);
    t34 = (t9 + 0);
    t10 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t35 = (t10 - t36);
    t37 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t19, t34, *((unsigned int *)t21), t37);
    goto LAB30;

LAB32:    t9 = *((unsigned int *)t22);
    t35 = (t9 + 0);
    t10 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t10 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t4, t19, t35, *((unsigned int *)t21), t38);
    goto LAB33;

LAB34:    t9 = *((unsigned int *)t22);
    t34 = (t9 + 0);
    t10 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t35 = (t10 - t36);
    t37 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t19, t34, *((unsigned int *)t21), t37);
    goto LAB35;

LAB36:    xsi_set_current_line(59, ng0);

LAB39:    xsi_set_current_line(60, ng0);
    t12 = (t0 + 3368);
    t23 = (t12 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t24, 32, t25, 32);
    t26 = (t17 + 4);
    t36 = *((unsigned int *)t26);
    t39 = (~(t36));
    t40 = *((unsigned int *)t17);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t5, 32, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t17, 0, 0, 32);

LAB42:    goto LAB38;

LAB40:    xsi_set_current_line(61, ng0);

LAB43:    xsi_set_current_line(62, ng0);
    t27 = (t0 + 3208);
    t29 = (t27 + 56U);
    t32 = *((char **)t29);
    memset(t18, 0, 8);
    t43 = (t18 + 4);
    t44 = (t32 + 8);
    t45 = (t32 + 12);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t18) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t50 & 4294967295U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 4294967295U);
    t52 = (t0 + 2888);
    xsi_vlogvar_assign_value(t52, t18, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t17, 0, 8);
    t11 = (t17 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 4294967295U);
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & 4294967295U);
    t23 = (t0 + 3048);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB42;

LAB44:    xsi_set_current_line(70, ng0);
    t5 = (t0 + 1688U);
    t11 = *((char **)t5);

LAB47:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 1, t5, 1);
    if (t13 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 1, t2, 1);
    if (t13 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB46;

LAB48:    xsi_set_current_line(71, ng0);
    t12 = (t0 + 1368U);
    t23 = *((char **)t12);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    goto LAB52;

LAB50:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB52;

}


extern void work_m_00000000000083899022_3061580709_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000000083899022_3061580709", "isim/microSystem_tb_isim_beh.exe.sim/work/m_00000000000083899022_3061580709.didat");
	xsi_register_executes(pe);
}
