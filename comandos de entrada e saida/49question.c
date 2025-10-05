//Nesta promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações,
//escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o
//seu preço na promoção.
#include <stdio.h>

int main(){

    float preco_inicial, preco_final;

    printf("Informe o valor do veiculo: RS ");
    scanf("%f", &preco_inicial);

    // Calculo ira se basear no valor inicial + 17% de ICMS pelo valor inicial e + 20% no todo
    // ou seja, preco final = preco inicial x 1.17 x 1.20
    preco_final = (preco_inicial * 1.17) * 1.20;

    printf("O valor final e: RS %.2f\n", preco_final);
    printf("\n--------IMPOSTOS E TAXAS--------");
    printf("\nValor incial: RS %.2f\nICMS: RS %.2f\nIPI: RS %.2f (REMOVIDO) \nLucro: RS %.2f",preco_inicial,preco_inicial *0.17, preco_inicial * 0.20, preco_inicial * 0.20);

    return 0;
}