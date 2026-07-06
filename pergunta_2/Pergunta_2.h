#ifndef PERGUNTA_2_H
#define PERGUNTA_2_H

#include <stddef.h>

typedef struct No {
    char nome[20];
    struct No* esquerda;
    struct No* direita;
} No;

No* criar_no(const char* nome);
No* criar_fruteira(void);
int buscar_fruta(No* raiz, const char* fruta, char* caminho, size_t tamanho_caminho);

#endif
