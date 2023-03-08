/*
 * EXT_INT_types.h
 *
 *  Created on: Feb 24, 2023
 *      Author: tarek
 */

#ifndef EXTI_EXTI_TYPES_H_
#define EXTI_EXTI_TYPES_H_

typedef enum{
	EXTI0,
	EXTI1,
	EXTI2
}EXTI_N;

typedef enum{
	LOW_LEVEL,
	ANY_LOGIC,
	FALLING_EDGE,
	RISING_EDGE,
}Sense_Control;

typedef enum{
	OUT_OF_RANGE_VALUE,
	NULL_POINTER,
	NO_ERROR
}Error_Status;


#endif /* EXTI_EXTI_TYPES_H_ */
