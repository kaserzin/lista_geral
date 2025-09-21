// Escreva um programa que leia três números e seus respectivos pesos e calcule a sua  média ponderada.
#include <stdio.h>

int main(){

    float nota1, nota2, nota3, peso1, peso2, peso3, media;


    printf("Informe a primeira nota e seu peso: ");
    scanf("%f%f", &nota1,&peso1);
    printf("Informe a segunda nota e seu peso: ");
    scanf("%f%f", &nota2, &peso2);
    printf("Informe a terceira nota e seu peso: ");
    scanf("%f%f", &nota3, &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada e: %.1f", media);

    return 0;
}