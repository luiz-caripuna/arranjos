#include <stdio.h>
#include <string.h>

int main() {
    char w[100], iw[100];
    int i, l, p = 1;

    printf("Digite uma palavra: ");
    scanf("%s", w);

    l = strlen(w);

    for (i = 0; i < l; i++) {
        iw[i] = w[l-i-1];
    }
    iw[i] = '\0';

    for (i = 0; i < l; i++) {
        if (w[i] != iw[i]) {
            p = 0;
            break;
        }
    }

    if (p) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}
