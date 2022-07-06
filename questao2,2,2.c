#include<stdio.h>
int main(){

    int numero,resultado_positivo,resultado_negativo;
    printf("escreva um numero:");
    scanf("%d",&numero);

    resultado_positivo = numero + 1;

    resultado_negativo = numero - 1;

    printf("o numero posterior:%d o numero anterior:%d",resultado_positivo,resultado_negativo);

    return 0;
}