#include<stdio.h>
int main(){

    float M,K;

    printf("escreva a quantidades de km percorrido:");
    scanf("%f",&K);

    M = K / 1.61;

    printf("o valor em milhas:%.2f",M);

    return 0;

}