/*
 * SystemClock.h
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_SYSTEMCLOCK_SYSTEMCLOCK_H_
#define DRIVER_SYSTEMCLOCK_SYSTEMCLOCK_H_

#include "stm32f411xe.h"
#include <stdint.h>

void SystemClock_Init();
void delay(uint32_t num);


#endif /* DRIVER_SYSTEMCLOCK_SYSTEMCLOCK_H_ */
