#include <stdio.h>
#include <string.h>

int main() {
    char original[100], inverted[100];
    int len, i;

    printf("Digite uma palavra: ");
    scanf("%s", original);

    len = strlen(original);

    for (i = 0; i < len; i++) {
        inverted[i] = original[len-i-1];
    }
    inverted[i] = '\0';

    printf("Palavra invertida: %s", inverted);

    return 0;
}
