// Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se  o número lido é ou não um palíndromo.
#include <stdio.h>
#include <conio.h>

int main(){
    int numero, unidade, dezena, centena, milhar;
    printf("Informe um numero entre 1000 e 9999: ");
    scanf("%d", &numero);

    milhar = numero / 1000;
    centena = (numero / 100) % 10;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    if( milhar == unidade && centena == dezena) printf("%d eh palindromo.\n", numero);
    else printf("%d nao eh palindromo.\n", numero);
    getch(); return 0;
}