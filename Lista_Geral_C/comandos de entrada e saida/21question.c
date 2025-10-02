// Escreva um programa que leia o preço de produção de um determinado produto e a
//margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de
// venda.
#include <stdio.h>

int main(){

    float margem, custo, preco_venda;

    printf("Informe o custo do produto: ");
    scanf("%f", &custo);
    printf("Informe a margem de lucro em porcetagem: ");
    scanf("%f", &margem);

    preco_venda = custo * (1 + (margem / 100));

    printf("O produto custa R$ %.2f, com a margem de lucro de %.1f, o preco final e: R$ %.2f", custo, margem, preco_venda);

    return 0;
}