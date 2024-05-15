/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>
#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {

       DEF_TIM(TIM8, CH3,  PC8, TIM_USE_OUTPUT_AUTO, 0, 0 ), // Motor 1
       DEF_TIM(TIM8, CH4,  PC9, TIM_USE_OUTPUT_AUTO, 0, 0 ), // Motor 2
       DEF_TIM(TIM1, CH1,  PA8, TIM_USE_OUTPUT_AUTO, 0, 1 ), // Motor 3
       DEF_TIM(TIM1, CH2,  PA9, TIM_USE_OUTPUT_AUTO, 0, 1 ), // Motor 4

 };

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
