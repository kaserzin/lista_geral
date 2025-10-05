//Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
//unidade de milhar, da centena, da dezena e da unidade.
#include <stdio.h>

int main(){

    int numero;

    printf("Informe um numero positivo entre 1 e 9999: ");
    scanf("%d", &numero);

    int unidade_milhar = numero / 1000;
    int centena = (numero / 100) % 10;
    int dezena = (numero % 100) / 10;
    int unidade = numero % 10;

    printf("unidade_milhar = %d\n", unidade_milhar);
    printf("centena = %d\n", centena);
    printf("dezena = %d\n", dezena);
    printf("unidade = %d", unidade);

    return 0;
}