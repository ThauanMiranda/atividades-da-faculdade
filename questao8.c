#include<stdio.h>
int main(){

    int dias;
    float fixo, total;

    fixo= 200.00;

    printf("escreva a quantidades de dias no hotel:");
    scanf("%d",&dias);

    if(dias<15)
    total = fixo + 20.00;
    else
    if(dias==15)
    total = fixo + 14.00;
    if(dias>15)
    total = fixo + 12.00;

    printf("o total a pagar:R$%.2f",total);

    return 0;
}
