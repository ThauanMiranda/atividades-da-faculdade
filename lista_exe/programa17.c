#include<stdio.h>
int main(){

    float P,C;

    printf("escreva o comprimento em centimetros:");
    scanf("%f",&C);

    P = C/2.54;

    printf("o comprimento em polegadas sao:%.2f",P);

    return 0;
}