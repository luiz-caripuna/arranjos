#include <stdio.h>

int main() {
    int i, j, valores[20], semRepeticao[20];
    int tamanhoValores = 20, tamanhoSemRepeticao = 0;

    printf("Digite 20 valores:\n");
    for (i = 0; i < tamanhoValores; i++) {
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < tamanhoValores; i++) {
        int encontrado = 0;
        for (j = 0; j < tamanhoSemRepeticao; j++) {
            if (semRepeticao[j] == valores[i]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            semRepeticao[tamanhoSemRepeticao] = valores[i];
            tamanhoSemRepeticao++;
        }
    }

    printf("Valores sem repetição: ");
    for (i = 0; i < tamanhoSemRepeticao; i++) {
        printf("%d ", semRepeticao[i]);
    }

    return 0;
}
