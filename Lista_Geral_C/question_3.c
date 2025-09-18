// Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o  seu perímetro
#include <stdio.h>

int main(){

    int lado, perimetro, area;
    printf("Informe o valor do lado em cm: ");
    scanf("%dcm", &lado);
    perimetro = lado * 4;
    area = lado * lado;
    printf("O valor do lado informado foi: %dcm\nO valor do perimetro e: %dcm\nO valor da area e: %dcm2", lado, perimetro, area);

}