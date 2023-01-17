#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    int i, palavras = 1;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ' && frase[i+1] != ' ') {
            palavras++;
        }
    }

    printf("A frase possui %d palavras.\n", palavras);

    return 0;
}
