#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main()
{
    int a[50];
    int maior = INT_MIN, 
        menor = INT_MAX;
    
    srand(time(NULL));
    
    for(int i = 0; i < 50; i++){
        a[i] = rand() % 1000;
        
        if(a[i] > maior)
            maior = a[i];
        if(a[i] < menor)
            menor = a[i];
    }
    for(int i = 0; i < 50; i++){
        printf("%d\n", a[i]);
    }
    printf("\nMenor: %d\nMaior: %d", menor, maior);

    return 0;
}
