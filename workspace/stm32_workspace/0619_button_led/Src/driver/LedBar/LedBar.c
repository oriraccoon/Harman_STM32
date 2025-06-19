/*
 * LedBar.c
 *
 *  Created on: Jun 18, 2025
 *      Author: kccistc
 */


#include "LedBar.h"

typedef struct{
	GPIO_TypeDef *GPIOx;
	uint32_t pinNum;
} LedBar_TypeDef;

LedBar_TypeDef LedBar[8] = {
		{GPIOA, 5},
		{GPIOA, 6},
		{GPIOA, 1},
		{GPIOA, 0},
		{GPIOA, 4},
		{GPIOC, 1},
		{GPIOC, 0},
		{GPIOB, 0}
};
void LedBar_Init(){
	GPIO_init(GPIOA, 5, OUTPUT);
	GPIO_init(GPIOA, 6, OUTPUT);
	GPIO_init(GPIOA, 0, OUTPUT);
	GPIO_init(GPIOA, 1, OUTPUT);
	GPIO_init(GPIOA, 4, OUTPUT);
	GPIO_init(GPIOB, 0, OUTPUT);
	GPIO_init(GPIOC, 0, OUTPUT);
	GPIO_init(GPIOC, 1, OUTPUT);
}

void LedBar_Write(uint32_t data){
	for (int i = 0; i < 8; i++){
		if((data & (1 << i)) == 0){
			GPIO_WritePin(LedBar[i].GPIOx, LedBar[i].pinNum, PIN_RESET);
		}
		else{
			GPIO_WritePin(LedBar[i].GPIOx, LedBar[i].pinNum, PIN_SET);
		}
	}
}
