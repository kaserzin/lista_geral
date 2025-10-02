// Escreva um programa que leia dois números inteiros a e b e determine o maior
// múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou
// igual a 50 é 48.
#include <stdio.h>

int main(){

    int a, b, maior;

    printf("Informe o numero A: ");
    scanf("%d", &a);
    printf("Informe o numero B: ");
    scanf("%d", &b);

    maior = b/a;

    printf("O maior multiplo de %d que e menor que %d e %d",a,b,a*maior);

    return 0;
}