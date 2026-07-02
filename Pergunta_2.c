#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct No{
    char nome[20];

    struct No* esquerda;
    struct No* direita;
    
}No;

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


No* criar_fruteira (){
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

int buscar_fruta(No* raiz, const char* fruta) {
    if (raiz == NULL) {
        return 0; // Fruta não encontrada
    }
    printf("%s\n", raiz->nome);

    if (strcmp(raiz->nome, fruta) == 0) {
        return 1; // Fruta encontrada
    }

    // Buscar na subárvore esquerda e direita
    return buscar_fruta(raiz->esquerda, fruta) || buscar_fruta(raiz->direita, fruta);
}






int main(void){
char fruta[20];
No* fruteira = criar_fruteira();
printf("Digite o nome da fruta que deseja buscar: ");
scanf("%19s", fruta);

if (buscar_fruta(fruteira, fruta)) {
    printf("A fruta '%s' foi encontrada na fruteira.\n", fruta);
} else {
    printf("A fruta '%s' não foi encontrada na fruteira.\n", fruta);

}
return 0;

}

