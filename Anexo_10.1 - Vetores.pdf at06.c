#include <stdio.h>
#include <locale.h>

int main() {
    int numeros[5],i=0;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int quantidadePositivos = 0;
    int quantidadeNegativos = 0;
    int quantidadeInseridos = 0;
setlocale(LC_ALL,"");
    for (i = 0; i < 5; i++) {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &numeros[i]);
        quantidadeInseridos++;

        if (numeros[i] % 2 == 0) {
            quantidadePares++;
        } else {
            quantidadeImpares++;
        }

        if (numeros[i] > 0) {
            quantidadePositivos++;
        } else if (numeros[i] < 0) {
            quantidadeNegativos++;
        }
    }

    printf("\nQuantidade de n�meros pares: %d", quantidadePares);
    printf("\nQuantidade de n�meros �mpares: %d", quantidadeImpares);
    printf("\nQuantidade de n�meros positivos: %d", quantidadePositivos);
    printf("\nQuantidade de n�meros negativos: %d", quantidadeNegativos);
    printf("\nQuantidade de n�meros inseridos: %d", quantidadeInseridos);

    return 0;
}
