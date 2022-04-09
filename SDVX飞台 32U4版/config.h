#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    SDVX PAD
#define PRODUCT         SDVX PAD
#define DESCRIPTION     SDVX PAD

/* key encoders pins*/
#define ENCODERS_PAD_A { D6 , C7 }
#define ENCODERS_PAD_B { D4 , C6 }
#define ENCODER_RESOLUTION 2

#define MOUSEKEY_INTERVAL 5
#define MOUSEKEY_MOVE_DELTA 10
#define MOUSEKEY_DELAY 150
#define MOUSEKEY_MAX_SPEED 25
#define MOUSEKEY_WHEEL_INTERVAL 40
/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { F0 }
#define MATRIX_COL_PINS { D2, B2, B3, B4, B5, B6, B7, D0, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define RGB_DI_PIN B1
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 7
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
