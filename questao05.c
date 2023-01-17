#include <stdio.h>

int main(){
    int compra[10],
        revenda[10];
    int a = 1, acima_20 = 0, entre10_20 = 0, menor_10 = 0;
    
    printf("Digite o valor de compra e revenda dos produtos\n");
    for(int i = 0; i < 10; i++){ 
        printf("PRODUTO %d\nCompra: ", a);
        scanf("%d", &compra[i]);
        printf("Revenda: ");
        scanf("%d", &revenda[i]);
        printf("\n");
        a++;
    }
    for(int i = 0; i < 10; i++){
        if(revenda[i]-compra[i] > (compra[i]/100)*20)
            acima_20++;
        if(revenda[i]-compra[i] < (compra[i]/100)*10)
            menor_10++;
        if(revenda[i]-compra[i] > (compra[i]/100)*10 && revenda[i]-compra[i] < (compra[i]/100)*20)
            entre10_20++;
    }
    printf("\nProdutos com mais de 20%% de lucro: %d\n", acima_20);
    printf("Produtos com menos de 10%% de lucro: %d\n", menor_10);
    printf("Produtos com lucro entre 10 e 20%% de lucro: %d\n",entre10_20);
    return 0;
}