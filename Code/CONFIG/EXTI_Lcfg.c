/*
 * EXT_INT_Lcfg.c
 *
 *  Created on: Feb 24, 2023
 *      Author: tarek
 */

/******************************************
  INCLUDES
*******************************************/
#include <EXTI/EXTI_types.h>
#include <EXTI_cfg.h>
#include "Std_Types.h"


const EXTI_Config EXTI_Config_Array[EXTI_SIZE]={
			{EXTI0,FALLING_EDGE},
			{EXTI1,FALLING_EDGE},
			{EXTI2,FALLING_EDGE}
};



