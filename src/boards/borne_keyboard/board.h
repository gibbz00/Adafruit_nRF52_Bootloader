/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2022 Gabriel Hansson
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _BORNE_KEYBOARD_H
#define _BORNE_KEYBOARD_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       1
#define LED_PRIMARY_PIN   _PINNUM(0, 15) // Blue
#define LED_STATE_ON      1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
/* 
    TODO: 
        not sure why I'm defining two button when there's clearly one
        P0.19 is not connected to anything
        test if buttons number can be changed to 01 and where button_2 is removed
*/
#define BUTTONS_NUMBER    2  // none connected at all
#define BUTTON_1          _PINNUM(0, 18)  // RESET
#define BUTTON_2          _PINNUM(0, 19)  // no connection
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "Ergin"
#define BLEDIS_MODEL         "Borne Keyboard"

//--------------------------------------------------------------------+
// USB
// Vendor ID and Product ID for Open Source Hardware:
// https://www.oshwa.org/2013/11/19/new-faq-on-usb-vendor-id-and-product-id/
// https://github.com/openmoko/openmoko-usb-oui
// https://wiki.openmoko.org/wiki/USB_Product_IDs
//--------------------------------------------------------------------+
//TODO: get ID for Borne-Keyboard
//Currently using VID/PID with Feather nRF52840
#define USB_DESC_VID           0x1209
#define USB_DESC_UF2_PID       0x7A01
#define USB_DESC_CDC_ONLY_PID  0x7A01

#define UF2_PRODUCT_NAME  "Borne Keyboard"
#define UF2_VOLUME_LABEL  "BORNE-BOOT"
#define UF2_BOARD_ID      "nRF52840-borne-keyboard-v1"
#define UF2_INDEX_URL     "https://github.com/whiz00/borne-keyboard"

#endif // _BORNE_KEYBOARD_H
