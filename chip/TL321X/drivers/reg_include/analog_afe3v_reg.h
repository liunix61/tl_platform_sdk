/********************************************************************************************************
 * @file    analog_afe3v_reg.h
 *
 * @brief   This is the header file for TL321X
 *
 * @author  Driver Group
 * @date    2024
 *
 * @par     Copyright (c) 2024, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *
 *          Licensed under the Apache License, Version 2.0 (the "License");
 *          you may not use this file except in compliance with the License.
 *          You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 *          Unless required by applicable law or agreed to in writing, software
 *          distributed under the License is distributed on an "AS IS" BASIS,
 *          WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *          See the License for the specific language governing permissions and
 *          limitations under the License.
 *
 *******************************************************************************************************/
#ifndef ANALOG_AFE3V_REG_H
#define ANALOG_AFE3V_REG_H
#include "soc.h"

#define areg_aon_0x05           0x05
enum{
    FLD_32K_RC_PD               = BIT(0),//power down 32KHz RC oscillator
    FLD_32K_XTAL_PD             = BIT(1),//power down 32k crystal
    FLD_24M_RC_PD               = BIT(2),//power down of 24MHz RC oscillator
    FLD_24M_XTAL_PD             = BIT(3),//power down of 24MHz XTL oscillator 
    FLD_PD_PL_ALL_3V            = BIT(4),//power down of power logic, 4.2V VBUS_LDO and DCDC
    FLD_PD_PL_DCDC_LDO_3V       = BIT(5),//power down of DCDC & LDO module
    FLD_PD_PL_VBAT_LDO_3V       = BIT(6),//power down of VBAT_LDO(4.2V)
    FLD_ANA_LDO_PD_3V           = BIT(7),//power down ana LDO
};

#define areg_aon_0x06           0x06
enum{
    FLD_PD_BBPLL_LDO            = BIT(0),//power down bbpll LDO
    FLD_PD_LC_COMP_3V           = BIT(1),//power down of low current comparator
    FLD_PD_TEMP_SENSOR_3V       = BIT(2),//power down of temp sensor
    FLD_PD_VBAT_SW              = BIT(3),//power down of bypass switch(VBAT LDO)
    //RSVD
    //RSVD
    FLD_PD_SPD_LDO              = BIT(6),//power down of spd ldo
    FLD_PD_DIG_RET_LDO          = BIT(7),//power down of retention ldo
};

#define areg_aon_0x08           0x08
enum{
    FLD_PD_VDD_RAM              = BIT(6),//power down of supply to ram
    FLD_PD_VDD_DCORE            = BIT(7),//power down the supply to dcore
};

#define areg_aon_0x09           0x09
#define areg_aon_0x0a           0x0a
#define areg_aon_0x0b           0x0b
enum{
    FLD_PD_NVT_0P94             = BIT(0),
    FLD_PD_NVT_1P8              = BIT(1),
    FLD_MSCN_PULLUP_RES_ENB     = BIT(6),
};

#define areg_aon_0x0c           0x0c
#define areg_aon_0x0f           0x0f

#define areg_aon_0x4e           0x4e
enum{
    FLD_XO_ISEL_PMU             = BIT_RNG(2,5),//xo current sel
    FLD_CLK32K_SEL              = BIT(7),//0: sel 32k RC 1:sel 32K Xtal
};

#define areg_aon_0x4f           0x4f
enum{
    FLD_RC_32K_CAP_SEL          = BIT(6),//0:sel cap from pm_top,1: sel cap from calibration module
    FLD_RC_24M_CAP_SEL          = BIT(7),//0:sel cap from pm_top,1: sel cap from calibration module
};

#define areg_aon_0x51           0x51
#define areg_aon_0x52           0x52

#define areg_aon_0x64           0x64
typedef enum {
    FLD_WAKEUP_STATUS_PAD           = BIT(0),
    FLD_WAKEUP_STATUS_CORE          = BIT(1),
    FLD_WAKEUP_STATUS_TIMER         = BIT(2),
    FLD_WAKEUP_STATUS_COMPARATOR    = BIT(3),
    FLD_WAKEUP_STATUS_ALL           = 0x0f,
}pm_wakeup_status_e;

#define areg_aon_0x69           0x69

#define areg_aon_0x79           0x79

#define areg_aon_0x7d           0x7d
typedef enum{
    FLD_PD_ZB_EN                = BIT(0),//power down baseband
    FLD_PD_USB_EN               = BIT(1),//power down usb
    FLD_PD_AUDIO_EN             = BIT(2),//power down audio
    //RSVD
    FLD_PG_CLK_EN               = BIT(7),//enable change power sequence clk
}pm_pd_module_e;


#endif
