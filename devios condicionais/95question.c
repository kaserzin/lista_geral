//Escreva um programa que leia quatro números reais e verifique se eles formam, na ordem em que foram digitados, uma progressão aritmética, uma progressão geométrica, os dois tipos de progressão ou nenhum tipo de progressão.
#include <stdio.h>

int main() {
    float a, b, c, d;
    int ehPA = 0, ehPG = 0;

    printf("Digite quatro numeros reais: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if ((b - a == c - b) && (c - b == d - c)) {
        ehPA = 1;
    }

    if (a != 0 && b != 0 && c != 0) {
        if ((b / a == c / b) && (c / b == d / c)) {
            ehPG = 1;
        }
    }

    if (ehPA && ehPG) {
        printf("Forma PA e PG.\n");
    } 
    else if (ehPA) {
        printf("Forma apenas PA.\n");
    } 
    else if (ehPG) {
        printf("Forma apenas PG.\n");
    } 
    else {
        printf("Nao forma PA nem PG.\n");
    }

    getch(); return 0;
}
