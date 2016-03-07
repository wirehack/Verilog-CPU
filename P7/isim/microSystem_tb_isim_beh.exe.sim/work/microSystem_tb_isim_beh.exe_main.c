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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000646482417_3383896982_init();
    work_m_00000000004293228195_1066522676_init();
    work_m_00000000003404859059_3153593155_init();
    work_m_00000000002751572222_0345418465_init();
    work_m_00000000001008304689_2885957937_init();
    work_m_00000000003093029332_2364370701_init();
    work_m_00000000000589147634_3146453351_init();
    work_m_00000000000163655504_4241813833_init();
    work_m_00000000003383468047_1213024400_init();
    work_m_00000000001378799634_0586240761_init();
    work_m_00000000000700083179_1579609468_init();
    work_m_00000000003946472202_0103510313_init();
    work_m_00000000000916090785_0350986170_init();
    work_m_00000000002876971765_3439277013_init();
    work_m_00000000000356355795_3163932506_init();
    work_m_00000000003085483827_0055009363_init();
    work_m_00000000000083899022_3061580709_init();
    work_m_00000000000879808909_0886308060_init();
    work_m_00000000004065403422_4024466370_init();
    work_m_00000000000957794760_1033081356_init();
    work_m_00000000003036462674_3338738821_init();
    work_m_00000000002225148101_3975733304_init();
    work_m_00000000003589975092_2520395732_init();
    work_m_00000000003242446445_0315600269_init();
    work_m_00000000002884352370_3877310806_init();
    work_m_00000000002090152717_0249777441_init();
    work_m_00000000000856528213_1574930566_init();
    work_m_00000000000874262941_0483774815_init();
    work_m_00000000002047498008_0047579378_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0047579378");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}