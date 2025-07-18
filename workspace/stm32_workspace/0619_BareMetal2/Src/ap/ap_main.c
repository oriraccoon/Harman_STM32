/*
 * ap_main.c
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#include "ap_main.h"


int ap_main()
{
	uint8_t data = 1;
	uint32_t led_state = 0;
	uint32_t btn = 1;
    while(1)
    {
        btn = BTN_GetState();

        if (btn == ACT_PUSHED) led_state ^= 1;

		if (led_state) {
			data = (data >> 1) | (data << 7);
		}
		else data = (data << 1) | (data >> 7);

		LEDBAR_Write(0xaa);
		delay(100);
		delay(100);
    }
    return 0;
}

void ap_init()
{
    LEDBAR_Init();
    SystemClock_Init();
    BTN_Init();
}
