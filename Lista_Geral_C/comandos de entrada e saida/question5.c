// Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua  área e o seu comprimento.
#include <stdio.h>

int main(){

    int raio;
    float area, circunferencia;

    printf("Informe o valor do raio em cm: ");
    scanf("%dcm", &raio);

    area = 3.14 * (raio * raio);
    circunferencia = 2 * 3.14 * raio;

    printf("O valor do raio e: %d\nO valor da area e: %.1f\nO valor da circunferencia e: %.1f",raio, area, circunferencia);

    return 0;
}