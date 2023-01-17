#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[100];
    int cont_par = 0,
        cont_impar = 0,
        soma_par = 0,
        soma_impar = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < 100; i++){
        vet[i] = rand() % 10000;
        
        if(vet[i] % 2 == 0){
             cont_par++;
             soma_par += vet[i];
        }else{
            cont_impar++;
            soma_impar += vet[i];
        }
    }
    for(int i = 0; i < 100; i++){
        printf("%d\n", vet[i]);
    }
    printf("\nNumero de pares: %d\nNumero de impares: %d\nSoma dos pares: %d\nSoma dos impares:%d",cont_par, cont_impar, soma_par, soma_impar);

    return 0;
}