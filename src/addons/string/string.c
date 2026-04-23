#include "src/addons/string/string.h"

static size_t _string_calc_size(const char *source) {
    if (!source) {
        return 0;
        // TODO: e
    }
    size_t size = 0;
    while (source[size] != '\0') {
        size++;
    }
    return size;
}

static void _string_resize(string_t *this, size_t new_capacity) {
    if (!this) {
        return;
        // TODO: e
    }
    char *new_source = realloc(this->source, new_capacity);
    if (!new_source) {
        return;
        // TODO: e
    }
    this->source = new_source;
    this->capacity = new_capacity;
}

string_t *string_new(char *source) {
    if (!source) {
        return NULL;
        // TODO: e
    }
    string_t *this = malloc(sizeof(string_t));
    if (!this) {
        return NULL;
        // TODO: e
    }
    this->source = source;
    this->size = _string_calc_size(source);
    this->capacity = this->size;
    return this;
}

char string_get(string_t *this, size_t index) {
    if (!this) {
        return '\0';
        // TODO: e
    }
    if (index >= this->size) {
        return '\0';
        // TODO: e
    }
    return this->source[index];
}

void string_free(string_t *this) {
    if (!this || !this->source) {
        return;
        // TODO: e
    }
    free(this->source);
    free(this);
}
