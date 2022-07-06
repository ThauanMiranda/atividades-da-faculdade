#include<stdio.h>
int main(){
   
    int numero;

    printf("informe um numero\n");
    scanf("%d",&numero);

    if(numero>0)
    printf("positivo\n");
    
    if(numero<0)
    printf("negativo\n");

    if(numero==0)
    printf("zero\n");
    
    return 0;
}