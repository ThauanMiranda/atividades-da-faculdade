#include<stdio.h>
int main(){

    float KM,MS;

    printf("escreva a velocidade em ms:");
    scanf("%f",&MS);
    
    KM = MS * 3.6;

    printf("a velocidade em km:%.0f",KM);

    return 0;
}