#include <note.h>
#include <music.h>

#define DCROCHE -2
#define CROCHE -1
#define NOIRE 0
#define BLANCHE 1

#define W_QUAR { 0, NULL, DCROCHE }
#define W_DEMI { 0, NULL, CROCHE }
#define W_FULL { 0, NULL, NOIRE }
#define W_DOUB { 0, NULL, BLANCHE }

/*Comment sont écrit les notes ?
	{ nbr_notes_même_temps, (octnote_t []) { OCTNOTE(note, numéro octave) }, duree_note },
 	duree_note, 	soit -1 pour les croches,
  			soit 0 pour les noires,
     			soit 1 pour les blanches,
	(pour des puissances de 2) 
*/
chord_t KATYUSHA_ch1[] = {
	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, NOIRE },
	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, NOIRE },
	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },
	W_QUAR,
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, DCROCHE },
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 2) }, NOIRE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, NOIRE },
	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, NOIRE },
	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, CROCHE },
	W_QUAR,
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, DCROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, BLANCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, NOIRE },

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, CROCHE },
	W_QUAR,
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, DCROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, NOIRE },

	/* --- --- --- */

	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, CROCHE },


	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, NOIRE },
	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },
	W_QUAR,
	{ 1, (octnote_t []) { OCTNOTE(SI, 2) }, DCROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, BLANCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, NOIRE },

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, CROCHE },
	W_QUAR,
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, DCROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, NOIRE },

	/* --- --- --- */

	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, NOIRE },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, CROCHE },


	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, NOIRE },
	W_DEMI,
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },
	W_QUAR,
	{ 1, (octnote_t []) { OCTNOTE(SI, 2) }, DCROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(FAd, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, NOIRE },
	W_FULL,

	/* --- --- --- */
	
	END_NOTE
};

chord_t KATYUSHA_ch2[] = {
	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(REd, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(FAd, 2), OCTNOTE(DO, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(RE, 2), OCTNOTE(DO, 2) }, CROCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(REd, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(FAd, 2), OCTNOTE(DO, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(FAd, 2), OCTNOTE(DO, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(REd, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(FAd, 2), OCTNOTE(DO, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(FAd, 2), OCTNOTE(DO, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(REd, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(FAd, 2), OCTNOTE(DO, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(RE, 2), OCTNOTE(DO, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(DO, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(DO, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SI, 2), OCTNOTE(RE, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOLd, 2), OCTNOTE(RE, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(LA, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(DO, 3), OCTNOTE(MI, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(LA, 2), OCTNOTE(DO, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(DO, 3) }, CROCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(DO, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(LA, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(LA, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(DO, 2), OCTNOTE(LA, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(SOL, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(DO, 2), OCTNOTE(LA, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(REd, 2), OCTNOTE(LA, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(RE, 2), OCTNOTE(LA, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(DO, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(DO, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SI, 2), OCTNOTE(RE, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOLd, 2), OCTNOTE(RE, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(LA, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(DO, 3), OCTNOTE(MI, 3) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(LA, 2), OCTNOTE(DO, 3) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(MI, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(SOL, 2), OCTNOTE(SI, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(DO, 3) }, CROCHE },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(DO, 2) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(LA, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(LA, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(DO, 2), OCTNOTE(LA, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(SOL, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(DO, 2), OCTNOTE(LA, 2) }, CROCHE },

	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(REd, 2), OCTNOTE(LA, 2) }, CROCHE },
	{ 1, (octnote_t []) { OCTNOTE(SI, 1) }, CROCHE },
	{ 2, (octnote_t []) { OCTNOTE(RE, 2), OCTNOTE(LA, 2) }, CROCHE },

	{ 2, (octnote_t []) { OCTNOTE(MI, 2), OCTNOTE(SOL, 2) }, NOIRE },
	W_FULL,

	/* --- --- --- */

	END_NOTE
};

chord_t * KATYUSHA[] = { KATYUSHA_ch1, KATYUSHA_ch2 };
