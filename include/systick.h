#ifndef DELAY_H
#define DELAY_H

#include <note.h>
#include <stdbool.h>
#include <stdint.h>

typedef uint32_t time_t;

extern volatile bool playing, finished;

void systick_init(void);
time_t time_ms(void);
void delay(time_t d);
void set_current_music(chord_t ** song, uint32_t song_bpm);

#endif
