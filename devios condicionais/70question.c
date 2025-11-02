// Escreva um programa que leia os valores dos três lados de um triângulo e o classifique como equilátero, isósceles ou escaleno.
#include <stdio.h>
#include <conio.h>

int main(){
    float lado1, lado2, lado3;

    printf("Informe os lados do triangulo: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if( lado1 == lado2 && lado2 == lado3){
        printf("O triangulo e equilatero.\n");
    }else if( lado1 == lado3 || lado2 == lado1 || lado3 == lado2){
            printf("O triangulo e Isoceles.\n");
        }else{
                printf("O triangulo e escaleno.\n");
            }
        
    getch();

    return 0;
}