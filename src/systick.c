#include <note.h>
#include <systick.h>
#include <globals.h>
#include <music.h>
#include <timer.h>
#include <print.h>
#include <note_leds.h>

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/cm3/systick.h>
#include <libopencm3/cm3/nvic.h>

#define WAIT_BETWEEN_NOTES 10

volatile bool playing = false, finished = false;
volatile chord_t ** current_song;
volatile uint32_t bpm;
volatile chord_t ch1_current, ch2_current;
volatile int ch1_pos = 0, ch2_pos = 0;
volatile int32_t ch1_wait = 0, ch2_wait = 0, wait = 0, wait_bw = 0;
volatile bool delay_done = true, wait_bw_done;

static volatile time_t systime = 0;

time_t get_delay_from_bpm(tempo_t tempo);

void systick_init(void) {
	systick_set_reload(rcc_ahb_frequency/1000);
	systick_set_clocksource(STK_CSR_CLKSOURCE_AHB);
	systick_counter_enable();
	systick_interrupt_enable();
}

void sys_tick_handler(void) {
	//Interruption du SysTick

	// Compteur du temps global
	systime++;

	// On récupère les données des channels 1 et 2
	ch1_current = current_song[CHANNEL1][ch1_pos];
	ch2_current = current_song[CHANNEL2][ch2_pos];

	if (playing && (ch1_current.nb >= 0 || ch2_current.nb >= 0)) {
		launch_timer();

		if (!wait) {
			delay_done = true;
		} else if (!delay_done) { 
			wait--;
			return;
		};

		if (!ch1_wait && ch1_current.nb >= 0) {
			stop_chord(CHANNEL1);
			if (!wait_bw) {
				wait_bw_done = true;
			} else if (!wait_bw_done) {
				wait_bw--;
				return;
			}
			play_chord(CHANNEL1, ch1_current);
			note_leds_tick();
			ch1_wait = get_delay_from_bpm(ch1_current.tempo);
			ch1_pos++;
		}

		if (!ch2_wait && ch2_current.nb >= 0) {
			stop_chord(CHANNEL2);
			play_chord(CHANNEL2, ch2_current);
			ch2_wait = get_delay_from_bpm(ch2_current.tempo);
			ch2_pos++;
		}

		if (ch1_wait > 0 && ch1_wait < ch2_wait) {
			wait = ch1_wait - WAIT_BETWEEN_NOTES;
			ch2_wait -= ch1_wait;
			ch1_wait = 0;
			wait_bw = WAIT_BETWEEN_NOTES;
			if (ch2_wait < 0) ch2_wait = 0;
		} else if (ch2_wait > 0 && ch2_wait < ch1_wait) {
			wait = ch2_wait;
			ch1_wait -= ch2_wait;
			ch2_wait = 0;
			if (ch1_wait < 0) ch1_wait = 0;
		} else {
			wait = ch1_wait - WAIT_BETWEEN_NOTES;
			ch1_wait = 0;
			ch2_wait = 0;
			wait_bw = WAIT_BETWEEN_NOTES;
		}

		wait_bw_done = false;
		delay_done = false;
	} else {
		stop_timer();
		if (ch1_current.nb < 0 && ch2_current.nb < 0) {
			ch1_pos = 0, ch2_pos = 0;
			finished = true;
		}
	}
}

time_t time_ms(void) {
	return systime;
}

void delay(time_t d) {
	// Permet d'attendre un temps d en ms
	time_t begin = systime;
	while (systime - begin < d);
}

time_t get_delay_from_bpm(tempo_t tempo) {
	// Le délai entre chaque note 
	// change en fonction du tempo de la musique
	time_t ms = 60 * 1000 / bpm;
	return tempo >= 0 ? ms << tempo : ms >> -tempo;
}

void set_current_music(chord_t ** song, uint32_t song_bpm) {
	playing = false;
	finished = false;
	ch1_pos = 0, ch2_pos = 0;
	ch1_wait = 0, ch2_wait = 0;
	wait = 0, wait_bw = 0;
	bpm = song_bpm;
	note_leds_stop();
	current_song = (volatile chord_t**) song;
}
