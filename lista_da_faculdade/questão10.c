#include<stdio.h>
int main(){

    float caminhao_fixo,trem_fixo,tsp,total;
    int kg;

    caminhao_fixo = 230.00;
    trem_fixo = 450.00;

    printf("\n escreva quantos km percorido:\n");
    scanf("%d",&kg);

    printf("\n escreva qual transportadora:\n");
    scanf("%d",&tsp);

    if(tsp==1)
    total = kg * caminhao_fixo;
    else
    if(tsp==2)
    total = kg * trem_fixo;

    printf("o valor do transporte vai ser:%.2f",total);

    return 0;  // o resultado esta dando 0

}