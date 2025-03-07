#include <music.h>
#include <systick.h>
#include <timer.h>
#include <print.h>
#include <button.h>
#include <player_led.h>
#include <note_leds.h>

static bool onoff = false;
// Pour éviter les clics non voulus
static bool clicked_long = false;
static int music_pos = 0;

// Ordre des musiques
chord_t ** musics[] = {
	LUNE, BRAHMS, ANGES, UMUTSUZ_ASK, KATYUSHA
};
time_t bpms[] = {
	LUNE_BPM, BRAHMS_BPM, ANGES_BPM, UMUTSUZ_ASK_BPM, KATYUSHA_BPM
};

// Fonction principale
int main(void) {
	// Lancement de toutes les fonctions d'initialisation
	print_init();
	timer_init();
	button_init();
	player_led_init();
	note_leds_init();
	systick_init();

	set_current_music(musics[music_pos], bpms[music_pos]);

	while (1) {
		if (!clicked_long)
			switch (check_button()) {
			case BUTTON_LONG:
				println("BUTTON_LONG");
				if (onoff) {
					onoff = false;
					music_pos = 0;
					set_current_music(musics[music_pos], bpms[music_pos]);
				} else onoff = true;
				clicked_long = true;
				break;
			case BUTTON_1:
				println("BUTTON_1");
				if (onoff) playing ^= true;
				break;
			case BUTTON_2:
				println("BUTTON_2");
				if (onoff) {
					music_pos++;
					music_pos %= sizeof(musics)/sizeof(chord_t**);
					set_current_music(musics[music_pos], bpms[music_pos]);
					delay(100);
					playing = true;
				}
				clicked_long = true;
				break;
			default:
				break;
			}
		else clicked_long = is_pressed();

		if (onoff) {
			player_led_clear(PL_COLOR_R);
			player_led_set(PL_COLOR_G);

			if (playing) {
				player_led_set(PL_COLOR_B);

				if (finished) {
					music_pos++;
					music_pos %= sizeof(musics)/sizeof(chord_t**);
					set_current_music(musics[music_pos], bpms[music_pos]);
					delay(1000);
					playing = true;
				}
			} else player_led_clear(PL_COLOR_B);
		} else {
			player_led_clear(PL_COLOR_G);
			player_led_clear(PL_COLOR_B);
			player_led_set(PL_COLOR_R);
		}
	};

	return 0;
}
