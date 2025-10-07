//Escreva um programa que leia dois números e determine se o segundo número é
//menor, igual ou maior que o primeiro.
#include <stdio.h>
#include <conio.h>

int main(){

    int primeiro, segundo;
    printf("Informe dois numero: ");
    scanf("%d%d", &primeiro,&segundo);

    if(primeiro > segundo){

        printf("%d e maior que %d.\n",primeiro,segundo);

    }else if(segundo > primeiro){

        printf("%d e maior que %d.\n",segundo,primeiro);

    }else{

        printf("Os valores sao iguais.\n");

    }
    getch();
    return 0;
}