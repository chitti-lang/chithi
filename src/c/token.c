#include "chithi/token.h"
#include "chithi/memory.h"

void tokens_init(Tokens* tk){
    tk->tokens = NULL;
    tk->size = 0;
    tk->capacity = 0;
}

void tokens_append(Tokens* tk, Token token){
    if(tk->capacity <= tk->size){
        tk->capacity = GROW_CAPACITY(tk->capacity);
        tk->tokens = GROW_ARRAY(Token, tk->tokens, tk->capacity);
    }

    tk->tokens[tk->size++] = token;
}

void tokens_free(Tokens* tk){
    free(tk->tokens);
    tokens_init(tk);
}
