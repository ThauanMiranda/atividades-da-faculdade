#include<stdio.h>
#include<string.h>
int main(){

    char nome1[7]="Thauan";
    char nome2[8]="Thauannn";
    int r;

    r = strncmp(nome1,nome2,7);

    printf("%d",r); //compara as strings


    return 0;

}