#include <stdio.h>

int main() {
    int data[3];
    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &data[0], &data[1], &data[2]);
    printf("Data no formato AAAA/MM/DD: %04d/%02d/%02d\n", data[2], data[1], data[0]);
    return 0;
}
