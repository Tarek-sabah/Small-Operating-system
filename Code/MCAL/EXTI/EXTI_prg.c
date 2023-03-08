/*
 * EXT_INT_prg.c
 *
 *  Created on: Feb 24, 2023
 *      Author: tarek
 */

#include "avr/interrupt.h"
#include"Mcu_HW.h"
#include "STD_TYPES.h"		//Library
#include "BIT_MATH.h"
#include "DIO_int.h"		//Lower Layer interface

#include <EXTI_int.h>
#include <EXTI_priv.h>
#include <EXTI_types.h>
#include <EXTI_cfg.h>
#include "LED_int.h"


static void (*EXTRI_CallBack) (void)= NULL;

extern u8 BLUE_State;

void M_EXTI_en_enableInt(const EXTI_Config * Config_Array)
{
	u8 EXTI_Counter;
	Error_Status EXTI_STATUS=NO_ERROR;
	ENABLE_EXTI1;
//	SET_BIT(GICR_REG,7);
	SET_BIT(MCUCR_REG,3);CLR_BIT(MCUCR_REG,2);
//	H_LED_void_toggle(LED_RED);

		switch(Config_Array[1].EXTI_ID)
		{
		case EXTI0:
			ENABLE_EXTI0;			//Change
			switch(Config_Array[EXTI_Counter].SC)
			{
			case LOW_LEVEL: CLR_BIT(MCUCR_REG,1);CLR_BIT(MCUCR_REG,0);break;
			case ANY_LOGIC: CLR_BIT(MCUCR_REG,1);SET_BIT(MCUCR_REG,0);break;
			case FALLING_EDGE: SET_BIT(MCUCR_REG,1);CLR_BIT(MCUCR_REG,0);break;
			case RISING_EDGE: SET_BIT(MCUCR_REG,1);SET_BIT(MCUCR_REG,0);break;
			default: EXTI_STATUS=OUT_OF_RANGE_VALUE;break;
			};break;

		case EXTI1:

			ENABLE_EXTI1;
			switch(Config_Array[1].SC)
			{
			case LOW_LEVEL: CLR_BIT(MCUCR_REG,3);CLR_BIT(MCUCR_REG,2);break;
			case ANY_LOGIC: CLR_BIT(MCUCR_REG,3);SET_BIT(MCUCR_REG,2);break;
			case FALLING_EDGE: SET_BIT(MCUCR_REG,3);CLR_BIT(MCUCR_REG,2);break;
			case RISING_EDGE: SET_BIT(MCUCR_REG,3);SET_BIT(MCUCR_REG,2);break;
			default: EXTI_STATUS=OUT_OF_RANGE_VALUE;break;
			};break;

		case EXTI2:
			ENABLE_EXTI2;
			switch(Config_Array[EXTI_Counter].SC)
			{
			case FALLING_EDGE: CLR_BIT(MCUCSR_REG,6);break;
			case RISING_EDGE: SET_BIT(MCUCSR_REG,6);break;
			default: EXTI_STATUS=OUT_OF_RANGE_VALUE;break;
			}break;
//		case NULL:EXT_INT_STATUS=NULL_POINTER;break;

		}

	//return EXT_INT_STATUS;

}



void M_EXTI_en_disableInt(EXTI_N EXTI_n)
{
	Error_Status EXTI_STATUS=NO_ERROR;
	switch(EXTI_n)
	{
	case EXTI0:DISABLE_EXTI0;break;
	case EXTI1:DISABLE_EXTI1;break;
	case EXTI2:DISABLE_EXTI2;break;
	default: EXTI_STATUS=OUT_OF_RANGE_VALUE;break;
	}

	//return EXT_INT_STATUS;
}

void M_EXTI_en_setCallBack(void (*ptr) (void))
{
	//Error_Status EXT_INT_STATUS=NO_ERROR;

	if(ptr != NULL)
	{
		EXTRI_CallBack = ptr;
	}

}

void __vector_2 (void) __attribute__((signal,used));

void __vector_2 (void)
{
	BLUE_State=1;
//	EXTRI_CallBack();
}


/*ISR(INT1_vect)
{
	EXTRI_CallBack();

}
*/
