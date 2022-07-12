#include<stdio.h>
int main(){

    float F,C;

    printf("escreva os graus F:");
    scanf("%f",&F);

    C = 5.0 * (F-32.0)/9.0;

    printf("a temperatura em C:%.1f",C);

    return 0;
}