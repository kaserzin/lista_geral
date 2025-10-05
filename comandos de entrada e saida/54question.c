//Eescreva um programa que leia o horário em que seu Joaquim saiu de Cajazeiras (horas e minutos) e calcule o horário em que ele
//chegará em cada cidade do itinerário.
#include <stdio.h>
const int entrega = 20;

int main(){

    int hora_saida, minutos_saida, hora_chegada, minutos_chegada;

    printf("Informe as horas que saiu de Cajazeiras: ");
    scanf("%d", &hora_saida);
    printf("Informe os minutos que saiu de Cajazeiras: ");
    scanf("%d", &minutos_saida);

    printf("---------------- HORARIOS CIDADES ----------------\n");
    printf("Cajazeiras PB: %d horas %d minutos.\n", hora_saida, minutos_saida);

    minutos_chegada = (minutos_saida + 50 )% 60;
    hora_chegada = hora_saida + ((minutos_saida + 50) / 60);

    printf("Sousa PB: %d horas %d minutos.\n", hora_chegada, minutos_chegada);

    minutos_saida = minutos_chegada;
    hora_saida = hora_chegada;
    minutos_chegada = (entrega + minutos_saida) % 60;
    hora_chegada = hora_saida + 2 + ((minutos_saida + entrega) / 60);

    printf("Patos PB: %d horas %d minutos.\n", hora_chegada, minutos_chegada);

    minutos_saida = minutos_chegada;
    hora_saida = hora_chegada;
    minutos_chegada = (entrega + minutos_saida + 30) % 60;
    hora_chegada = hora_saida + 2 + ((minutos_saida + 30 + entrega) / 60);

    printf("Campina Grande PB: %d horas %d minutos.\n", hora_chegada, minutos_chegada);

    minutos_saida = minutos_chegada;
    hora_saida = hora_chegada;
    minutos_chegada = (entrega + minutos_saida) % 60;
    hora_chegada = hora_saida + 2 + ((minutos_saida + entrega) / 60);

    printf("Joao Pessoa: %d horas %d minutos.\n", hora_chegada, minutos_chegada);

    return 0;
}