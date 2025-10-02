// Escreva um programa que leia um valor em real, a cotação atual do dólar e 
// calcule o  valor informado pelo usuário em dólares.
#include <stdio.h>

int main(){

    float real, cotacao, valor_final;

    printf("Informe o valor em real: ");
    scanf("%f", &real);
    printf("Informe a cotacao atual do dolar: ");
    scanf("%f", &cotacao);
    
    valor_final = real / cotacao;

    printf("%.2f reais a cotacao atual de %.2f fica %.2f dolares.", real, cotacao, valor_final);

    return 0;
}