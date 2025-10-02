//Escreva um programa que leia individualmente os valores dos quatro dígitos de um
//valor em binário e calcule o seu valor correspondente em decimal.
#include <stdio.h>
#include <math.h>

int main(){

    int binario, num1,num2,num3,num4, decimal;

    printf("Informe os quatro digitos em binario: ");
    scanf("%d", &binario);

    num1 = binario / 1000;
    num2 = (binario / 100) % 10;
    num3 = (binario % 100) / 10;
    num4 = binario % 10;
    
    decimal = (num1*pow(2,3)) + (num2 * pow(2,2)) + (num3 * 2) + num4;

    printf("%d em decimal fica: %d", binario, decimal);

    return 0;
}