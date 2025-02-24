#include <timer.h>
#include <globals.h>
#include <note.h>

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/cm3/nvic.h>
#include <libopencm3/stm32/timer.h>

#define CHANNELS_NB 20

static volatile uint32_t timcount = 0;
static uint32_t CLOCK;
static uint32_t ARR;

static volatile uint32_t channels[CHANNELS_NB] = { 0 };

uint32_t square(uint32_t f, uint16_t phase);
uint32_t triangle(uint32_t f, uint16_t phase);
uint32_t sine(uint32_t f, uint16_t phase);

void timer_init(void) {
	rcc_periph_clock_enable(RCC_GPIOB);

	gpio_mode_setup(GPIOB, 
		GPIO_MODE_AF, 
		0, GPIO9);
	gpio_set_af(GPIOB, 
		GPIO_AF1, GPIO9);

	rcc_periph_clock_enable(RCC_TIM2);

	timer_set_mode(TIM2, 
		TIM_CR1_CKD_CK_INT, 
		TIM_CR1_CMS_EDGE, TIM_CR1_DIR_UP);
	CLOCK = rcc_get_timer_clk_freq(TIM2);
	ARR = CLOCK/PSC/FREQ;
	timer_set_prescaler(TIM2, PSC);
	timer_set_oc_mode(TIM2, TIM_OC2, TIM_OCM_PWM1);
	timer_enable_oc_output(TIM2, TIM_OC2);
	timer_set_period(TIM2, ARR);
	timer_set_oc_value(TIM2, TIM_OC2, ARR/2);
	timer_set_oc_value(TIM2, TIM_OC2, 0);
	timer_enable_update_event(TIM2);
	timer_enable_irq(TIM2, TIM_DIER_UIE);
	launch_timer();
	nvic_enable_irq(NVIC_TIM2_IRQ);
}

void tim2_isr(void) {
	timer_clear_flag(TIM2, TIM_SR_UIF);

	timcount++;

	uint32_t dutycycle = 0;
	uint8_t used_channels = 0;

	for (uint8_t ch = 0; ch < CHANNELS_NB; ch++) {
		uint16_t f = channels[ch];
		if (f) {
			dutycycle += square(f, ch >= CHANNELS_NB/2 ? 4 : 0);
			used_channels++;
		}
	}

	if (used_channels)
		timer_set_oc_value(TIM2, TIM_OC2,
			dutycycle/used_channels);
	else
		timer_set_oc_value(TIM2, TIM_OC2, 0);
}

void launch_timer(void) {
	timer_enable_counter(TIM2);
}

void stop_timer(void) {
	timer_disable_counter(TIM2);
}

void play_chord(channel_t channel, chord_t chord) {
	for (uint8_t ch = 0; ch < chord.nb; ch++)
		channels[ch + channel*10] = chord.notes[ch];
}

void stop_chord(channel_t channel) {
	for (uint8_t ch = 0; ch < CHANNELS_NB/2; ch++)
		channels[ch + channel*CHANNELS_NB/2] = 0;
}

uint32_t square(uint32_t f, uint16_t phase) {
	uint32_t periods = FREQ / f;
	uint32_t current = timcount % periods;
	if (phase > 0) current += current / phase;
	return current >= periods/2 ? 0 : ARR+1;
}

uint32_t triangle(uint32_t f, uint16_t phase) {
	uint32_t periods = FREQ / f;
	uint32_t current = timcount % periods;
	if (phase > 0) current += current / phase;
	return ARR+1 - (current*ARR/periods);
}

#include <lut.h>

uint32_t sine(uint32_t f, uint16_t phase) {
	uint32_t periods = FREQ / f;
	uint32_t current = timcount % periods;
	if (phase > 0) current += current / phase;
	return sine_lut[current*sizeof(sine_lut)/periods]*ARR/0xFFFF;
}
