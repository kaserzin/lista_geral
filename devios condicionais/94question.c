// Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. 
#include <stdio.h>
#include <conio.h>

int main() {
    int valor;
    int notas100, notas50, notas20, notas10;

    printf("Digite o valor do saque (maximo 1000): ");
    scanf("%d", &valor);

    if (valor < 0 || valor > 1000) {
        printf("Valor invalido.\n");
        return 0;
    }

    if (valor % 10 != 0) {
        printf("O valor deve ser multiplo de 10.\n");
        return 0;
    }

    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas20 = valor / 20;
    valor = valor % 20;

    notas10 = valor / 10;

    printf("\nCedulas utilizadas:\n");
    if(notas100 != 0) printf("R$ 100: %d\n", notas100);
    if(notas50 != 0) printf("R$ 50 : %d\n", notas50);
    if(notas20 != 0) printf("R$ 20 : %d\n", notas20);
    if(notas10 != 0) printf("R$ 10 : %d\n", notas10);

    return 0;
}
