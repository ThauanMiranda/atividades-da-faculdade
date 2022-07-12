#include<stdio.h>
int main(){
    int numero,resultado,resto;

    printf("escreva um numero:");
    scanf("%d",&numero);

    resultado = numero / 2;
    resto = numero % 2;

    if(resto == 0 && resultado> 0)
    printf("par positivo");
    else
    if(resto == 0 && resultado<0)
    printf("par negativo");
    else
    if(resto == 1 && resultado>0)
    printf("impar positivo");
    else
    if(resto == 1 && resultado<0)
    printf("impar negativo");

    return 0;
}