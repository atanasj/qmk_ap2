#pragma once

#undef TAPPING_TERM
#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
#define RETRO_TAPPING

#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500

#define COMBO_VARIABLE_LEN
/* #define COMBO_COUNT 13 */
#define COMBO_TERM 15


#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 40
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 100

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define CAPS_LOCATION (MATRIX_COLS * 2 + 11)
