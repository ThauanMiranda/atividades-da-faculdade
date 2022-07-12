#include<stdio.h>
int main(){
    int n1,n2,soma;

    printf("escreva o primeiro numero\n");
    scanf("%d",&n1);

    printf("escreva o segundo numero\n");
    scanf("%d",&n2);

    soma = n1 + n2;

    if(soma>50)
    soma = soma + 10;
    
    if(soma<=50)
    soma = soma - 15;
    

    printf("resutado:%d",soma);

}