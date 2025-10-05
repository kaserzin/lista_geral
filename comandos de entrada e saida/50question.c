//Com base nestas informações, escreva um programa que leia um número inteiro correspondendo à hora e outro correspondendo
//aos minutos em que Ana chegou ao consultório e o número da senha que ela recebeu
//e determine a hora em que ela será atendida.
#include <stdio.h>
const int atendimento = 25;

int main(){

    int hora_chegada, minuto_chegada, hora_atendimento, minuto_atendimento, ficha, tempo, tempo_atendimento;

    printf("Informe a hora que chegou: ");
    scanf("%d", &hora_chegada);
    printf("Infome os minutos que chegou: ");
    scanf("%d", &minuto_chegada);
    printf("Numero da ficha: ");
    scanf("%d", &ficha);

    // obtendo tempo que ela chegou em minutos
    tempo = hora_chegada * 60 + minuto_chegada;
    // tempo do atendimento se da pelo tempo que ja se passou (tempo) com o acressimo do numero da 
    // ficha - 1 (pois a ficha 1 ja esta em atendimento) vezes o tempo que dura o atendimento
    tempo_atendimento = tempo + ((ficha - 1) * atendimento);
    hora_atendimento = tempo_atendimento / 60;
    minuto_atendimento = tempo_atendimento % 60;

    printf("------------ CONTROLE FICHAS ------------\n");
    printf("Horario de chegada: %d horas e %d minutos\n", hora_chegada, minuto_chegada);
    printf("Numero da ficha: %d | Possui: %d na frente\n", ficha, ficha - 1);
    printf("Horario previsto para atendimento: %d horas e %d minutos.\n", hora_atendimento, hora_chegada);
    printf("Tempo de espera aproximado: %d horas e %d minutos.\n", hora_atendimento - hora_chegada, minuto_atendimento - minuto_chegada);


    return 0;
}