#include <note.h>
#include <music.h>

/*Comment sont écrit les notes ?
	{ nbr_notes_même_temps, (octnote_t []) { OCTNOTE(note, numéro octave) }, duree_note },
 	duree_note, 	soit -1 pour les croches,
  			        soit 0 pour les noires,
     		    	soit 1 pour les blanches,
	(pour des puissances de 2) 
*/
chord_t BRAHMS_ch1[] = {
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , -1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, 0 },
    
    { 1, (octnote_t []) { OCTNOTE(FA, 3) },  1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(DO, 4) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(SI, 3) }, 0 },
    { 0, NULL, -1 }, /* silence */ 
    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },

    /* --- --- --- */

    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },
    
    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, 1 },
    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(SI, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(SI, 3) }, 0 },
    
    /* --- --- --- */
    
    { 1, (octnote_t []) { OCTNOTE(DO, 4) }, 1 },
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(DO, 4) }, 1 },
    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, -1 },
    
    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 0 }, 
    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, 0 },

    /* --- --- --- */

    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, -1 },
    
    { 1, (octnote_t []) { OCTNOTE(DO, 4) }, 1 },
    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 1 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, -1 },
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, -1 },

    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(MI, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 1 },
    { 0, NULL , 0 },
    
    END_NOTE
};
    
chord_t BRAHMS_ch2[] = {
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    /* --- --- --- */

    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(FA, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(SI, 2) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(SI, 2) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(RE, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(FA, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    /* --- --- --- */

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(SI, 2) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    /* --- --- --- */
    
    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(DO, 3) }, 0 },
    { 2, (octnote_t []) { OCTNOTE(MI, 3), OCTNOTE(SOL, 3) }, 0 },
    { 0, NULL , 0 },

    { 1, (octnote_t []) { OCTNOTE(LA, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(SOL, 3) }, 0 },
    { 1, (octnote_t []) { OCTNOTE(FA, 3) }, 0 },

    { 2, (octnote_t []) { OCTNOTE(DO, 3),OCTNOTE(MI, 3) }, 1 },
    { 0, NULL , 0 },

    END_NOTE
};

chord_t * BRAHMS[] = { BRAHMS_ch1, BRAHMS_ch2 };
