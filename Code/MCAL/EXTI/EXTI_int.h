/*
 * EXT_INT_int.h
 *
 *  Created on: Feb 24, 2023
 *      Author: tarek
 */

#ifndef EXTI_EXTI_INT_H_
#define EXTI_EXTI_INT_H_


#include <EXTI/EXTI_types.h>
#include <EXTI_cfg.h>
#include "STD_TYPES.h"


void M_EXTI_en_enableInt(const EXTI_Config * Config_Array);
void M_EXTI_en_disableInt(EXTI_N EXTI_n);
void M_EXTI_en_setCallBack(void (*ptr) (void));						//Take EXT_INT ID and the function that required to call

#endif /* EXTI_EXTI_INT_H_ */
