/*
 * SystemClock.c
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#include "SystemClock.h"

void SystemClock_Init()
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // RCC_AHB1ENR
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN; // RCC_AHB1ENR
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN; // RCC_AHB1ENR
}

void delay(uint32_t num)
{
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 1000; j++) {

		}
	}

}
