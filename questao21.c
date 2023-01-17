#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][100], pesquisa[100];
    int i, achou = 0;

    printf("Digite os nomes dos usuários:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: ", i+1);
        scanf("%s", nomes[i]);
    }

    printf("Informe o nome que deseja pesquisar: ");
    scanf("%s", pesquisa);

    for (i = 0; i < 5; i++) {
        if (strcmp(nomes[i], pesquisa) == 0) {
            achou = 1;
            break;
        }
    }

    if (achou) {
        printf("O nome %s está na lista.\n", pesquisa);
    } else {
        printf("O nome %s não está na lista.\n", pesquisa);
    }

    return 0;
}
