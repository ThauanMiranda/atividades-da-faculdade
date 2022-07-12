#include<stdio.h>
int main(){

    int dias;
    float valor_total, valor, juros_fixo = 0.90;

    printf("quantos dias de atraso?\n");
    scanf("%d",&dias);

    valor = dias * 0.33;

    valor_total = valor * juros_fixo;

    printf("%.2f",valor_total);

    return 0; 

}