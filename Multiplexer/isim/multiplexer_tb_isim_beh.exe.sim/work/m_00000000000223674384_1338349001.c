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
static const char *ng0 = "D:/ISEProject/Multiplexer/multiplexer_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_51_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4024);
    t3 = (t0 + 3776);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 4272);
    t5 = (t0 + 3776);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 2568);
    memset(t7, 0, 8);
    *((unsigned int *)t7) = 2;
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    t8 = (t0 + 6272);
    *((int *)t8) = 1;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    if (*((int *)t11) > 0)
        goto LAB7;

LAB8:    t13 = (t0 + 3776);
    xsi_clean_active_fork_process_list(t13);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB7:    t12 = (t0 + 6272);
    *((int *)t12) = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 4520);
    t4 = (t0 + 3776);
    xsi_add_process_toexecute(0, t3, t4);
    t5 = (t0 + 4768);
    t6 = (t0 + 3776);
    xsi_add_process_toexecute(0, t5, t6);
    t8 = (t0 + 2728);
    memset(t7, 0, 8);
    *((unsigned int *)t7) = 2;
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    t9 = (t0 + 6288);
    *((int *)t9) = 1;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    t10 = (t0 + 2728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    if (*((int *)t12) > 0)
        goto LAB11;

LAB12:    t14 = (t0 + 3776);
    xsi_clean_active_fork_process_list(t14);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB11:    t13 = (t0 + 6288);
    *((int *)t13) = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 5016);
    t4 = (t0 + 3776);
    xsi_add_process_toexecute(0, t3, t4);
    t5 = (t0 + 5264);
    t6 = (t0 + 3776);
    xsi_add_process_toexecute(0, t5, t6);
    t8 = (t0 + 2888);
    memset(t7, 0, 8);
    *((unsigned int *)t7) = 2;
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    t9 = (t0 + 6304);
    *((int *)t9) = 1;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    t10 = (t0 + 2888);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    if (*((int *)t12) > 0)
        goto LAB15;

LAB16:    t14 = (t0 + 3776);
    xsi_clean_active_fork_process_list(t14);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB15:    t13 = (t0 + 6304);
    *((int *)t13) = 1;
    goto LAB1;

LAB17:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 5512);
    t4 = (t0 + 3776);
    xsi_add_process_toexecute(0, t3, t4);
    t5 = (t0 + 5760);
    t6 = (t0 + 3776);
    xsi_add_process_toexecute(0, t5, t6);
    t8 = (t0 + 3048);
    memset(t7, 0, 8);
    *((unsigned int *)t7) = 2;
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    t9 = (t0 + 6320);
    *((int *)t9) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    t10 = (t0 + 3048);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    if (*((int *)t12) > 0)
        goto LAB19;

LAB20:    t14 = (t0 + 3776);
    xsi_clean_active_fork_process_list(t14);
    goto LAB1;

LAB19:    t13 = (t0 + 6320);
    *((int *)t13) = 1;
    goto LAB1;

}

static void Forked_65_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4024);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_66_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4272);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_69_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4520);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_70_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4768);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_73_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5016);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_74_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5264);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_77_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5512);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_78_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5760);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000000223674384_1338349001_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Forked_65_1,(void *)Forked_66_2,(void *)Forked_69_3,(void *)Forked_70_4,(void *)Forked_73_5,(void *)Forked_74_6,(void *)Forked_77_7,(void *)Forked_78_8};
	xsi_register_didat("work_m_00000000000223674384_1338349001", "isim/multiplexer_tb_isim_beh.exe.sim/work/m_00000000000223674384_1338349001.didat");
	xsi_register_executes(pe);
}
