// Escreva um programa que leia três  números inteiros e calcule a sua média aritmética
#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("Informe tres notas inteiros em sequencia para que sua media seja calculada: ");
    scanf("%d%d%d", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("As tres notas informadas foram: %d, %d, %d\nA media e: %f", nota1, nota2, nota3, media);

}