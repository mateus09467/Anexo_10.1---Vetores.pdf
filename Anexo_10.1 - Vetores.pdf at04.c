#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
    double numeros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Entre com o número %d: ", i + 1);
        scanf("%lf", &numeros[i]);

        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    printf("\nValores do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2lf ", numeros[i]);
    }

    return 0;
}
