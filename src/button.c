#include <button.h>
#include <systick.h>

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

#define PORT GPIOB
#define PIN GPIO8

void button_init(void) {
	rcc_periph_clock_enable(RCC_GPIOB);
	gpio_mode_setup(PORT, GPIO_MODE_INPUT, 
		GPIO_PUPD_PULLDOWN, PIN);
}

button_t check_button(void) {
	if (gpio_get(PORT, PIN)) return BUTTON_NO;

	time_t current = time_ms();

	while (!gpio_get(PORT, PIN) 
		&& time_ms() - current < 1000);

	if (time_ms() - current >= 1000) return BUTTON_LONG;

	return BUTTON_1;
}

bool is_released(void) {
	return !gpio_get(PORT, PIN);
}
