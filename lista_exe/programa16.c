#include<stdio.h>
int main(){

    float C,P;

    printf("escreva o comprimento em polegadas:");
    scanf("%f",&P);

    C = P * 2.54;

    printf("o comprimento em centimetros:%.2f",C);

    return 0;

}