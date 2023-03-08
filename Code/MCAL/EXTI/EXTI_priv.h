/*
 * EXT_INT_priv.h
 *
 *  Created on: Feb 24, 2023
 *      Author: tarek
 */

#ifndef EXTI_EXTI_PRIV_H_
#define EXTI_EXTI_PRIV_H_

#include "Mcu_HW.h"
#include "BIT_MATH.h"

#define ENABLE_EXTI1			SET_BIT(GICR_REG,7)
#define ENABLE_EXTI0			SET_BIT(GICR_REG,6)
#define ENABLE_EXTI2			SET_BIT(GICR_REG,5)

#define DISABLE_EXTI1			CLR_BIT(GICR_REG,7)
#define DISABLE_EXTI0			CLR_BIT(GICR_REG,6)
#define DISABLE_EXTI2			CLR_BIT(GICR_REG,5)

#define FLAG_EXTI1				GET_BIT(GIFR_REG,7)
#define FLAG_EXTI0				GET_BIT(GIFR_REG,6)
#define FLAG_EXTI2				GET_BIT(GIFR_REG,5)




#endif /* EXTI_EXTI_PRIV_H_ */
