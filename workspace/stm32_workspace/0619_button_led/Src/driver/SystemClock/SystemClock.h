/*
 * SystemClock.h
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#ifndef SYSTEMCLOCK_SYSTEMCLOCK_H_
#define SYSTEMCLOCK_SYSTEMCLOCK_H_
#include <stdint.h>
#include "stm32f411xe.h"
#include "GPIO.h"

void SystemClock_Init();
void SystemClock_Free();
void delay(int loop);

#endif /* SYSTEMCLOCK_SYSTEMCLOCK_H_ */
