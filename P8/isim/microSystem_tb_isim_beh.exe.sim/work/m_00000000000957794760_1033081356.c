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
static const char *ng0 = "D:/ISEProject/P8/datapath/BE.v";
static unsigned int ng1[] = {15U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Always_28_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t18[8];
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
    char *t16;
    char *t17;
    char *t19;
    char *t20;
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
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    int t52;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB31:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB9:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t5, t12, 2, t16, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t19 = (t15 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB15;

LAB12:    if (t30 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t18) = 1;

LAB15:    memset(t14, 0, 8);
    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t34) != 0)
        goto LAB18;

LAB19:    t41 = (t14 + 4);
    t42 = *((unsigned int *)t14);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB20;

LAB21:    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t41) > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t14) > 0)
        goto LAB26;

LAB27:    memcpy(t13, t50, 8);

LAB28:    t51 = (t0 + 1928);
    xsi_vlogvar_assign_value(t51, t13, 0, 0, 4);
    goto LAB11;

LAB14:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    t40 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB19;

LAB20:    t45 = ((char*)((ng3)));
    goto LAB21;

LAB22:    t50 = ((char*)((ng4)));
    goto LAB23;

LAB24:    xsi_vlog_unsigned_bit_combine(t13, 4, t45, 4, t50, 4);
    goto LAB28;

LAB26:    memcpy(t13, t45, 8);
    goto LAB28;

LAB29:    xsi_set_current_line(35, ng0);

LAB32:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 1048U);
    t16 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t16, 2, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t52 = (!(t6));
    if (t52 == 1)
        goto LAB33;

LAB34:    goto LAB31;

LAB33:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB34;

}


extern void work_m_00000000000957794760_1033081356_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000000957794760_1033081356", "isim/microSystem_tb_isim_beh.exe.sim/work/m_00000000000957794760_1033081356.didat");
	xsi_register_executes(pe);
}
