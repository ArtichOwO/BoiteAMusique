#ifndef NOTE_H
#define NOTE_H

#include <stdint.h>
#include <stddef.h>

typedef enum {
	CHANNEL1 = 0,
	CHANNEL2
} channel_t;

typedef enum {
	DO = 261,
	DOd = 277,
	RE = 293,
	REd = 311,
	MI = 329,
	FA = 349,
	FAd = 369,
	SOL = 392,
	SOLd = 415,
	LA = 440,
	LAd = 466,
	SI = 493
} freq0_t;

#pragma clang diagnostic ignored "-Wshift-count-negative"
#define OCTNOTE(freq0, octave) \
	((octave >= 3) ? (freq0 << (octave-3)) : (freq0 >> (3-octave)))

typedef uint32_t octnote_t;
typedef int8_t tempo_t;

typedef struct {
	int8_t nb;
	octnote_t * notes;
	tempo_t tempo;
} chord_t;

#define END_NOTE { 0, NULL, 0 }, { -1, NULL, 0 }

#endif
