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
    work_m_00000000002114693725_3114136509_init();
    work_m_00000000000848620067_2386756495_init();
    work_m_00000000000022879915_3298147383_init();
    work_m_00000000003724865259_1635510040_init();
    work_m_00000000003138927117_3480323152_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003138927117_3480323152");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
