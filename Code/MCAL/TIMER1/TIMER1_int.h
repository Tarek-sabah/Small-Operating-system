/*
 * TIMER1_int.h
 *
 *  Created on: Mar 3, 2023
 *      Author: tarek
 */

#ifndef TIMER1_TIMER1_INT_H_
#define TIMER1_TIMER1_INT_H_


/*****************************************
 *            TIMER 1 DRIVER
 *
 * ****************************************/

void M_TIMER1_void_Timer_Init();
void M_TIMER1_void_Timer_start();
void M_TIMER1_void_Timer_stop(void);
void M_TIMER1_void_Timer_setDelayTimeMilliSec(u16 Delay_Time_ms);
void M_TIMER1_void_EnableInt();
void M_TIMER1_void_DisableInt(void);
void M_TIMER1_void_COMP_setCallBack(void (*ptr)(void));
void M_TIMER1_void_OVF_setCallBack(void (*ptr_APP1)(void),void (*ptr_APP2)(void),void (*ptr_APP3)(void));
void M_TIMER1_void_setphaseCorrectPWM(u32 Frequency ,u8 Duty);




/*****************************************
 *            TIMER 1 ICU DRIVER
 *
 * ****************************************/
void M_TIMER1_void_ICU_IntEnable(void);
void M_TIMER1_void_ICU_IntDisable(void);
void M_TIMER1_void_ICU_void_setTrigg(void);
void M_TIMER1_void_ICU_takeReading(void);
void M_TIMER1_void_setCallBack(void (*ptr)(void));

#endif /* TIMER1_TIMER1_INT_H_ */
