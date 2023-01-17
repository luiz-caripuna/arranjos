#include <stdio.h>

int main() {
    char nomes[5][100];
    int i, indice;

    printf("Digite os nomes dos usuários:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: ", i+1);
        scanf("%s", nomes[i]);
    }

    printf("Informe o índice do nome que deseja consultar (1-5): ");
    scanf("%d", &indice);

    if (indice < 1 || indice > 5) {
        printf("Índice inválido\n");
    } else {
        printf("Nome na posição %d: %s\n", indice, nomes[indice-1]);
    }

    return 0;
}
