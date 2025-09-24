// Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e  
// calcule o valor da hipotenusa.
#include <stdio.h>
#include <math.h>

int main(){

    int cateto_oposto, cateto_adjacente;
    float hipotenusa;

    printf("Informe o valor do cateto oposto: ");
    scanf("%d",&cateto_oposto);
    printf("Informe o valor do cateto adjacente: ");
    scanf("%d",&cateto_adjacente);

    hipotenusa = sqrt(cateto_adjacente * cateto_adjacente + cateto_oposto * cateto_oposto);

    printf("O valor da hipotenusa e: %.1f", hipotenusa);

    return 0;
}