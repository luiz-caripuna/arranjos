#include <stdio.h>
#include <stdlib.h>

int main() {
    char numero[100];
    int numeroInt;

    printf("Digite um número: ");
    scanf("%s", numero);

    numeroInt = atoi(numero);

    printf("Número convertido: %d\n", numeroInt);

    return 0;
}
