// Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu
// reverso.
#include <stdio.h>

int main(){

    int numero, reverso, unidade, dezena, centena;
    printf("Informe o numero (0 a 999): ");
    scanf("%d", &numero);

    centena = (numero / 100) % 10;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    reverso = unidade * 100 + dezena * 10 + centena;

    printf("O valor informado foi: %d\nSeu reverso e: %d", numero, reverso);

    return 0;
}