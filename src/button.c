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
	if (!is_pressed()) return BUTTON_NO;

	time_t current = time_ms();

	while (is_pressed() 
		&& time_ms() - current < 1000);

	if (time_ms() - current >= 950) return BUTTON_LONG;
	else {
		current = time_ms();
		while (!is_pressed()
			&& time_ms() - current < 100);
		if (is_pressed()) return BUTTON_2;
	}

	return BUTTON_1;
}

bool is_pressed(void) {
	return !gpio_get(PORT, PIN);
}
