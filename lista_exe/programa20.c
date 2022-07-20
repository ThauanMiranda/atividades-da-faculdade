#include<stdio.h>
int main(){

    float L,K;

    printf("informe o valor da massa em quilogramas:");
    scanf("%f",&K);

    L = K/0.45;

    printf("o valor da massa em libras sao:%.2f",L);

    return 0;

}