#include <stdio.h>
#include <stdbool.h>
int array[9] = {1, 15, 2, 7, 2, 5, 7, 1, 4};

bool existe_soma(int numeros[], int tamanho, int x){
 for(int i = 0; i < tamanho; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(numeros[i] + numeros[j] == x){
                return true;
            }
        }
    }
    return false;

}

int main() {
    int numero;
    int tamanho = sizeof(array) / sizeof(array[0]);
    printf("[1, 15, 2, 7, 2, 5, 7, 1, 4]\n");
    printf("Digite um numero para verificar se existe soma de dois elementos que resulta nele: ");
    scanf("%d", &numero);

    int resultado = existe_soma(array, tamanho, numero);
    if (resultado== true) {
        printf("Existe uma combinação que resulta em: %d\n", numero);
    } else {
        printf("Não existe uma combinação que resulta em: %d\n", numero);
    }
    
    return 0;
}