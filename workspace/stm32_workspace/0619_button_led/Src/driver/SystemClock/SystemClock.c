/*
 * SystemClock.c
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */
# include "SystemClock.h"

void SystemClock_Init(){
	RCC -> AHB1ENR |= (1U << 0);
	RCC -> AHB1ENR |= (1U << 1);
	RCC -> AHB1ENR |= (1U << 2);
}
void SystemClock_Free(){
	RCC -> AHB1ENR = 0;
}

void delay(int loop) {
	for (int j = 0; j <loop; j++){
		for (int i = 0; i < 1000; i++) {}
	}
}
