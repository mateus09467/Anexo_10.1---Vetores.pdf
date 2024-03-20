#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    double numeros[10];
    int i, qtde_negativos = 0, qtde_positivos = 0;
    double soma_positivos = 0;

    for (i = 0; i < 10; i++) {
        printf("Entre com o número %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            qtde_negativos++;
        } else if (numeros[i] > 0) {
            qtde_positivos++;
            soma_positivos += numeros[i];
        }
    }

    printf("\nQuantidade de números negativos: %d", qtde_negativos);
    printf("\nQuantidade de números positivos: %d", qtde_positivos);
    printf("\nSoma dos números positivos: %.2lf", soma_positivos);

    return 0;
}
