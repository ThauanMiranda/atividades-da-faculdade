#include<stdio.h>
int main(){

    float R,G,Z;

    Z = 3.14;

    printf("escreva um angulo em graus:");
    scanf("%f",&G);

    R = G * Z / 180;

    printf("o valor em graus radianos:%.2f",R);

    return 0;

}