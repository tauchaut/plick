#ifndef PLICK_ADDONS_STRING_H
#define PLICK_ADDONS_STRING_H

#include <stdlib.h>

typedef struct string {
    char *source;
    size_t capacity, size;
} string_t;

string_t *new_string(char *source);
char get_string(string_t *this, size_t index);
void free_string(string_t *this);

#endif
