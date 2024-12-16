/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"
#include "drivers/sensor.h"

BUSDEV_REGISTER_SPI_TAG(busdev_icm42688,  DEVHW_ICM42605,  IMU1_SPI_BUS,   IMU1_CS_PIN,   NONE,   0,  DEVFLAGS_NONE,  IMU1_ALIGN);
BUSDEV_REGISTER_SPI_TAG(busdev_icm42688_2, DEVHW_ICM42605, IMU2_SPI_BUS,   IMU2_CS_PIN,   NONE,   1,  DEVFLAGS_NONE,  IMU2_ALIGN);

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_OUTPUT_AUTO, 0, 0),    
    DEF_TIM(TIM1, CH2, PE11, TIM_USE_OUTPUT_AUTO, 0, 1),    
    DEF_TIM(TIM1, CH3, PE13, TIM_USE_OUTPUT_AUTO, 0, 2),   
    DEF_TIM(TIM1, CH4, PE14, TIM_USE_OUTPUT_AUTO, 0, 3),   
    
    DEF_TIM(TIM4, CH3, PD14, TIM_USE_OUTPUT_AUTO, 0, 4),    
    DEF_TIM(TIM4, CH4, PD15, TIM_USE_OUTPUT_AUTO, 0, 0),     
    DEF_TIM(TIM5, CH1, PA0,  TIM_USE_OUTPUT_AUTO, 0, 5),    
    DEF_TIM(TIM5, CH2, PA1,  TIM_USE_OUTPUT_AUTO, 0, 6),    
    
    DEF_TIM(TIM15,CH1, PE5,  TIM_USE_OUTPUT_AUTO, 0, 7),    
    DEF_TIM(TIM15,CH2, PE6,  TIM_USE_OUTPUT_AUTO, 0, 0),     
    DEF_TIM(TIM3, CH2, PB5,  TIM_USE_OUTPUT_AUTO, 0, 0),    
    DEF_TIM(TIM3, CH3, PB0,  TIM_USE_OUTPUT_AUTO, 0, 0),    

    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_OUTPUT_AUTO, 0, 0),   

    DEF_TIM(TIM2, CH1, PA15, TIM_USE_LED,         0, 0),   
    DEF_TIM(TIM17, CH1, PB9, TIM_USE_BEEPER,      0, 0),
  
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
