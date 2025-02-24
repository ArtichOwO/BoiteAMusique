#ifndef PLAYER_LED
#define PLAYER_LED

typedef enum {
	PL_COLOR_R,
	PL_COLOR_G,
	PL_COLOR_B
} player_led_color_t;

void player_led_init(void);
void player_led_set(player_led_color_t color);
void player_led_clear(player_led_color_t color);
void player_led_toggle(player_led_color_t color);

#endif
