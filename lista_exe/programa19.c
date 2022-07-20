#include<stdio.h>
int main(){

    float M,L;

    printf("escreva o valor em litros:");
    scanf("%f",&L);

    M = L / 1000;

    printf("o valor em metros cubicos:%.1f",M);

    return 0;
}