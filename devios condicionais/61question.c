// Escreva um programa que leia um número inteiro e determine o seu valor absoluto.
#include <stdio.h>
#include <conio.h>

int main(){

    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero < 0){

        printf("O valor absoluto de %d eh %d.\n", numero, numero * -1);

    }else{

        printf("O valor absoluto de %d eh %d.\n", numero, numero);

    }
    getch();


    return 0;
}