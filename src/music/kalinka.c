#include <note.h>
#include <music.h>

chord_t KATYUSHA_ch1[] = {
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, 0 },
	{ 0, NULL, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, -1 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, 0 },
	{ 0, NULL, -1 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },

	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },

	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(MI, 3) }, 0 },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, 0 },
	{ 0, NULL, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, 0 },
	{ 0, NULL, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, -1 },

	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SI, 3) }, -1 },

	{ 1, (octnote_t []) { OCTNOTE(LA, 3) }, 1 },

	/* --- --- --- */

	{ 1, (octnote_t []) { OCTNOTE(MI, 4) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 4) }, 0 },

	{ 1, (octnote_t []) { OCTNOTE(SOL, 4) }, 0 },
	{ 1, (octnote_t []) { OCTNOTE(LA, 4) }, -1 },
	{ 1, (octnote_t []) { OCTNOTE(SOL, 4) }, -1 },

	END_NOTE
};

chord_t KATYUSHA_ch2[] = {
	{ 3, (octnote_t []) { 
		OCTNOTE(DO, 1), OCTNOTE(MI, 1), OCTNOTE(LA, 1)
	}, 1 },

	{ 3, (octnote_t []) { 
		OCTNOTE(DO, 1), OCTNOTE(MI, 1), OCTNOTE(LA, 1)
	}, 1 },

	{ 3, (octnote_t []) { 
		OCTNOTE(DO, 1), OCTNOTE(MI, 1), OCTNOTE(LA, 1)
	}, 1 },

	{ 3, (octnote_t []) { 
		OCTNOTE(MI, 1), OCTNOTE(SOLd, 1), OCTNOTE(SI, 1), OCTNOTE(RE, 2)
	}, 1 },

	/* --- --- --- */

	{ 3, (octnote_t []) { 
		OCTNOTE(MI, 1), OCTNOTE(SOLd, 1), OCTNOTE(SI, 1), OCTNOTE(RE, 2)
	}, 1 },

	{ 3, (octnote_t []) { 
		OCTNOTE(MI, 1), OCTNOTE(SOLd, 1), OCTNOTE(SI, 1), OCTNOTE(RE, 2)
	}, 1 },

	{ 3, (octnote_t []) { 
		OCTNOTE(MI, 1), OCTNOTE(SOLd, 1), OCTNOTE(SI, 1), OCTNOTE(RE, 2)
	}, 1 },

	{ 3, (octnote_t []) { 
		OCTNOTE(DO, 1), OCTNOTE(MI, 1), OCTNOTE(LA, 1)
	}, 1 },

	/* --- --- --- */

	{ 3, (octnote_t []) { 
		OCTNOTE(DO, 1), OCTNOTE(MI, 1), OCTNOTE(LA, 1)
	}, 0 },
	{ 3, (octnote_t []) { 
		OCTNOTE(DO, 1), OCTNOTE(LA, 1), OCTNOTE(DO, 2)
	}, 0 },

	{ 3, (octnote_t []) { 
		OCTNOTE(MI, 1), OCTNOTE(SOL, 1), OCTNOTE(DO, 2)
	}, 0 },
	{ 3, (octnote_t []) { 
		OCTNOTE(MI, 1), OCTNOTE(SOL, 1), OCTNOTE(LA, 1), OCTNOTE(DOd, 2)
	}, 0 },

	END_NOTE
};

chord_t * KATYUSHA[] = { KATYUSHA_ch1, KATYUSHA_ch2 };
