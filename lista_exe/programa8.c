#include<stdio.h>
int  main(){

    float C,K;

    printf("escreva a temperatura em graus celsius:");
    scanf("%f",&C);

    K= C + 273.15;

    printf("a temperatura em graus kelvin:%.1f",K);

    return 0;
}