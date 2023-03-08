/*
 * EXT_INT_cfg.h
 *
 *  Created on: Feb 24, 2023
 *      Author: tarek
 */

#ifndef EXTI_CFG_H_
#define EXTI_CFG_H_


#define EXTI_SIZE 3


typedef struct {
	EXTI_N	EXTI_ID;
	Sense_Control SC;
}EXTI_Config;

#endif /* EXTI_CFG_H_ */
