#ifndef PLICK_ADDONS_STRING_H
#define PLICK_ADDONS_STRING_H

#include <stdlib.h>

typedef struct string {
    char *source;
    size_t capacity, size;
} string_t;

string_t *string_new(char *source);
char string_get(string_t *this, size_t index);
void string_free(string_t *this);

#endif
