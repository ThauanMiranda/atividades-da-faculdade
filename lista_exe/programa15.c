#include<stdio.h>
int main(){

    float G,R,Z;

    Z = 3.14;

    printf("escreva os graus radianos:");
    scanf("%f",&R);

    G = R * 180/Z;

    printf("o valor em graus:%.2f",G);

    return 0;
}