#include<stdio.h>
int main(){
   float diaria_fixa,taxa;
   int quantas_noites;

   diaria_fixa= 200;
   quantas_noites=0;

   printf("informe quantas noites teve no hotel:");
   scanf("%d",&quantas_noites);

    if(quantas_noites<15)
    quantas_noites*20;
   
    if(quantas_noites==15)
    quantas_noites*14;
   
    if(quantas_noites>15)
    quantas_noites*12;
    

    taxa= diaria_fixa + quantas_noites;

    printf("sua despesa final:R$%.2f",taxa);

    return 0;
} 