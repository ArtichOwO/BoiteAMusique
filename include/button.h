#ifndef BUTTON_H
#define BUTTON_H

#include <stdbool.h>

typedef enum {
	BUTTON_NO = 0,
	BUTTON_1,
	BUTTON_2,
	BUTTON_LONG
} button_t;

void button_init(void);
button_t check_button(void);
bool is_released(void);

#endif
