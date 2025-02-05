/********************************************************************************************************
 * @file    app_config.h
 *
 * @brief   This is the header file for Telink RISC-V MCU
 *
 * @author  Driver Group
 * @date    2019
 *
 * @par     Copyright (c) 2019, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
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
#pragma once
/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif
#include "driver.h"
#include "common.h"


#define  GPIO_TOGGLE                1

#define  RF_BLE_1M                  1
#define  RF_BLE_2M                  2
#define  RF_BLE_1M_NO_PN            3
#define  RF_ZIGBEE_250K             4 //TODO:TL751X is temporarily unavailable, available versions will be updated in the future
#define  RF_BLE_2M_NO_PN            5
#define  RF_LR_S2_500K              6
#define  RF_LR_S8_125K              7
#if !defined(MCU_CORE_TL751X)
#define  RF_PRIVATE_250K            8
#define  RF_PRIVATE_500K            9
#define  RF_ANT                     12//TODO:TL721X  Currently only validated in FPGA, not in chip; available after subsequent validation
#define  RF_HYBEE_1M                13
#define  RF_HYBEE_2M                14
#define  RF_HYBEE_500K              15
#endif
#define  RF_PRIVATE_1M              10 //TODO:TL751X is temporarily unavailable, available versions will be updated in the future
#define  RF_PRIVATE_2M              11 //TODO:TL751X is temporarily unavailable, available versions will be updated in the future
#define  RF_BLE_STX2RX              16
#define RF_BLE_SDK_TEST             19


#if defined(MCU_CORE_B92)
#define  RF_USER_DEFINE_PKT         17
#endif
#if defined(MCU_CORE_B92)||defined(MCU_CORE_TL721X)
#define  RF_BLE_1M_HYPER_LENGTH     18//TODO:TL721X  Currently only validated in FPGA, not in chip; available after subsequent validation
#endif

#if defined(MCU_CORE_TL721X)||defined(MCU_CORE_TL321X)
#define  RF_PRI_GENERIC_1M           22
#define  RF_PRI_GENERIC_2M           23
#define  RF_PRI_GENERIC_250K         24
#define  RF_PRI_GENERIC_500K         25
//TODO:All of the following modes are temporarily unavailable.
#define  RF_HYBEE_1M_OLD             26
#define  RF_HYBEE_2M_OLD             27
#define  RF_HYBEE_500K_NEW           28
#define  RF_HYBEE_1M_NEW             29
#define  RF_HYBEE_2M_NEW             30
#define  RF_HYBEE_500K_2BYTE_SFD     31
#define  RF_HYBEE_1M_2BYTE_SFD       32
#define  RF_HYBEE_2M_2BYTE_SFD       33
#define  RF_HYBEE_2M_2BYTE_SFD_NEW   34
#define  RF_HR_2M                    35
#define  RF_LOWRATE_20K              36
#define  RF_LOWRATE_25K              37
#define  RF_LOWRATE_100K             38
#define  RF_ZIGBEE_DUL_CHN_TEST      39
#define  RF_PRI_1M_PTX_PRX_TEST      40
#define  RF_LR_S2_500K_NEW           20
#define  RF_LR_S8_125K_NEW           21
#endif
#define  RF_FAST_SETTLE_TEST         41

#define RF_MODE             RF_BLE_1M

#if defined(MCU_CORE_TL721X)
#define rf_stimer_get_tick()  rf_bb_timer_get_tick()
#define RF_SYSTEM_TIMER_TICK_1US   BB_TIMER_TICK_1US
#define RF_SYSTEM_TIMER_TICK_1MS   BB_TIMER_TICK_1MS
#else
#define rf_stimer_get_tick()  stimer_get_tick()
#define RF_SYSTEM_TIMER_TICK_1US   SYSTEM_TIMER_TICK_1US
#define RF_SYSTEM_TIMER_TICK_1MS   SYSTEM_TIMER_TICK_1MS
#endif


#if defined(MCU_CORE_B91)
#define RF_POWER            RF_POWER_P4p35dBm
#elif defined(MCU_CORE_B92)
#define RF_POWER            RF_POWER_P5p21dBm
#elif defined(MCU_CORE_TL751X)
#define RF_POWER            RF_POWER_P4p92dBm
#elif defined(MCU_CORE_TL721X)
#define RF_POWER            RF_POWER_P4p60dBm
#elif defined(MCU_CORE_TL321X)
#define RF_POWER            RF_POWER_P4p47dBm
#endif
















/* Disable C linkage for C++ Compilers: */
#if defined(__cplusplus)
}
#endif
