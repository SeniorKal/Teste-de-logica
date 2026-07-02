#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Pergunta_2.h"

No* criar_no(const char* nome) {
    No* novo_no = (No*)malloc(sizeof(No));
    if (novo_no == NULL) {
        fprintf(stderr, "Erro ao alocar memória para o nó.\n");
        exit(EXIT_FAILURE);
    }
    strncpy(novo_no->nome, nome, sizeof(novo_no->nome) - 1);
    novo_no->nome[sizeof(novo_no->nome) - 1] = '\0'; 
    novo_no->esquerda = NULL;
    novo_no->direita = NULL;
    return novo_no;
}

No* criar_fruteira(void) {
    No* maca = criar_no("Maçã");
    No* morango = criar_no("Morango");
    No* pera = criar_no("Pera");
    No* goiaba = criar_no("Goiaba");
    No* limao = criar_no("Limão");
    No* abacaxi = criar_no("Abacaxi");
    No* laranja = criar_no("Laranja");
    No* banana = criar_no("Banana");
    No* cebola = criar_no("Cebola");

    maca->esquerda = morango;
    maca->direita = pera;

    morango->esquerda = goiaba;
    morango->direita = limao;

    pera->direita = abacaxi;
    abacaxi->direita = laranja;

    laranja->esquerda = banana;
    laranja->direita = cebola;

    return maca;
}

int buscar_fruta(No* raiz, const char* fruta, char* caminho, size_t tamanho_caminho) {
    if (raiz == NULL) {
        return 0;
    }

    size_t tamanho_usado = strlen(caminho);
    snprintf(
        caminho + tamanho_usado,
        tamanho_caminho - tamanho_usado,
        "%s%s",
        tamanho_usado == 0 ? "" : " -> ",
        raiz->nome
    );

    if (strcmp(raiz->nome, fruta) == 0) {
        return 1;
    }

    if (buscar_fruta(raiz->esquerda, fruta, caminho, tamanho_caminho) ||
        buscar_fruta(raiz->direita, fruta, caminho, tamanho_caminho)) {
        return 1;
    }

    /* Remove o nó atual do caminho ao retroceder na busca. */
    caminho[tamanho_usado] = '\0';
    return 0;
}

#ifndef TESTE
int main(void) {
    char fruta[20];
    char caminho[256] = "";
    No* fruteira = criar_fruteira();

    printf("Digite o nome da fruta que deseja buscar: ");
    scanf("%19s", fruta);

    int encontrada = buscar_fruta(fruteira, fruta, caminho, sizeof(caminho));
    printf("%s\n", encontrada ? caminho : "Fruta não encontrada.");

    return 0;
}
#endif

