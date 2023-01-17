#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x[20];

    srand(time(NULL));

    for(int i = 0; i < 20; i++){
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
    for(int i = 0; i < 20; i++){
        int verificador = 1;

        for(int j = 0; j < 20; j++){
            if(x[i] == x[j] && i != j){
                verificador = 0;
            }
        }
        if(verificador == 1){
            printf("%d  ", x[i]);
        }
    }

    return 0;
}