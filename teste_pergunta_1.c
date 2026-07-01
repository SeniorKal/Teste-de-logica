#include <assert.h>
#include <stddef.h>

#include "Pergunta_1.h"

static void verificar_array(const int atual[], const int esperado[], size_t tamanho) {
    for (size_t i = 0; i < tamanho; i++) {
        assert(atual[i] == esperado[i]);
    }
}

static void testar_array_misto(void) {
    int numeros[] = {2, 1, 5, 2, 1, 7};
    const int esperado[] = {1, 1, 2, 5, 2, 7};
    size_t tamanho = sizeof(numeros) / sizeof(numeros[0]);

    mover_uns_para_inicio(numeros, tamanho);
    verificar_array(numeros, esperado, tamanho);
}

static void testar_array_sem_uns(void) {
    int numeros[] = {2, 5, 7};
    const int esperado[] = {2, 5, 7};
    size_t tamanho = sizeof(numeros) / sizeof(numeros[0]);

    mover_uns_para_inicio(numeros, tamanho);
    verificar_array(numeros, esperado, tamanho);
}

static void testar_array_apenas_com_uns(void) {
    int numeros[] = {1, 1, 1};
    const int esperado[] = {1, 1, 1};
    size_t tamanho = sizeof(numeros) / sizeof(numeros[0]);

    mover_uns_para_inicio(numeros, tamanho);
    verificar_array(numeros, esperado, tamanho);
}

int main(void) {
    testar_array_misto();
    testar_array_sem_uns();
    testar_array_apenas_com_uns();

    return 0;
}
