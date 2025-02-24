#include <music.h>
#include <systick.h>
#include <timer.h>
#include <print.h>
#include <button.h>
#include <player_led.h>

static bool onoff = false;
static bool clicked_long = false;
static int music_pos = 0;
chord_t ** musics[] = {
	LUNE, KATYUSHA
};

int main(void) {
	print_init();
	timer_init();
	button_init();
	player_led_init();
	systick_init();

	current_song = (volatile chord_t**) musics[music_pos];
	bpm = 150;

	while (1) {
		if (!clicked_long)
			switch (check_button()) {
			case BUTTON_LONG:
				println("BUTTON_LONG");
				if (onoff) {
					onoff = false;
					playing = false;
					music_pos = 0;
					current_song = (volatile chord_t**) musics[music_pos];
				} else onoff = true;
				clicked_long = true;
				break;
			case BUTTON_1:
				println("BUTTON_1");
				if (onoff) playing ^= true;
				break;
			default:
				break;
			}
		else clicked_long = is_released();

		if (onoff) {
			player_led_clear(PL_COLOR_R);
			player_led_set(PL_COLOR_G);

			if (playing) {
				player_led_set(PL_COLOR_B);

				if (finished) {
					music_pos++;
					music_pos %= sizeof(musics)/sizeof(chord_t**);
					playing = false;
					current_song = (volatile chord_t**) musics[music_pos];
					finished = false;
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
