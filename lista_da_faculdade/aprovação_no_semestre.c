#include<stdio.h>
int main(){ //programa em funcionamento 

    int frequencia;
    float nota1,nota2,avd,media;

    printf("informe a nota da sua primeira prova:");
    scanf("%f",&nota1);

    printf("informe a nota da sua segunda prova:");
    scanf("%f",&nota2);

    printf("informe a nota da sua avd:");
    scanf("%f",&avd);

    printf("informe seu porcentual de frequencia:");
    scanf("%d",&frequencia);

    media = (nota1 + nota2 + avd) /3;

    if(media >= 6 && frequencia>=70)
    printf("aprovado");
    else
    printf("reprovado");

    return 0;
}
