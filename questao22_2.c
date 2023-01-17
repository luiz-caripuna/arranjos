#include <stdio.h>

int main() {
    char numero[100];
    int i, numeroInt = 0;

    printf("Digite um número: ");
    scanf("%s", numero);

    for (i = 0; numero[i] != '\0'; i++) {
        numeroInt = numeroInt*10 + (numero[i] - '0');
    }

    printf("Número convertido: %d\n", numeroInt);

    return 0;
}
