#include <note_leds.h>

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

#define PORT GPIOA
#define ALL_LEDs GPIO4 | GPIO5 | GPIO6 | GPIO7

static uint16_t LEDs[] = { GPIO4, GPIO5, GPIO6, GPIO7 };
static int current_led = 0;

void note_leds_init(void) {
	rcc_periph_clock_enable(RCC_GPIOA);
	gpio_mode_setup(PORT, GPIO_MODE_OUTPUT, GPIO_OTYPE_PP, 
		ALL_LEDs);
}

void note_leds_stop(void) {
	gpio_clear(PORT, ALL_LEDs);
	current_led = 0;
}

void note_leds_tick(void) {
	gpio_clear(PORT, LEDs[current_led++]);
	current_led %= sizeof(LEDs)/sizeof(uint16_t);
	gpio_set(PORT, LEDs[current_led]);
}
