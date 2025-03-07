#include <note.h>
#include <music.h>

chord_t ANGES_ch1[] = {
// Couplet 1 : "Les anges dans nos campagnes..."
    { 1, (octnote_t []) { OCTNOTE(SOL, 4) }, -1 }, // Les
    { 1, (octnote_t []) { OCTNOTE(LA, 4) }, -1 },  // an
    { 1, (octnote_t []) { OCTNOTE(SI, 4) }, -1 },  // ges
    { 1, (octnote_t []) { OCTNOTE(DO, 5) }, -1 },  // dans
    { 1, (octnote_t []) { OCTNOTE(SI, 4) }, -1 },  // nos
    { 1, (octnote_t []) { OCTNOTE(LA, 4) }, -1 },  // cam
    { 1, (octnote_t []) { OCTNOTE(SOL, 4) }, -1 }, // pa
    { 1, (octnote_t []) { OCTNOTE(LA, 4) }, 1 },   // gnes

// Refrain : "Gloria, in excelsis Deo..."
    { 1, (octnote_t []) { OCTNOTE(SOL, 4) }, -1 }, // Glo
    { 1, (octnote_t []) { OCTNOTE(LA, 4) }, -1 },  // ria,
    { 1, (octnote_t []) { OCTNOTE(SI, 4) }, -1 },  // in
    { 1, (octnote_t []) { OCTNOTE(DO, 5) }, -1 },  // ex
    { 1, (octnote_t []) { OCTNOTE(SI, 4) }, -1 },  // cel
    { 1, (octnote_t []) { OCTNOTE(LA, 4) }, -1 },  // sis
    { 1, (octnote_t []) { OCTNOTE(SOL, 4) }, -1 }, // De
    { 1, (octnote_t []) { OCTNOTE(LA, 4) }, 1 },   // o,

// Couplet 2 : "Bergers, pour qui cette fête?..."
    { 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 }, // Ber
    { 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 }, // gers,
    { 1, (octnote_t []) { OCTNOTE(MI, 4) }, -1 }, // pour
    { 1, (octnote_t []) { OCTNOTE(RE, 4) }, -1 }, // qui
    { 1, (octnote_t []) { OCTNOTE(DO, 4) }, -1 }, // cette
    { 1, (octnote_t []) { OCTNOTE(SOL, 4) }, -1 }, // fê
    { 1, (octnote_t []) { OCTNOTE(FA, 4) }, -1 }, // te?
    { 1, (octnote_t []) { OCTNOTE(MI, 4) }, 1 },  // 

    END_NOTE
};

chord_t ANGES_ch2[] = {
    END_NOTE
};

chord_t * ANGES[] = { ANGES_ch1, ANGES_ch2 };
