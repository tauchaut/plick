#include "src/addons/vector/vector.h"

static void _vector_resize(vector_t *this, size_t new_capacity) {
    if (!this) {
        return;
        // TODO: e
    }
    void **new_data = realloc(this->data, new_capacity);
    if (!new_data) {
        return;
        // TODO: e
    }
    this->data = new_data;
    this->capacity = new_capacity;
}

vector_t *vector_new(void) {
    vector_t *this = malloc(sizeof(vector_t));
    if (!this) {
        return NULL;
        // TODO: e
    }
    this->data = NULL;
    this->size = 0;
    this->capacity = 1;
    return this;
}

void vector_push(vector_t *this, void *value) {
    if (!this) {
        return;
        // TODO: e
    }
    if (!value) {
        return;
        // TODO: e
    }
    if (this->size >= this->capacity) {
        _vector_resize(this, this->capacity * 2);
    }
    this->data[this->size++] = value;
}

void *vector_get(vector_t *this, size_t index) {
    if (!this) {
        return NULL;
        // TODO: e
    }
    if (index >= this->size) {
        return NULL;
        // TODO: e
    }
    return this->data[index];
}

void vector_free(vector_t *this) {
    if (!this) {
        return;
        // TODO: e
    }
    if (this->data) {
        free(this->data);
    }
    free(this);
}
