// Escreva um programa que leia as horas, os minutos e o fuso horário e converta o horário lido para o fuso horário informado.
#include <stdio.h>
#include <conio.h>

int main() {
    int hora, minuto, fuso;
    int novaHora;

    printf("Digite a hora e os minutos: ");
    scanf("%d %d", &hora, &minuto);

    printf("Digite o fuso horario: ");
    scanf("%d", &fuso);

    novaHora = hora + fuso;

    if (novaHora >= 24) {
        novaHora = novaHora % 24;
    }

    if (novaHora < 0) {
        novaHora = 24 + (novaHora % 24);
        if (novaHora == 24)
            novaHora = 0;
    }

    printf("%02d:%02d hs\n", novaHora, minuto);

    getch(); return 0;
}
