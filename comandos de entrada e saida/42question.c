//Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
//índice de massa corporal.
#include <stdio.h>

int main(){

    float altura, peso;

    printf("Informe a altura (m): ");
    scanf("%f", &altura);
    printf("Informe o peso (kg): ");
    scanf("%f", &peso);

    float imc = peso / (altura * altura);

    printf("O imc e: %.1f", imc);

    return 0;
}