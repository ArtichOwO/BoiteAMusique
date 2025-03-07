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

#define OCTNOTE(freq0, octave) \
	((octave >= 3) ? (freq0 << (octave-3)) : (freq0 >> (3-octave)))

typedef uint32_t octnote_t;
typedef int8_t tempo_t;

/* Comment écrire les notes ?
	{ 
		Nombre de notes dans l'accord, 
		Liste de notes sous la forme OCTNOTE(fréquence de base, octave),
 		Durée de la note : 
 			0 pour une noire, -1 pour une croche, 1 une blanche, etc.
 	}
*/
typedef struct {
	int8_t nb;
	octnote_t * notes;
	tempo_t tempo;
} chord_t;

// Note de fin obligatoire pour stopper le séquenceur
#define END_NOTE { 0, NULL, 0 }, { -1, NULL, 0 }

#endif
