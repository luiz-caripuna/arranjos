#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int x1[10], x2[20];
    int i = 0,j;

    srand(time(NULL));

    for(int i = 0; i < 10; i ++){
        x1[i] = rand()%30;
        if(i == 0)
            printf("\nx1 = {");
            
        printf("%d", x1[i]);
        
        if(i == 9)
            printf("}\n\n");
        else
            printf(", ");
    }
    for(int i = 0; i < 20; i ++){
        x2[i] = rand()%30;
        if(i == 0)
            printf("\nx2 = {");
            
        printf("%d", x2[i]);
        
        if(i == 19)
            printf("}\n\n");
        else
            printf(", ");  
    }
    printf("\n\n");
    do{
        int bandeira = 0, bandeira2 = 1;
        for (int j = 0; j < 10; j++){
            if(x2[i] == x1[j]){
                bandeira = 1;
            }
            if(x2[i] == x1[j])
                bandeira2 = 0;
        }
        if(bandeira2 == 0){
            printf("%d  ", x2[i]);
            i++;
        }
    }while(i > 20);

    
    return 0;
}