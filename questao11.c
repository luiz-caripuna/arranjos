#include <stdio.h>

int main() {
    int i, j, k, a[10], b[20], common[10];
    int aSize = 10, bSize = 20, commonSize = 0;

    printf("Digite os elementos do primeiro conjunto (tamanho 10):\n");
    for (i = 0; i < aSize; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite os elementos do segundo conjunto (tamanho 20):\n");
    for (i = 0; i < bSize; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < aSize; i++) {
        for (j = 0; j < bSize; j++) {
            if (a[i] == b[j]) {
                int found = 0;
                for (k = 0; k < commonSize; k++) {
                    if (common[k] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    common[commonSize] = a[i];
                    commonSize++;
                }
            }
        }
    }

    if (commonSize == 0) {
        printf("Não há elementos comuns entre os dois conjuntos.\n");
    } else {
        printf("Elementos comuns entre os dois conjuntos:\n");
        for (i = 0; i < commonSize; i++) {
            printf("%d ", common[i]);
        }
    }

    return 0;
}
