// Escreva um programa que leia uma letra minúscula e imprima a sua letra maiúscula correspondente.
#include <stdio.h>
#include <ctype.h>

int main(){

    char letra;

    printf("Informe uma letra minuscula: ");
    scanf("%s", &letra);

    printf("A letra informada foi : %c", toupper(letra));


    return 0;
}