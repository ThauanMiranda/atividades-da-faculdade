#include<stdio.h>
int main(){

    float km,ms;

    printf("escreva a velocidade em km\h:");
    scanf("%f",&km);

    ms= km/3.6;

    printf("a velocidade em ms\h:%.1f",ms);

    return 0;

}