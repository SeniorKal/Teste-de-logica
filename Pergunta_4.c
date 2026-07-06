#include <stdio.h>


int numeros[10] = {9,2,3,1,4};

int encontrar_maior(int numeros[], int tamanho){
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    return maior;
}

void completar_intervalo(int numeros[], int novo_tamanho) {
    for (int i = 0; i < novo_tamanho; i++) {
        numeros[i] = i;
    }
}

void printArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main(void){
int maior = encontrar_maior(numeros, 5);
int novo_tamanho= maior + 1;

completar_intervalo(numeros, novo_tamanho);
printArray(numeros, novo_tamanho);
return 0;
}