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
static const char *ng0 = "C:/Users/asus/Desktop/exp06/exp3 code/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};



static void Always_17_0(char *t0)
{
    char t8[8];
    char t29[8];
    char t32[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 15904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 16224);
    *((int *)t2) = 1;
    t3 = (t0 + 15936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 14984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 14424U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 2648);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2784);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2920);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 3192);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3328);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 3056);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 3464);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3600);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 3736);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 3872);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB28:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    t2 = (t0 + 14264U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 14984);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB9:    xsi_set_current_line(23, ng0);

LAB29:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    t2 = (t0 + 14264U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 14984);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB11:    xsi_set_current_line(26, ng0);

LAB30:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 14584U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB34;

LAB31:    if (t19 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t8) = 1;

LAB34:    t23 = (t8 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 14104U);
    t4 = *((char **)t2);
    t2 = (t0 + 14264U);
    t5 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB39;

LAB38:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB40;

LAB41:    t22 = (t0 + 14984);
    xsi_vlogvar_assign_value(t22, t32, 0, 0, 32);

LAB37:    goto LAB27;

LAB13:    xsi_set_current_line(32, ng0);

LAB43:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    t2 = (t0 + 14264U);
    t7 = *((char **)t2);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t8) = t12;
    t2 = (t5 + 4);
    t9 = (t7 + 4);
    t22 = (t8 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB44;

LAB45:
LAB46:    t31 = (t0 + 14984);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(35, ng0);

LAB47:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    t2 = (t0 + 14264U);
    t7 = *((char **)t2);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t8) = t12;
    t2 = (t5 + 4);
    t9 = (t7 + 4);
    t22 = (t8 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB48;

LAB49:
LAB50:    t31 = (t0 + 14984);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(38, ng0);

LAB51:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 14264U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t2, 32);
    t7 = (t0 + 14984);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(41, ng0);

LAB52:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    t2 = (t0 + 14264U);
    t7 = *((char **)t2);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t8) = t12;
    t2 = (t5 + 4);
    t9 = (t7 + 4);
    t22 = (t8 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB53;

LAB54:
LAB55:    t23 = (t0 + 14984);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(44, ng0);

LAB56:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    t2 = (t0 + 14264U);
    t7 = *((char **)t2);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t29) = t12;
    t2 = (t5 + 4);
    t9 = (t7 + 4);
    t22 = (t29 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB57;

LAB58:
LAB59:    memset(t8, 0, 8);
    t31 = (t8 + 4);
    t33 = (t29 + 4);
    t40 = *((unsigned int *)t29);
    t41 = (~(t40));
    *((unsigned int *)t8) = t41;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB61;

LAB60:    t46 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t46 & 4294967295U);
    t47 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t47 & 4294967295U);
    t48 = (t0 + 14984);
    xsi_vlogvar_assign_value(t48, t8, 0, 0, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(47, ng0);

LAB62:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 14264U);
    t5 = *((char **)t2);
    t2 = (t0 + 14104U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 14984);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB25:    xsi_set_current_line(50, ng0);

LAB63:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 14584U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB67;

LAB64:    if (t19 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t8) = 1;

LAB67:    t23 = (t8 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 14264U);
    t4 = *((char **)t2);
    t2 = (t0 + 14104U);
    t5 = *((char **)t2);
    memset(t29, 0, 8);
    xsi_vlog_signed_rshift(t29, 32, t4, 32, t5, 32);
    t2 = (t0 + 14984);
    xsi_vlogvar_assign_value(t2, t29, 0, 0, 32);

LAB70:    goto LAB27;

LAB33:    t22 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(28, ng0);
    t30 = (t0 + 14104U);
    t31 = *((char **)t30);
    t30 = (t0 + 14264U);
    t33 = *((char **)t30);
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t31, 32, t33, 32);
    t30 = (t0 + 14984);
    xsi_vlogvar_assign_value(t30, t34, 0, 0, 32);
    goto LAB37;

LAB39:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t32) = 1;
    goto LAB41;

LAB44:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t8) = (t18 | t19);
    t23 = (t5 + 4);
    t30 = (t7 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t30);
    t35 = (~(t28));
    t36 = (t21 & t25);
    t37 = (t27 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t40 & t38);
    t41 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t41 & t39);
    t42 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t42 & t38);
    t43 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t43 & t39);
    goto LAB46;

LAB48:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t8) = (t18 | t19);
    t23 = (t5 + 4);
    t30 = (t7 + 4);
    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t24 = *((unsigned int *)t5);
    t36 = (t24 & t21);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t37 = (t27 & t26);
    t28 = (~(t36));
    t35 = (~(t37));
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & t28);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & t35);
    goto LAB50;

LAB53:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t8) = (t18 | t19);
    goto LAB55;

LAB57:    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t29) = (t18 | t19);
    t23 = (t5 + 4);
    t30 = (t7 + 4);
    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t24 = *((unsigned int *)t5);
    t36 = (t24 & t21);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t37 = (t27 & t26);
    t28 = (~(t36));
    t35 = (~(t37));
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & t28);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & t35);
    goto LAB59;

LAB61:    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t8) = (t42 | t43);
    t44 = *((unsigned int *)t31);
    t45 = *((unsigned int *)t33);
    *((unsigned int *)t31) = (t44 | t45);
    goto LAB60;

LAB66:    t22 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(52, ng0);
    t30 = (t0 + 14264U);
    t31 = *((char **)t30);
    t30 = (t0 + 14104U);
    t33 = *((char **)t30);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_rshift(t32, 32, t31, 32, t33, 32);
    t30 = (t0 + 14984);
    xsi_vlogvar_assign_value(t30, t32, 0, 0, 32);
    goto LAB70;

}


extern void work_m_00000000004211593114_2725559894_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000004211593114_2725559894", "isim/mips_isim_beh.exe.sim/work/m_00000000004211593114_2725559894.didat");
	xsi_register_executes(pe);
}
