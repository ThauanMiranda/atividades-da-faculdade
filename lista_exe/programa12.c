#include<stdio.h>
int main(){

    float MS, K;

    printf("escreva a distancia em ms:");
    scanf("%f",&MS);

    K = 1.61 * MS;

    printf("a distancia em k:%.2f",K);

    return 0;

}