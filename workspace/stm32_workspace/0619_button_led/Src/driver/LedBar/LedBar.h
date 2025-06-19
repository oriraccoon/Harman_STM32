/*
 * LedBar.h
 *
 *  Created on: Jun 18, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_LEDBAR_LEDBAR_H_
#define DRIVER_LEDBAR_LEDBAR_H_
#include <stdint.h>
#include"GPIO.h"

void LedBar_Write(uint32_t data);
void LedBar_Init();

#endif /* DRIVER_LEDBAR_LEDBAR_H_ */
