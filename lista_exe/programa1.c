#include<stdio.h>
int main(){

    int nu1,nu2,nu3,soma;

    printf("escreva o primeiro numero:");
    scanf("%d",&nu1);

    printf("escreva o valor do segundo numero:");
    scanf("%d",&nu2);

    printf("escreva o terceiro numero:");
    scanf("%d",&nu3);

    soma = nu1 + nu2 + nu3;

    printf("a soma dos tres numero sao:%d",soma);

    return 0;
}