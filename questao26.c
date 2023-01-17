#include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    printf("Digite a quantidade de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas da matriz A: ");
    scanf("%d", &p);
    printf("Digite a quantidade de colunas da matriz B: ");
    scanf("%d", &n);

    int matA[m][p], matB[p][n], matC[m][n];

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matC[i][j] = 0;
            for (k = 0; k < p; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    printf("Matriz C resultante da multiplicação de A e B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

