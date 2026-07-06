#include <assert.h>

#include "Pergunta_4.h"

static void verificar_array(const int atual[], const int esperado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        assert(atual[i] == esperado[i]);
    }
}

static void testar_array_do_enunciado(void) {
    int numeros[10] = {9, 2, 3, 1, 4};
    const int esperado[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maior = encontrar_maior(numeros, 5);
    int novo_tamanho = maior + 1;

    assert(maior == 9);
    completar_intervalo(numeros, novo_tamanho);
    verificar_array(numeros, esperado, novo_tamanho);
}

static void testar_array_completo(void) {
    int numeros[] = {0, 1, 2, 3};
    const int esperado[] = {0, 1, 2, 3};
    int maior = encontrar_maior(numeros, 4);
    int novo_tamanho = maior + 1;

    assert(maior == 3);
    completar_intervalo(numeros, novo_tamanho);
    verificar_array(numeros, esperado, novo_tamanho);
}

static void testar_array_com_um_elemento(void) {
    int numeros[] = {0};
    const int esperado[] = {0};
    int maior = encontrar_maior(numeros, 1);
    int novo_tamanho = maior + 1;

    assert(maior == 0);
    completar_intervalo(numeros, novo_tamanho);
    verificar_array(numeros, esperado, novo_tamanho);
}

static void testar_array_fora_de_ordem(void) {
    int numeros[7] = {6, 2, 5, 1};
    const int esperado[] = {0, 1, 2, 3, 4, 5, 6};
    int maior = encontrar_maior(numeros, 4);
    int novo_tamanho = maior + 1;

    assert(maior == 6);
    completar_intervalo(numeros, novo_tamanho);
    verificar_array(numeros, esperado, novo_tamanho);
}

int main(void) {
    testar_array_do_enunciado();
    testar_array_completo();
    testar_array_com_um_elemento();
    testar_array_fora_de_ordem();

    return 0;
}
