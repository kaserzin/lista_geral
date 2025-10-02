//Escreva um programa que leia um valor em segundos e converta para a forma X horas
//Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10
// segundos.
#include <stdio.h>


int main(){

    int tempo;

    printf("Informe o tempo em segundos (s): ");
    scanf("%d", &tempo);

    // 1 hora equivale a 3600 segundos
    int horas = tempo / 3600;
    // O resto da divisao que separa as horas do tempo total, convertida em minutos
    int minutos =  (tempo % 3600) / 60;
    // Como as horas e minutos sao mutiplos de 60, o que sobrar serao os segundos
    int segundos = tempo % 60;
    
    printf("%d segundos convertidos ficam:\n%d horas %d minutos e %d segundos", tempo, horas, minutos, segundos);

    return 0;
}