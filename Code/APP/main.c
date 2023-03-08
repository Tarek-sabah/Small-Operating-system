/*
 * main.c
 *
 *  Created on: Feb 17, 2023
 *      Author: aya_enan
 */
#include <util/delay.h>
#include "main.h"
#include "Mcu_HW.h"

extern const EXTI_Config EXTI_Config_Array[EXTI_SIZE];

int main()
{

	M_TIMER1_void_Timer_Init();
	M_EXTI_en_enableInt(EXTI_Config_Array);
	M_TIMER1_void_Timer_setDelayTimeMilliSec(500);
	M_TIMER1_void_OVF_setCallBack(APP_LED_RED_TASK,APP_LED_BLUE_TASK,APP_LED_GREEN_TASK);

	M_TIMER1_void_Timer_start();
	M_TIMER1_void_EnableInt();
	M_GID_void_Enable();
	while(1)
	{
	}
	return 0;
}



/*===========================================================================================================
                                               < Interrupts functions >
===========================================================================================================*/
void APP_LED_RED_TASK (void)
{
	H_LED_void_toggle(LED_RED);
//	H_LED_void_turnOn(LED_RED);
}

void APP_LED_BLUE_TASK (void)
{
	H_LED_void_toggle(LED_BLUE);
}



void APP_LED_GREEN_TASK (void)
{
	H_LED_void_toggle(LED_GREEN);
}


