#include "src/compiler/lexer/token/token.h"

token_t *token_new(token_type_t type, string_t *source, size_t line, size_t col) {
    if (!source) {
        return NULL;
        // TODO: e
    }
    token_t *this = malloc(sizeof(token_t));
    if (!this) {
        return NULL;
        // TODO: e;
    }
    this->type = type;
    this->source = string_new(source->source);
    this->line = line;
    this->col = col;
    return this;
}

void token_free(token_t *this) {
    if (!this) {
        return;
        // TODO: e
    }
    if (this->source) {
        free(this->source);
    }
    free(this);
}
