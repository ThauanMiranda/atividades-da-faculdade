#include<stdio.h>
int main(){

    float L,M;

    printf("escreva um valor em metros cubicos:");
    scanf("%f",&M);

    L = 1000 * M;

    printf("o volume em litros sao:%.0fL",L);

    return 0;
}