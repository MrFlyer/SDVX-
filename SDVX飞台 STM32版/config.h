#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    QMK
#define PRODUCT         SDVX Pad
#define DESCRIPTION     SDVX Pad

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 9

/* key encoders pins*/
#define ENCODERS_PAD_A { A9 , B14 }
#define ENCODERS_PAD_B { A8 , B13 }
#define ENCODER_RESOLUTION 2

#define MOUSEKEY_INTERVAL 5
#define MOUSEKEY_MOVE_DELTA 10
#define MOUSEKEY_DELAY 150
#define MOUSEKEY_MAX_SPEED 25
#define MOUSEKEY_WHEEL_INTERVAL 40

/* key matrix pins */
#define MATRIX_ROW_PINS { B3 }
#define MATRIX_COL_PINS { B11, B10, B1, B0, A7, A6, A5, A4, A3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B9
#define BACKLIGHT_PWM_DRIVER PWMD1
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
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

#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN B15
#define RGBLED_NUM 7
