// Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
// por cada metro quadrado de um projeto arquitetônico e calcule o custo final do
// projeto.
#include <stdio.h>

int main(){

    int largura, comprimento;
    float valor;

    printf("Informe a largura do terreno: ");
    scanf("%d", &largura);
    printf("Informe o comprimeno do terreno: ");
    scanf("%d", &comprimento);

    valor = (largura * comprimento) * 300;

    printf("O terreno de %d vale: R$ %.2f", largura * comprimento, valor);

    return 0;
}