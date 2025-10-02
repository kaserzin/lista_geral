//Com base nestas informações, escreva um programa que leia
//um valor a ser financiado pelo cliente e o número de parcelas desejadas e calcule o
//valor de cada parcela e o valor total que o cliente pagará pelo empréstimo.
#include <stdio.h>

int main(){

    float valor_financiado, valor_final, valor_parcelas;
    int parcelas;

    printf("Informe o valor a ser financiado: ");
    scanf("%f", &valor_financiado);
    printf("Informe a quatidade de parlas (max: 120): ");
    scanf("%d", &parcelas);

    valor_final = valor_financiado * 1.04;
    valor_parcelas = valor_final / parcelas;

    printf("Valor financiado: RS %.2f\nQuantidade de parcelas: %d\nValor de cada parcela: RS %.2f\nValor final: RS %.2f",valor_financiado, parcelas, valor_parcelas, valor_final);

    return 0;
}