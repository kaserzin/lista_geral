//Escreva um programa que leia o valor total que um cliente consumiu em um
//restaurante e determine o valor final da sua conta, considerando que o restaurante
//cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.
#include <stdio.h>

int main(){

    float conta;
    
    printf("Informe o valor da conta (R$): ");
    scanf("%f", &conta);

    printf("O valor final da conta e: RS %.2f", (conta * 1.1) + 10);

    return 0;
}