/*
 * board_leds.h
 *
 *  Created on: Nov 6, 2025
 *      Author: TomByrne
 */

#ifndef BOARD_X2C_AUTOMATION_BOARD_LEDS_H_
#define BOARD_X2C_AUTOMATION_BOARD_LEDS_H_

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** Information on how many LEDs and what pins they are on. */
typedef struct st_bsp_leds
{
    uint16_t         led_count;        ///< The number of LEDs on this board
    uint16_t const * p_leds;           ///< Pointer to an array of IOPORT pins for controlling LEDs
} bsp_leds_t;

/** Available user-controllable LEDs on this board. These enums can be can be used to index into the array of LED pins
 * found in the bsp_leds_t structure. */
typedef enum e_bsp_led
{
    BSP_LED_LED1,                      ///< LED1
} bsp_led_t;

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Public Functions
 **********************************************************************************************************************/


#endif /* BOARD_X2C_AUTOMATION_BOARD_LEDS_H_ */
