#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r, c, i, j;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &r);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    int matriz[r][c];
    srand(time(NULL));

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
