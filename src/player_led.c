#include <player_led.h>

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

void player_led_init(void) {
	rcc_periph_clock_enable(RCC_GPIOA);
	gpio_mode_setup(GPIOA, GPIO_MODE_OUTPUT, GPIO_OTYPE_PP, 
		GPIO8 | GPIO9 | GPIO10);
}

void player_led_set(player_led_color_t color) {
	switch (color) {
	case PL_COLOR_R:
		gpio_set(GPIOA, GPIO8);
		break;
	case PL_COLOR_G:
		gpio_set(GPIOA, GPIO9);
		break;
	case PL_COLOR_B:
		gpio_set(GPIOA, GPIO10);
	}
}

void player_led_clear(player_led_color_t color) {
	switch (color) {
	case PL_COLOR_R:
		gpio_clear(GPIOA, GPIO8);
		break;
	case PL_COLOR_G:
		gpio_clear(GPIOA, GPIO9);
		break;
	case PL_COLOR_B:
		gpio_clear(GPIOA, GPIO10);
	}
}

void player_led_toggle(player_led_color_t color) {
	switch (color) {
	case PL_COLOR_R:
		gpio_toggle(GPIOA, GPIO8);
		break;
	case PL_COLOR_G:
		gpio_toggle(GPIOA, GPIO9);
		break;
	case PL_COLOR_B:
		gpio_toggle(GPIOA, GPIO10);
	}
}
