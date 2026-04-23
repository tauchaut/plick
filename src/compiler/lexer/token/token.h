#ifndef PLICK_COMPILER_LEXER_TOKEN_H
#define PLICK_COMPILER_LEXER_TOKEN_H

#include <stdlib.h>

#include "src/addons/string/string.h"
#include "src/compiler/lexer/token/token_type.h"

typedef struct token {
    token_type_t type;
    string_t *source;
    size_t line, col;
} token_t;

token_t *token_new(token_type_t type, string_t *source, size_t line, size_t col);
void token_free(token_t *this);

#endif
