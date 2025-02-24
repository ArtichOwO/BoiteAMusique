#ifndef TIMER_H
#define TIMER_H

#include <note.h>

void timer_init(void);
void launch_timer(void);
void stop_timer(void);

void play_chord(channel_t channel, chord_t chord);
void stop_chord(channel_t channel);

#endif
