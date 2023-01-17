#include <stdio.h>

int main() {
    int r, c, i, j;
    int isIdentity = 1;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &r);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    int matriz[r][c];

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (r != c) {
        printf("A matriz não é identidade pois o número de linhas é diferente do número de colunas\n");
        return 0;
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j && matriz[i][j] != 1) {
                isIdentity = 0;
                break;
            } else if (i != j && matriz[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity) {
        printf("A matriz é identidade\n");
    } else {
        printf("A matriz não é identidade\n");
    }

    return 0;
}
