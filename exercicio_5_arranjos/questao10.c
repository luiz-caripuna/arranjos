#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(){
 int x[20], x2[20];
 int i = 0;


 srand(time(NULL));

 //printf("digite 20 valores\n");
 for(int i = 0; i < 20; i++){
    //scanf("%d", &x[i]);
    x[i] = rand()%10;

    if(i == 0 ){
            printf("\nx = {");
        }
        printf("%d", x[i]);
        if(i != 19){
            printf(", ");
        }else{
            printf("}\n\n");
        }
 }
 do{
        int verificador = 0;
        for(int j = 0; j < i; j++){
            if(x[i] == x[j]){
                verificador =1;
            }
        }
        if(verificador == 0){
            printf(" %d ", x[i]); 
        } 
        i++;   
    }while(i < 20);

    return 0;
}