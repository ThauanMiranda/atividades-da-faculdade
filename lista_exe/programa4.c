#include<stdio.h>
int main(){

    float C,F;

    printf("escreva a temperatura em graus C:");
    scanf("%f",&C);
    
    F = C*(9.0/5.0)+32.0;

    printf("a temperatura em graus F e : %.1f",F);

    return 0;
}