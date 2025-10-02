//Escreva um programa que leia o comprimento e a largura de uma cisterna e a
//quantidade de litros que o usuário deseja armazenar na mesma e determine quantos
//metros ele deve encher a cisterna para obter a quantidade de litros desejada.
#include <stdio.h>

int main(){

    int comprimento, largura, litros;

    printf("Informe a largura da cisterna (m): ");
    scanf("%d", &largura);
    printf("Informe o comprimento da cisterna (m): ");
    scanf("%d", &comprimento);
    printf("Informe a quantidade de agua (l): ");
    scanf("%d", &litros);

    // levando em consideração que 1 m³ comportam 1000 L de água, chegamos a formula
    // litros = (altura x comprimento x largura) x 1000
    double altura = (litros/1000.0)/comprimento*largura;
    printf("Para comportar %d litros, com uma base de %d por %d precisamos de %.2f metros de altura. ",litros, largura, comprimento, altura);

    return 0;
}