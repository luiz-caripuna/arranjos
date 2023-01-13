#include <stdio.h>

int main()
{
    int a[10], soma = 0;
    float media = 0;
    
    printf("Digite dez valores:\n");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        soma += a[i];
    }
    media = soma / 10;
    
    printf("Soma: %d\nMedia: %.2f\n", soma, media);

    return 0;
}
