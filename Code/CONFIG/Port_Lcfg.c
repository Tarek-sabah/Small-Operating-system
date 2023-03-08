/*
 * Port_Lcfg.c
 *
 *  Created on: Feb 17, 2023
 *      Author: aya_enan
 */

/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Port_Lcfg.c
*  Module   : PORT
*  breif    : Config file for PORT Driver
*
*****************************************************************
*/
/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"
#include "Port_Types.h"
#include "Port_Cfg.h"


/******************************************
  Local Macros / Functions
*******************************************/


/******************************************
  Local Data
*******************************************/

/******************************************
  Global Data
*******************************************/

const Port_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE]= {

												/*Push Buttons PINS*/
												{PORT_PD7,
												PORT_PIN_LEVEL_HIGH,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},
												{PORT_PD6,
												PORT_PIN_LEVEL_HIGH,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},
												{PORT_PD5,
												PORT_PIN_LEVEL_HIGH,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},
												{PORT_PD3,
												PORT_PIN_LEVEL_HIGH,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},

												/*LED PINS*/
												{PORT_PB7,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_FLOATING},
												{PORT_PA4,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_FLOATING},
												{PORT_PA5,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_FLOATING},


												/*EXT INT PINS*/
												{PORT_PD3,
												PORT_PIN_LEVEL_HIGH,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},



};
