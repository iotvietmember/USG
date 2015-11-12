/*
 * board_config.h
 *
 *  Created on: 25/03/2015
 *      Author: Robert Fisk
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */


#ifndef INC_BOARD_CONFIG_H_
#define INC_BOARD_CONFIG_H_


#define BSRR_SHIFT_HIGH         0
#define BSRR_SHIFT_LOW          16

#define PA_JTMS                 GPIO_PIN_13
#define PA_JTCK                 GPIO_PIN_14
#define PA_JTDI                 GPIO_PIN_15
#define PB_JTDO                 GPIO_PIN_3
#define PB_NJTRST               GPIO_PIN_4

#define USB_FS_VBUS_PIN         GPIO_PIN_9
#define USB_FS_VBUS_PORT        GPIOA
#define USB_FS_VBUSON_PIN       GPIO_PIN_10
#define USB_FS_VBUSON_PORT      GPIOA
#define USB_FS_FAULT_PIN        GPIO_PIN_6
#define USB_FS_FAULT_PORT       GPIOB

#define USB_HS_VBUS_PIN         GPIO_PIN_13
#define USB_HS_VBUS_PORT        GPIOB
#define USB_HS_VBUSON_PIN       GPIO_PIN_8
#define USB_HS_VBUSON_PORT      GPIOA

#define FAULT_LED_PIN           GPIO_PIN_13
#define FAULT_LED_PORT          GPIOC
#define FAULT_LED_ON            (FAULT_LED_PORT->BSRR = (FAULT_LED_PIN << BSRR_SHIFT_LOW))  //Fault LED is active-low
#define FAULT_LED_OFF           (FAULT_LED_PORT->BSRR = (FAULT_LED_PIN << BSRR_SHIFT_HIGH))

#define H405_FAULT_LED_PIN      GPIO_PIN_12     //Fault LED on Olimex H405 board
#define H405_FAULT_LED_ON       (FAULT_LED_PORT->BSRR = (H405_FAULT_LED_PIN << BSRR_SHIFT_LOW))

#define INT_ACTIVE_PIN          GPIO_PIN_2      //Temporary indicator of SPI (or whatever) activity
#define INT_ACTIVE_PORT         GPIOA
#define INT_ACTIVE_ON           INT_ACTIVE_PORT->BSRR = (INT_ACTIVE_PIN << BSRR_SHIFT_HIGH)
#define INT_ACTIVE_OFF          INT_ACTIVE_PORT->BSRR = (INT_ACTIVE_PIN << BSRR_SHIFT_LOW)

//#define SPI1_NSS_PIN          GPIO_PIN_4
//#define SPI1_NSS_PORT         GPIOA

#define UPSTREAM_TX_REQUEST_PIN         GPIO_PIN_3
#define UPSTREAM_TX_REQUEST_PORT        GPIOA
#define UPSTREAM_TX_REQUEST_ASSERT      (UPSTREAM_TX_REQUEST_PORT->BSRR = (UPSTREAM_TX_REQUEST_PIN << BSRR_SHIFT_LOW))
#define UPSTREAM_TX_REQUEST_DEASSERT    (UPSTREAM_TX_REQUEST_PORT->BSRR = (UPSTREAM_TX_REQUEST_PIN << BSRR_SHIFT_HIGH))

#define DBGMCU_IDCODE_DEV_ID_405_407_415_417    0x413


#endif /* INC_BOARD_CONFIG_H_ */
