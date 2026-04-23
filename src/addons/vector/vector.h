#ifndef PLICK_ADDONS_VECTOR_H
#define PLICK_ADDONS_VECTOR_H

#include <stdlib.h>

typedef struct vector {
    void **data;
    size_t capacity, size;
} vector_t;

vector_t *vector_new(void);
void vector_push(vector_t *this, void *value);
void *vector_get(vector_t *this, size_t index);
void vector_free(vector_t *this);

#endif
