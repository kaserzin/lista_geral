// Escreva um programa que leia o valor da distância que João vai percorrer
// durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele
// deverá gastar com combustível durante a viagem.
#include <stdio.h>

int main(){

    int distancia;
    float valor_litro, gasto_total;

    printf("Informe a distancia (km): ");
    scanf("%d",&distancia);
    printf("Informe o preco do litro do combustivel (R$): ");
    scanf("%f", &valor_litro);

    // o carro tem uma autonomia de 14km/l
    gasto_total = (distancia / 14) * valor_litro;

    printf("Percorrendo uma distancia de %d e sabendo que o carro faz 14km/l.\nCom o valor do litro do combustivel em R$ %.2f o gasto total e de R$ %.2f.",distancia, valor_litro, gasto_total);

    return 0;
}