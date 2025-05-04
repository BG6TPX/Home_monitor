#include "blink.h"

void pico_set_led(char led_pin, bool led_onoff);

int main() {
    //init stdlib
    stdio_init_all();

    //set led gpio
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        pico_set_led(LED_PIN, true);
        sleep_ms(LED_DELAY_MS);
        pico_set_led(LED_PIN, false);
        sleep_ms(LED_DELAY_MS);
    }
}

void pico_set_led(char led_pin, bool led_onoff){
    gpio_put(led_pin, led_onoff);
}