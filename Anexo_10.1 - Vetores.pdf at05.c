#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define size 6

int main() {
    setlocale(LC_ALL, "");
    int numeros[size];
    int i;

    for (i = 0; i < size; i++) {
        printf("Entre com %d inteiros positivos e pares: ", size);
        scanf("%d", &numeros[i]);
        while (numeros[i] <= 0 || numeros[i] % 2 != 0) {
            printf("Por favor, insira um valor válido: ");
            scanf("%d", &numeros[i]);
        }
    }

    printf("\nValores lidos em ordem inversa:");
    for (i = size - 1; i >= 0; i--) {
        printf(" %d", numeros[i]);
    }

    return 0;
}
