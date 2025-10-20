// Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto.
#include <stdio.h>
#include <conio.h>

int main(){

    int ano;

    printf("Informe algum ano: ");
    scanf("%d", &ano);

    if ((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0)){
        printf("%d e bissexto.\n", ano);
    }
    else{
        printf("%d nao e bissexto.\n", ano);
    }
    getch();

    return 0;
}