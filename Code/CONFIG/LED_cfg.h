/*
 * LED_cfg.h
 *
 *  Created on: Feb 18, 2023
 *      Author: tarek
 */

#ifndef LED_CFG_H_
#define LED_CFG_H_

/*
 * Please Config pins of led
 * LEDPIN ex DIO_PB7
 *
 * Please Config direction
 * LED_FORWARD_DIR
 * LED_REVERSE_DIR
 */


#define LED_RED_PIN			DIO_PB7
#define	LED_RED_DIR			LED_FORWARD_DIR


#define LED_GREEN_PIN		DIO_PA4
#define	LED_GREEN_DIR		LED_FORWARD_DIR

#define LED_BLUE_PIN		DIO_PA5
#define	LED_BLUE_DIR		LED_FORWARD_DIR

#define LED_YELLOW_PIN		DIO_PA6
#define	LED_YELLOW_DIR		LED_FORWARD_DIR

#endif /* LED_CFG_H_ */
