#include <stdio.h>

int main(){
    
    int a[25], b[25], c[50];
    
    for(int i = 0; i < 25; i++){
        a[i] = i + 1;
        b[i] = a[i] * a[i];
    }
    
    
    for(int i = 0, j = 0, k = 1; i < 25; i++){
        c[j] = a[i];
        c[k] = b[i];
        j += 2;
        k += 2;
    } 
    for(int i = 0; i < 25; i++){
        printf("\n\nA: %d  B: %d\n", a[i], b[i]);
    }
    for(int i = 0; i < 50; i++){
        printf(" %d,", c[i]);
        if(i % 2 != 0)
            printf("\n");
    }
   
    return 0;
    
}

