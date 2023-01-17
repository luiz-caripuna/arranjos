#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int eqp[10] = {1,2,3,4,5,6,7,8,9,10};
    int qts[10] = {};
    int i = 0, igual;

    srand(time(NULL));

    do{
       qts[i]= 1 + rand()%10;
       igual = 0;

       for(int j = 0; j < i; j++){
            if(qts[i] == qts[j])
                igual = 1;
       }
       if(igual == 0)
            i ++;
    }while(i < 10);

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("\nEQUIPE %d fica com a QUESTAO %d \n ", eqp[i], qts[i]);
    }

    return 0;
}