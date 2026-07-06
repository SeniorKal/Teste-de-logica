#include <assert.h>
#include <stddef.h>

#include "Pergunta_3.h"

static void testar_combinacao_para_nove(void) {
    int numeros[] = {1, 15, 2, 7, 2, 5, 7, 1, 4};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    assert(existe_soma(numeros, tamanho, 9) == true);
}

static void testar_combinacao_para_vinte(void) {
    int numeros[] = {1, 15, 2, 7, 2, 5, 7, 1, 4};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    assert(existe_soma(numeros, tamanho, 20) == true);
}

static void testar_combinacao_inexistente(void) {
    int numeros[] = {1, 15, 2, 7, 2, 5, 7, 1, 4};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    assert(existe_soma(numeros, tamanho, 100) == false);
}

static void testar_array_vazio(void) {
    assert(existe_soma(NULL, 0, 9) == false);
}

static void testar_array_com_um_elemento(void) {
    int numeros[] = {9};

    assert(existe_soma(numeros, 1, 9) == false);
}

int main(void) {
    testar_combinacao_para_nove();
    testar_combinacao_para_vinte();
    testar_combinacao_inexistente();
    testar_array_vazio();
    testar_array_com_um_elemento();

    return 0;
}
