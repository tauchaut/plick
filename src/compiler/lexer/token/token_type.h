#ifndef PLICK_COMPILER_LEXER_TOKEN_TYPE_H
#define PLICK_COMPILER_LEXER_TOKEN_TYPE_H

typedef enum token_type {
    BREAK,
    CASE,
    CONST,
    CONTINUE,
    DEFAULT,
    ELSE,
    FOR,
    FUNC,
    IF,
    IMPORT,
    INTERFACE,
    MAP,
    MODULE,
    PRIVATE,
    RANGE,
    RETURN,
    STRUCT,
    SWITCH,
    TYPE,

    LPAREN, // (
    RPAREN, // )
    LBRACE, // {
    RBRACE, // }
    LBRACK, // [
    RBRACK, // ]
    ARGS, // ...
    RANGE, // ..
    DOT, // .
    MODULE, // ::
    COLON, // :
    SEMICOLON, // ;
    SQUOTE, // '
    DQUOTE, // "

    ASSIGN, // =
    GE, // >=
    LE, // <=
    GT, // >
    LT, // <
    EQ, // ==
    NEQ, // !=
    AND, // &&
    BAND, // &
    OR, // ||
    BOR, // |
    BNOT, // ~
    XOR, // ^
    ADD, // +
    MUL, // *
    SUB, // -
    DIV, // /
    MOD, // %
    PIPE, // |
    NOT, // !
    INC, // ++
    DEC, // --
    AT, // @
    HASH, // #

    TRUE, // true
    FALSE, // false

    IDENTIFIER,
    TYPENAME,
    
    ERROR,
    EOF

} token_type_t;

#endif
