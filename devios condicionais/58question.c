// Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.
#include <stdio.h>
#include <conio.h>

int main(){

    int numero;

    printf("Informe um valor: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("%d e par.\n",numero);
    }else{
        printf("%d e impar.\n", numero);
    }
    getch();

    return 0;
}