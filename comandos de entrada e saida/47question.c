//Com base nestas informações, escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
//de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de
//juros que o cliente vai pagar pelo empréstimo.
#include <stdio.h>

int main(){

    float valor_financiado, juros, valor_final, valor_prestacao;

    printf("Informe o valor a ser financiado: ");
    scanf("%f", &valor_financiado);

    valor_prestacao = (valor_financiado / 5) * 1.07;
    // Subitraimos o valor da prestacao com juros, do valor sem juros e mutiplicamos por 4
    juros = (valor_prestacao - (valor_financiado / 5)) * 4;
    valor_final = valor_financiado + juros;

    printf("Valor financiado: RS %.2f\nJuros: RS %.2f\nValor prestacao 1: RS %.2f\nValor prestacao 2 a 5: RS %.2f\nValor final: RS %.2f", valor_financiado, juros, valor_financiado / 5,valor_prestacao, valor_final);

    return 0;
}