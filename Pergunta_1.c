#include <stdio.h>

int main() {
    int posicao = 0;
    int numeros[14] = {2, 1, 5, 2, 5, 2, 1, 1, 1, 7, 9, 13, 127, 21};
    for (int i = 0; i < 14; i++) {
        if (numeros[i] == 1) {
            int temp = numeros[i];

        for (int y = i; y > posicao; y--) {
            numeros[y] = numeros[y - 1];
        }

        numeros[posicao] = temp;
        posicao++;
        }
    }
    for (int i = 0; i < 14; i++) {
        printf("%d\n", numeros[i]);
    }
return 0;
}