/*
 * TIMER1_prg.c
 *
 *  Created on: Mar 3, 2023
 *      Author: tarek
 */

#include <util/delay.h>

#include "Mcu_HW.h"
#include "STD_TYPES.h"		//Library
#include "BIT_MATH.h"
#include "DIO_int.h"		//Lower Layer interface

#include "TIMER1_priv.h"
#include "TIMER1_types.h"
#include "TIMER1_cfg.h"
#include "TIMER1_int.h"

static void (*TIMER1_OVF_APP1_CallBack) (void)= NULL;
static void (*TIMER1_OVF_APP2_CallBack) (void)= NULL;
static void (*TIMER1_OVF_APP3_CallBack) (void)= NULL;

//static void (*TIMER1_COMP_CallBack) (void)= NULL;
//static void (*TIMER1_ICU_CallBack) (void)= NULL;

u32 TIMER1_OVERFLOW_COUNTER=0;

u8 BLUE_State=0;



u32	TIMER1_START_COUNTS=0;


//u32	TIMER1_REQUIRED_OVERFLOW_COUNTS=0;
//u32	TIMER1_REQUIRED_REMINDER_COUNTS=0;




/*****************************************
 *            TIMER 1 DRIVER
 *
 * ****************************************/
void M_TIMER1_void_Timer_Init()
{
	TCCR1A_REG=0;
	TCCR1B_REG=0;

	TCNT1H_REG&=0X00;
	TCNT1L_REG=0x00;
}

void M_TIMER1_void_Timer_start()
{

//	TCNT1H_REG=(TIMER1_REQUIRED_REMINDER_COUNTS>>2);
//	TCNT1L_REG=(TIMER1_REQUIRED_REMINDER_COUNTS & 0xFF);
	TCNT1LH_REG = (u16)TIMER1_START_COUNTS;
	TCCR1B_REG=0x04;
}
void M_TIMER1_void_Timer_stop(void)
{
	TCCR1B_REG=0;
}

void M_TIMER1_void_Timer_setDelayTimeMilliSec(u16 Delay_Time_ms)
{
	f32 Tick_Time = (f32) (256)/16000000;
	u32 Desired_Ticks = (u32)(Delay_Time_ms/1000) / Tick_Time;

	TIMER1_START_COUNTS = 65536 - Desired_Ticks;
//	TIMER1_REQUIRED_OVERFLOW_COUNTS = Desired_Ticks / 65536;
//	TIMER1_REQUIRED_REMINDER_COUNTS = Desired_Ticks % 65536;



}

void M_TIMER1_void_EnableInt()
{
	SET_BIT(TIMSK_REG,TIMSK_TOIE1_BIT);
}

void M_TIMER1_void_DisableInt(void)
{
	CLR_BIT(TIMSK_REG,TIMSK_TICIE1_BIT);
	CLR_BIT(TIMSK_REG,TIMSK_OCIE1A_BIT);
	CLR_BIT(TIMSK_REG,TIMSK_OCIE1B_BIT);
	CLR_BIT(TIMSK_REG,TIMSK_TOIE1_BIT);
}

//void M_TIMER1_void_COMP_setCallBack(void (*ptr_APP1)(void))
//{
//
//	if(ptr_APP1 != NULL)
//	{
//		TIMER1_COMP_CallBack = ptr_APP1;
//	}
//
//}
void M_TIMER1_void_OVF_setCallBack(void (*ptr_APP1)(void),void (*ptr_APP2)(void),void (*ptr_APP3)(void))
{
	if(ptr_APP1 != NULL)
	{
		TIMER1_OVF_APP1_CallBack = ptr_APP1;
	}
	if(ptr_APP2 != NULL)
	{
		TIMER1_OVF_APP2_CallBack = ptr_APP2;
	}
	if(ptr_APP3 != NULL)
	{
		TIMER1_OVF_APP3_CallBack = ptr_APP3;
	}



}

//void M_TIMER1_void_setFastPWM(u32 Frequency ,u8 Duty)
//{
//
//}
//void M_TIMER1_void_setphaseCorrectPWM(u32 Frequency ,u8 Duty)
//{
//
//}
//
//


void __vector_9 (void)
{

//	TIMER1_OVF_CallBack();
	TCNT1LH_REG = (u16)TIMER1_START_COUNTS;
	TIMER1_OVERFLOW_COUNTER++;
	if(TIMER1_OVERFLOW_COUNTER%2 == 0)						//2*500ms = 1 second
	{
		TIMER1_OVF_APP1_CallBack();
	}
	if(TIMER1_OVERFLOW_COUNTER%6 == 0)						//6*500ms = 3 seconds
	{
		TIMER1_OVF_APP3_CallBack();
	}
	if(BLUE_State==1)
	{
		TIMER1_OVF_APP2_CallBack();
		BLUE_State=0;
	}


//	if(TIMER1_OVERFLOW_COUNTER==(TIMER1_REQUIRED_OVERFLOW_COUNTS+1))
//	{
//		TIMER1_OVF_CallBack();
//		TIMER1_OVERFLOW_COUNTER=0;
//	}

}



/*****************************************
 *            TIMER 1 ICU DRIVER
 *
 * ****************************************/


//void M_TIMER1_void_ICU_IntEnable(void)
//{
//
//	SET_BIT(TIMSK_REG,TIMSK_TICIE1_BIT);
//	TCCR1A_REG = 0;				//Normal Mode
//	TCCR1B_REG = 0x41;			//Rising Edge, no scaler, no noise cancel
//
//
//}
//void M_TIMER1_void_ICU_IntDisable(void)
//{
//	CLR_BIT(TIMSK_REG,TIMSK_TICIE1_BIT);
//
//}
//void M_TIMER1_void_ICU_void_setTrigg(void)
//{
//	M_Dio_void_setPinValue(TRIGGER_PIN, DIO_HIGH);
//	_delay_ms(10);
//	M_Dio_void_setPinValue(TRIGGER_PIN, DIO_LOW);
//
//
//}
//void M_TIMER1_void_ICU_takeReading(void)
//{
//
//}
//void M_TIMER1_void_setCallBack(void (*ptr)(void))
//{
//	if(ptr != NULL)
//	{
//		TIMER1_ICU_CallBack = ptr;
//	}
//}
//

//
//void __vector_6 (void)
//{
//	u16 cap1,cap2;
//
//	cap1 = ICR1L_REG;
//	cap1|= (ICR1H_REG <<8);
//
//	TIMER1_OVERFLOW_COUNTER=0;
//
//
//}
