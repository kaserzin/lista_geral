// Escreva um programa que leia o valor de uma passagem em reais e em milhas e, em
//seguida, leia o valor da passagem (em reais) que Caio deseja comprar e calcule quantas
//milhas ele precisa juntar para que ele não precise pagar pela passagem.
#include <stdio.h>

int main(){

    float referencia_real, valor_passagem, taxa,referencia_milha, valor_milha;

    printf("Informe o valor referencial em real: RS ");
    scanf("%f", &referencia_real);
    printf("Informe o valor referencial em milhas: ");
    scanf("%f", &referencia_milha);

    taxa = referencia_real / referencia_milha;

    printf("Informe o valor da passagem: RS ");
    scanf("%f", &valor_passagem);

    valor_milha = valor_passagem / taxa;

    printf("------------ CONVERSAO MILHAS ------------\n");
    printf("Valor da passagem: RS %.2f\n",valor_passagem);
    printf("Taxa: %.2f   |   Milhas: %.0f\n", taxa, valor_milha);

    return 0;
}