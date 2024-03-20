#include <stdio.h>

int main() {
    char nomes[5][20];
    int idades[5];
    int i, qtde = 2;

    for (i = 0; i < qtde; i++) {
        printf("Entre com o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Entre com a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("\nNome e idade de cada pessoa:\n");
    for (i = 0; i < qtde; i++) {
        printf(" Nome:%s - idade:%d\n", nomes[i], idades[i]);
    }

    return 0;
}
