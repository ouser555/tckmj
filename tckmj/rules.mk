# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = no	# Console for debug
COMMAND_ENABLE = no    # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
#BACKLIGHT_ENABLE = yes
#RGBLIGHT_ENABLE = yes
#SLEEP_LED_ENABLE = yes

POINTING_DEVICE_ENABLE = yes
#POINTING_DEVICE_DRIVER = analog_joystick
#POINTING_DEVICE_DRIVER = adns5050
#POINTING_DEVICE_DRIVER = pimoroni_trackball
POINTING_DEVICE_DRIVER = custom

JOYSTICK_ENABLE = yes
#JOYSTICK_DRIVER = digital
JOYSTICK_DRIVER = analog

OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

ENCODER_ENABLE = yes
#ENCODER_MAP_ENABLE = yes

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
SRC += pmw3610.c
SRC += drivers/sensors/analog_joystick.c
