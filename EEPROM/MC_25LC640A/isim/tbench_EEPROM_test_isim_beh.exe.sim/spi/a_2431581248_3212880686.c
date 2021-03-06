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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/GitHub/VHDL_Modules/SPI/Library/SPI/SCLK_CE_GEN.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3140849233_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void spi_a_2431581248_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(40, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6464);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void spi_a_2431581248_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6480);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void spi_a_2431581248_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6736);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6496);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void spi_a_2431581248_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 6800);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 6864);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6928);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 6992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 7056);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 6800);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6864);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6928);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 6992);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7056);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void spi_a_2431581248_3212880686_p_4(char *t0)
{
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7120);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7184);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7248);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 7312);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7376);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6528);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 7184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 7248);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t4 = (t0 + 7312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 7376);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB6;

LAB8:
LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 <= (unsigned char)3);
    if (t9 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB2;

LAB5:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 7120);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 7248);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7376);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB9:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 7120);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB12:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t1 = (t0 + 10632U);
    t10 = (8 - 1);
    t11 = ieee_p_1242562249_sub_3140849233_1035706684(IEEE_P_1242562249, t4, t1, t10);
    if (t11 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10632U);
    t10 = (8 - 1);
    t9 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, t10);
    if (t9 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10632U);
    t10 = (8 - 1);
    t9 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, t10);
    if (t9 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10632U);
    t10 = (8 - 1);
    t9 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t2, t1, t10);
    if (t9 == 1)
        goto LAB38;

LAB39:    t3 = (unsigned char)0;

LAB40:    if (t3 != 0)
        goto LAB36;

LAB37:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10632U);
    t3 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t2, t1, 8);
    if (t3 != 0)
        goto LAB43;

LAB44:
LAB19:    goto LAB13;

LAB15:    xsi_set_current_line(88, ng0);
    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t12 = *((unsigned char *)t6);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t5 = (t0 + 7184);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t13;
    xsi_driver_first_trans_fast(t5);
    goto LAB16;

LAB18:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 3272U);
    t6 = *((char **)t4);
    t4 = (t0 + 10632U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t16, t6, t4, 1);
    t8 = (t16 + 12U);
    t17 = *((unsigned int *)t8);
    t18 = (1U * t17);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB24;

LAB25:    t14 = (t0 + 7312);
    t15 = (t14 + 56U);
    t20 = *((char **)t15);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t14);
    goto LAB19;

LAB21:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t11 = *((unsigned char *)t5);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, (unsigned char)2);
    t13 = (t11 == t12);
    t3 = t13;
    goto LAB23;

LAB24:    xsi_size_not_matching(4U, t18, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    t19 = *((unsigned char *)t6);
    t23 = (t19 == (unsigned char)3);
    if (t23 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10632U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t16, t2, t1, 1);
    t5 = (t16 + 12U);
    t17 = *((unsigned int *)t5);
    t18 = (1U * t17);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB34;

LAB35:    t6 = (t0 + 7312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB32:    goto LAB19;

LAB28:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t11 = *((unsigned char *)t5);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, (unsigned char)2);
    t13 = (t11 == t12);
    t3 = t13;
    goto LAB30;

LAB31:    xsi_set_current_line(95, ng0);
    t4 = xsi_get_transient_memory(4U);
    memset(t4, 0, 4U);
    t7 = t4;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 7312);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB32;

LAB34:    xsi_size_not_matching(4U, t18, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(100, ng0);
    t6 = (t0 + 7248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10632U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t16, t2, t1, 1);
    t5 = (t16 + 12U);
    t17 = *((unsigned int *)t5);
    t18 = (1U * t17);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB41;

LAB42:    t6 = (t0 + 7312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB19;

LAB38:    t4 = (t0 + 3272U);
    t5 = *((char **)t4);
    t4 = (t0 + 10632U);
    t11 = ieee_p_1242562249_sub_3140849233_1035706684(IEEE_P_1242562249, t5, t4, 8);
    t3 = t11;
    goto LAB40;

LAB41:    xsi_size_not_matching(4U, t18, 0);
    goto LAB42;

LAB43:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 7120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

}


extern void spi_a_2431581248_3212880686_init()
{
	static char *pe[] = {(void *)spi_a_2431581248_3212880686_p_0,(void *)spi_a_2431581248_3212880686_p_1,(void *)spi_a_2431581248_3212880686_p_2,(void *)spi_a_2431581248_3212880686_p_3,(void *)spi_a_2431581248_3212880686_p_4};
	xsi_register_didat("spi_a_2431581248_3212880686", "isim/tbench_EEPROM_test_isim_beh.exe.sim/spi/a_2431581248_3212880686.didat");
	xsi_register_executes(pe);
}
