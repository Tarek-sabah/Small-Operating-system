/*
 * TIMER1_priv.h
 *
 *  Created on: Mar 3, 2023
 *      Author: tarek
 */

#ifndef TIMER1_TIMER1_PRIV_H_
#define TIMER1_TIMER1_PRIV_H_

#define TCCR1A_WGM_MASK			0xFC
#define TCCR1B_WGM_MASK			0xE7

#define TCCR1_COM1A_MASK		0x3F
#define TCCR1_COM1B_MASK		0xCF



#define TCCR1B_CS_MASK			0xF8


/*
 * TCCR1B BITS
 * */

#define TCCR1B_ICNC1_BIT			7
#define TCCR1B_ICES1_BIT			6


/*
 * Timer/Counter Interrupt Mask Register – TIMSK BITS
 * */
#define TIMSK_TICIE1_BIT			5				//Timer/Counter1, Input Capture Interrupt Enable
#define TIMSK_OCIE1A_BIT			4				//Timer/Counter1, Output Compare A Match Interrupt Enable
#define TIMSK_OCIE1B_BIT			3				//Timer/Counter1, Output Compare B Match Interrupt Enable
#define TIMSK_TOIE1_BIT				2				//Timer/Counter1, Overflow Interrupt Enable


/*
 * Timer/Counter Interrupt Flag Register – TIFR
 * */
#define TIFR_ICF1_BIT				5				//Timer/Counter1, Input Capture Flag
#define TIFR_OCF1A_BIT				4				//Timer/Counter1, Output Compare A Match Flag
#define TIFR_OCF1B_BIT				3				//Timer/Counter1, Output Compare B Match Flag
#define TIFR_TOV1_BIT				2				//Timer/Counter1, Overflow Flag

void __vector_9 (void) __attribute__((signal,used));
void __vector_6 (void) __attribute__((signal,used));

//void __vector_11 (void) __attribute__((signal,used));




#endif /* TIMER1_TIMER1_PRIV_H_ */
