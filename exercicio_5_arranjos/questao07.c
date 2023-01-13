#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float a[100];
    float media;
    int acima_media = 0, abaixo_media = 0, na_media = 0;

    srand(time(NULL));

    for(int i = 0; i < 100; i++){
        float x = rand()%200;
        a[i] = x-100;
        media += a[i];
    }
    media = media / 100;
    for(int i = 0; i < 100; i++){
        if(a[i] > media)
            acima_media++;
        if(a[i] < media)
            abaixo_media++;
        if(a[i] == media)
            na_media++;
    }
    for(int i = 0; i < 100; i++){
        printf("\n%.2f", a[i]);
    }
    printf("\nMedia: %.2f\nAcima fa media: %d\nAbaixo da media: %d\nNa media: %d", media, acima_media, abaixo_media, na_media);

    return 0;
}