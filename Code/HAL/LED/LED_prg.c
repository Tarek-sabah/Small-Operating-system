/*
 * LED_prg.c
 *
 *  Created on: Feb 18, 2023
 *      Author: tarek
 */

#include "STD_TYPES.h"
#include "DIO_int.h"

#include "LED_cfg.h"
#include "LED_priv.h"

#include "LED_int.h"


void H_LED_void_turnOn(u8 ledID)
{
	switch(ledID)
	{
		case LED_RED:
#if(LED_RED_DIR == LED_FORWARD_DIR)
			M_Dio_void_setPinValue(LED_RED_PIN,DIO_HIGH);
#elif(LED_RED_DIR == LED_REVERSE_DIR)
			M_Dio_void_setPinValue(LED_RED_PIN,DIO_LOW);
#else
	#error("Wrong LED Direction")
#endif
			break;

		case LED_GREEN:
#if(LED_GREEN_DIR == LED_FORWARD_DIR)
			M_Dio_void_setPinValue(LED_GREEN_PIN,DIO_HIGH);
#elif(LED_GREEN_DIR == LED_REVERSE_DIR)
			M_Dio_void_setPinValue(LED_GREEN_PIN,DIO_LOW);
#else
	#error("Wrong LED Direction")
#endif
			break;

		case LED_BLUE:
#if(LED_BLUE_DIR == LED_FORWARD_DIR)
			M_Dio_void_setPinValue(LED_BLUE_PIN,DIO_HIGH);
#elif(LED_BLUE_DIR == LED_REVERSE_DIR)
			M_Dio_void_setPinValue(LED_BLUE_PIN,DIO_LOW);
#else
	#error("Wrong LED Direction")
#endif
			break;

		case LED_YELLOW:
#if(LED_YELLOW_DIR == LED_FORWARD_DIR)
			M_Dio_void_setPinValue(LED_YELLOW_PIN,DIO_HIGH);
#elif(LED_YELLOW_DIR == LED_REVERSE_DIR)
			M_Dio_void_setPinValue(LED_YELLOW_PIN,DIO_LOW);
#else
	#error("Wrong LED Direction")
#endif
			break;
	}
}
void H_LED_void_turnOFF(u8 ledID)
{
	switch(ledID)
		{
			case LED_RED:
	#if(LED_RED_DIR == LED_FORWARD_DIR)
				M_Dio_void_setPinValue(LED_RED_PIN,DIO_LOW);
	#elif(LED_RED_DIR == LED_REVERSE_DIR)
				M_Dio_void_setPinValue(LED_RED_PIN,DIO_HIGH);
	#else
		#error("Wrong LED Direction")
	#endif
				break;

			case LED_GREEN:
	#if(LED_GREEN_DIR == LED_FORWARD_DIR)
				M_Dio_void_setPinValue(LED_GREEN_PIN,DIO_LOW);
	#elif(LED_GREEN_DIR == LED_REVERSE_DIR)
				M_Dio_void_setPinValue(LED_GREEN_PIN,DIO_HIGH);
	#else
		#error("Wrong LED Direction")
	#endif
				break;

			case LED_BLUE:
	#if(LED_BLUE_DIR == LED_FORWARD_DIR)
				M_Dio_void_setPinValue(LED_BLUE_PIN,DIO_LOW);
	#elif(LED_BLUE_DIR == LED_REVERSE_DIR)
				M_Dio_void_setPinValue(LED_BLUE_PIN,DIO_HIGH);
	#else
		#error("Wrong LED Direction")
	#endif
				break;

			case LED_YELLOW:
	#if(LED_YELLOW_DIR == LED_FORWARD_DIR)
				M_Dio_void_setPinValue(LED_YELLOW_PIN,DIO_LOW);
	#elif(LED_YELLOW_DIR == LED_REVERSE_DIR)
				M_Dio_void_setPinValue(LED_YELLOW_PIN,DIO_LOW);
	#else
		#error("Wrong LED Direction")
	#endif
				break;
		}
}
void H_LED_void_toggle(u8 ledID)
{
	switch(ledID)
			{
				case LED_RED:
		#if(LED_RED_DIR == LED_FORWARD_DIR)
					M_Dio_void_togglePinValue(LED_RED_PIN);
		#elif(LED_RED_DIR == LED_REVERSE_DIR)
					M_Dio_void_togglePinValue(LED_RED_PIN);
		#else
			#error("Wrong LED Direction")
		#endif
					break;

				case LED_GREEN:
		#if(LED_GREEN_DIR == LED_FORWARD_DIR)
					M_Dio_void_togglePinValue(LED_GREEN_PIN);
		#elif(LED_GREEN_DIR == LED_REVERSE_DIR)
					M_Dio_void_togglePinValue(LED_GREEN_PIN);
		#else
			#error("Wrong LED Direction")
		#endif
					break;

				case LED_BLUE:
		#if(LED_BLUE_DIR == LED_FORWARD_DIR)
					M_Dio_void_togglePinValue(LED_BLUE_PIN);
		#elif(LED_BLUE_DIR == LED_REVERSE_DIR)
					M_Dio_void_togglePinValue(LED_BLUE_PIN);
		#else
			#error("Wrong LED Direction")
		#endif
					break;

				case LED_YELLOW:
		#if(LED_YELLOW_DIR == LED_FORWARD_DIR)
					M_Dio_void_togglePinValue(LED_YELLOW_PIN);
		#elif(LED_YELLOW_DIR == LED_REVERSE_DIR)
					M_Dio_void_togglePinValue(LED_YELLOW_PIN);
		#else
			#error("Wrong LED Direction")
		#endif
					break;
			}
}

