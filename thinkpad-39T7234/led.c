#include "hal.h"

#include "led.h"


void led_set(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // output high
        palSetPadMode(TEENSY_PIN13_IOPORT, TEENSY_PIN13, PAL_MODE_OUTPUT_PUSHPULL);
        palSetPad(TEENSY_PIN13_IOPORT, TEENSY_PIN13);
    } else {
        // Hi-Z
        palSetPadMode(TEENSY_PIN13_IOPORT, TEENSY_PIN13, PAL_MODE_INPUT);
    }
}
