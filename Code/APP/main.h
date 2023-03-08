/*
 * main.h
 *
 *  Created on: Mar 1, 2023
 *      Author: tarek
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <util/delay.h>
#include "STD_TYPES.h"
#include "Port_int.h"
#include "Dio_int.h"
#include "LED_int.h"
#include "TIMER1_int.h"
#include "GID_int.h"
#include "EXTI_int.h"


//void APP_EXTI (void);
//void APP_TIMER0 (void);


void APP_LED_RED_TASK (void);
void APP_LED_GREEN_TASK (void);
void APP_LED_BLUE_TASK (void);



#endif /* MAIN_H_ */
