#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
setlocale(LC_ALL,"");
    int numeros[6];
    int i;
   
    for (i = 0; i < 6; i++) {
    	 printf("Entre com 6 inteiros positivos e pares: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] <= 0 || numeros[i] % 2 != 0) {
            printf("Por favor, insira um valor válido.\n");
            i--;
        }
    }

    printf("\nValores lidos em ordem inversa:");
    for (i = 5; i >= 0; i--) {
        printf(" %d", numeros[i]);
    }
    printf("\n");

    return 0;
}
