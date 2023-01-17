#include <stdio.h>

int main() {
    int l, c, i, j;
    int perm = 1;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    int mat[l][c];

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (l != c) {
        printf("A matriz não é de permutação pois o número de linhas é diferente do número de colunas\n");
        return 0;
    }

    for (i = 0; i < l; i++) {
        int umLin = 0;
        int umCol = 0;
        for (j = 0; j < c; j++) {
            if (mat[i][j] == 1) {
                umLin++;
            }
            if (mat[j][i] == 1) {
                umCol++;
            }
        }
        if (umLin != 1 || umCol != 1) {
            perm = 0;
            break;
        }
    }

    if (perm) {
        printf("A matriz é de permutação\n");
    } else {
        printf("A matriz não é de permutação\n");
    }

    return 0;
}
