// Escreva um programa que leia o valor do raio de uma esfera e determine o seu
// volume.
#include <stdio.h>

int main(){

    int raio;

    printf("Informe o raio da esfera em centimetros: ");
    scanf("%d", &raio);
    printf("Com raio de %dcm o volume da esfera e aproximadamente %d πpi", raio, ((raio*raio*raio)*4)/3);

    return 0;
}