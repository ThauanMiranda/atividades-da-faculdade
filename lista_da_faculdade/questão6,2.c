#include<stdio.h>
int main(){

    float valor_fixo= 0.75 ,massa, igrediente,total;

    printf("qual o tamanho da sua pizza?\n");
    scanf("%f",&massa);

    massa = massa * 0.01;

    printf("quantos igredientes usados?\n");
    scanf("%f",&igrediente);

    igrediente = igrediente * 0.25;

    total = (valor_fixo + massa + igrediente) * 1.5;

    printf("valor da pizza: %.2fR$",total);

    return 0;

}