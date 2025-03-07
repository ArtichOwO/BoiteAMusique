#include <note.h>
#include <music.h>
#include <systick.h>

chord_t LUNE_ch1[] = {
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	// Par exemple, ici une seule note, le do de l'octave 4 est joué comme croche
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, 0 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, 0 },

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, 1 },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, 0 },

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, 0 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, 1 },

	END_NOTE
};

chord_t LUNE_ch2[] = {
	{ 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(RE, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 2) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(RE, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 2) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 2) }, 0 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },
	
	END_NOTE
};

chord_t * LUNE[] = { LUNE_ch1, LUNE_ch2 };
