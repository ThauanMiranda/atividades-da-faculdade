#include<stdio.h>
int main(){
    int n1,n2,resultado;

    printf("escreva o primeiro numero:");
    scanf("%d",&n1);

    printf("escreva o segundo numero:");
    scanf("%d",&n2);

    resultado = n1 + n2;

    if(resultado>0 || resultado<0)
    printf("1");
    else

    if(resultado>0 && resultado<0 )
    printf("2");
    else

    if(resultado==0)
    printf("3");

    return 0;
}