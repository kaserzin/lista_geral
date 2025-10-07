// Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou neutro.
#include <stdio.h>
#include <conio.h>

int main(){

    int numero;

    printf("Informe um numero: ");  
    scanf("%d", &numero);

    if (numero < 0){
        printf("%d e negativo.\n",numero);
    }else if ( numero == 0){
        printf("%d e nulo.\n",numero);
    }else{
        printf("%d e positivo.\n",numero);
    }
    getch();

    return 0;
}