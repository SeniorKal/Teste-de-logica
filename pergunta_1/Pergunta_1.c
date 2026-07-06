#include <stdio.h>

#include "Pergunta_1.h"

void mover_uns_para_inicio(int numeros[], size_t tamanho) {
    size_t proxima_posicao = 0;

    for (size_t i = 0; i < tamanho; i++) {
        if (numeros[i] == 1) {
            int temp = numeros[i];

            /* Abre espaço sem trocar a ordem dos elementos anteriores. */
            for (size_t j = i; j > proxima_posicao; j--) {
                numeros[j] = numeros[j - 1];
            }

            numeros[proxima_posicao] = temp;
            proxima_posicao++;
        }
    }
}

void imprimir_numeros(const int numeros[], size_t tamanho) {
    for (size_t i = 0; i < tamanho; i++) {
        printf("%d\n", numeros[i]);
    }
}

#ifndef TESTE
int main(void) {
    int numeros[] = {2, 1, 5, 2, 5, 2, 1, 1, 1, 7, 9, 13, 127, 21};
    size_t tamanho = sizeof(numeros) / sizeof(numeros[0]);

    mover_uns_para_inicio(numeros, tamanho);
    imprimir_numeros(numeros, tamanho);

    return 0;
}
#endif
