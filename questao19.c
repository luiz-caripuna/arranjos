#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase); i++) {
        frase[i] = toupper(frase[i]);
    }

    printf("Frase em maiúsculas: %s", frase);

    return 0;
}
