/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define BACKLIGHT_PWM_DRIVER PWMD1
//#define BACKLIGHT_PWM_CHANNEL 1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLIGHT_EFFECT_SNAKE
//#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_CHRISTMAS
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_TWINKLE
//#define RGBLED_NUM 9
//#define WS2812_SPI SPID2


//#define ANALOG_JOYSTICK_X_AXIS_PIN A3
//#define ANALOG_JOYSTICK_Y_AXIS_PIN A4
#define ANALOG_JOYSTICK_X_AXIS_PIN B0
//#define ANALOG_JOYSTICK_X_AXIS_PIN A7
#define ANALOG_JOYSTICK_Y_AXIS_PIN B1
//#define ANALOG_JOYSTICK_Y_AXIS_PIN A7
// Min 0, max 32
#define JOYSTICK_BUTTON_COUNT 16
// Min 0, max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXIS_COUNT 2
// Min 8, max 16
//#define JOYSTICK_AXIS_RESOLUTION 10 // for AVR
#define JOYSTICK_AXIS_RESOLUTION 12 // 12-bit for most STM32

#define _MIN 0
#define _MAX 1023
#define _CENTER 512

//#define _DEAD 20
#define _DEAD 220
#define _SHIFT 15 // last 15 steps upwards

#define _DOWN_TRESHOLD (_CENTER+_DEAD)
#define _UP_TRESHOLD (_CENTER-_DEAD)

#define JSV ANALOG_JOYSTICK_Y_AXIS_PIN
#define JSH ANALOG_JOYSTICK_X_AXIS_PIN


#ifdef OLED_ENABLE
#define OLED_DISPLAY_128X32
//#define I2C1_SCL_PIN        B8
//#define I2C1_SDA_PIN        B9
#define OLED_BRIGHTNESS 128
//#define OLED_FONT_H "keyboards/mlego/m65/lib/glcdfont.c"
#endif

//#define ENCODERS_PAD_A { B9 }
//#define ENCODERS_PAD_B { B8 }
#define ENCODERS_PAD_A { B15 }
#define ENCODERS_PAD_B { B14 }
#define ENCODER_TESTS

#if 0
#define POINTING_DEVICE_SCLK_PIN B6
#define ADNS5050_SDIO_PIN B7
#define ADNS5050_CS_PIN B4
#endif

#if 1
#define MOUSE_EXTENDED_REPORT //16bit xy
//#define POINTING_DEVICE_SDIO_PIN B5
//#define POINTING_DEVICE_SCLK_PIN B4
//#define POINTING_DEVICE_CS_PIN B3
#define POINTING_DEVICE_SDIO_PIN B9
#define POINTING_DEVICE_SCLK_PIN B8
#define POINTING_DEVICE_CS_PIN B5
#endif

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
