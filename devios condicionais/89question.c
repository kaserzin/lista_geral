// Escreva um programa que leia um número inteiro entre 1 e 999 e calcule o seu valor correspondente em algarismos romanos.
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro entre 1 e 999: ");
    scanf("%d", &num);

    if (num < 1 || num > 999) {
        printf("Numero fora do intervalo permitido.\n");
        return 1;
    }

    if (num >= 900) { printf("CM"); num -= 900; }
    else if (num >= 500) { printf("D"); num -= 500; }
    else if (num >= 400) { printf("CD"); num -= 400; }
    else if (num >= 100) {
        while (num >= 100) {
            printf("C");
            num -= 100;
        }
    }

    if (num >= 90) { printf("XC"); num -= 90; }
    else if (num >= 50) { printf("L"); num -= 50; }
    else if (num >= 40) { printf("XL"); num -= 40; }
    else if (num >= 10) {
        while (num >= 10) {
            printf("X");
            num -= 10;
        }
    }

    if (num == 9) { printf("IX"); }
    else if (num >= 5) {
        printf("V");
        num -= 5;
        while (num >= 1) {
            printf("I");
            num -= 1;
        }
    }
    else if (num == 4) { printf("IV"); }
    else {
        while (num >= 1) {
            printf("I");
            num -= 1;
        }
    }

    printf("\n");

    return 0;
}