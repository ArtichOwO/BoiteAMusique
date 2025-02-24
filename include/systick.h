#ifndef DELAY_H
#define DELAY_H

#include <note.h>
#include <stdbool.h>
#include <stdint.h>

typedef uint32_t time_t;

extern volatile bool playing, finished;
extern volatile chord_t ** current_song;
extern volatile uint32_t bpm;

void systick_init(void);
time_t time_ms(void);
void delay(time_t d);

#endif
