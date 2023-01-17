#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(){
    srand(time(NULL));
    int x[20],
        y[20];

for(int i = 0; i < 20; i++){
    x[i] = rand() % 100;
    
    if(i == 0 ){
        printf("\nx = {");
    }
    printf("%d", x[i]);

    if(i != 19){
        printf(", ");
    }else{
       printf("}\n");
    }      
}
for(int i = 0; i < 20; i++){
    y[i] = x[19 - i];
    
    if(i == 0 ){
        printf("\ny = {");
    }
    printf("%d", y[i]);

    if(i != 19){
        printf(", ");
    }else{
       printf("}\n");
    }      
}

    return 0;
}