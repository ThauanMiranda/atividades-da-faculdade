#include<stdio.h>
int main(){

    float nota1,nota2,nota3,total;

    printf("sua primeira nota:");
    scanf("%f",&nota1);

    printf("sua segunda nota:");
    scanf("%f",&nota2);

    printf("sua nota da avd:");
    scanf("%f",&nota3);

    total = (nota1 + nota2 + nota3) / 3;

    if(total>=6)
    printf("aprovado");

    else
    printf("reprovado");

    return 0;
}