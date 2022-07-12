#include<stdio.h>
#define TIPO_A 12
#define TIPO_B 9
#define TIPO_C 8
int main(){

    int carro,a,b,c;
    float km_total;
   

    printf("escreva a km rodada:");
    scanf("%f",&km_total);

    printf("escreva o tipo de carro usado:");
    scanf("%d",&carro);


    if(carro==a);
    km_total = km_total * TIPO_A;

    if(carro==b);
    km_total = km_total * TIPO_B;

    if(carro==c);
    km_total = km_total * TIPO_C;

    printf("sao nessecario:%flitros",km_total);


    return 0;
}