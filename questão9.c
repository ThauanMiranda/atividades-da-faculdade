#include<stdio.h>
int main(){
    int morango,maca, kg_morango,kg_maca,kg_total;
    float valor_total,valor_morango,valor_maca; 

    printf("quantos kg de morango:");
    scanf("%d",&morango);
    

    printf("quantos kg maca:");
    scanf("%d",&maca);
    


    if(morango<=5){
    morango * 2;
    if(morango>5)
    morango = morango * 1.8;}

    valor_morango = morango;

    if(maca<=5){
    maca * 1.5;
    if(maca>5)
    maca = maca * 1.1;}

    valor_maca = maca;

    if(valor_total>=25){
    valor_total = valor_total * 0.90;}

    if(kg_total>=8){
    kg_total = kg_total * 0.90;}

    kg_morango = morango;

    kg_maca = maca;


    kg_total = kg_morango + kg_maca;

    valor_total = valor_morango + valor_maca;

    printf("o peso da compra foi:%dkg o valor da sua compra foi:R$%.2f",kg_total,valor_total);


    return 0;
}