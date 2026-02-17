// Escreva um programa que leia cinco números inteiros e determine o segundo maior número digitado pelo usuário e a ordem em que o mesmo foi digitado.
#include <stdio.h>
#include <conio.h>

int main() {
    int n1, n2, n3, n4, n5;
    int maior, segundo;
    int posMaior = 1, posSegundo = 0;

    printf("Digite cinco numeros inteiros:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n1 > n2) {
        maior = n1;
        segundo = n2;
        posMaior = 1;
        posSegundo = 2;
    } else {
        maior = n2;
        segundo = n1;
        posMaior = 2;
        posSegundo = 1;
    }

    if (n3 > maior) {
        segundo = maior;
        posSegundo = posMaior;
        maior = n3;
        posMaior = 3;
    } else if (n3 > segundo && n3 < maior) {
        segundo = n3;
        posSegundo = 3;
    }

    if (n4 > maior) {
        segundo = maior;
        posSegundo = posMaior;
        maior = n4;
        posMaior = 4;
    } else if (n4 > segundo && n4 < maior) {
        segundo = n4;
        posSegundo = 4;
    }

    if (n5 > maior) {
        segundo = maior;
        posSegundo = posMaior;
        maior = n5;
        posMaior = 5;
    } else if (n5 > segundo && n5 < maior) {
        segundo = n5;
        posSegundo = 5;
    }

    if (segundo == maior) {
        printf("Nao existe segundo maior distinto.\n");
    } else {
        printf("Segundo maior numero: %d\n", segundo);
        printf("Ordem de digitacao: %d\n", posSegundo);
    }

    getch(); return 0;
}
