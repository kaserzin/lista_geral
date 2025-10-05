//escreva um programa que leia um número inteiro positivo que corresponde à posição de Carlos na
//fila e determine o número do guichê no qual ele será atendido e o tempo que ele vai
//ter que esperar para ser atendido.
#include <stdio.h>
const int chekin = 15;

int main(){

    int posicao, guiche, tempo, calc;

    printf("Informe a posicao: ");
    scanf("%d", &posicao);

    // Os guiches atendem 5 de uma vez, logo usamos mod de 5
    // Diminuise 1 da posicao para calcular o mod corretamento, caso fosse 5 a posicao o mod daria 0
    // Ex: (5-1) % 5 = 4 e no final acresentamos +1
    guiche = ((posicao - 1) % 5) + 1;
    calc = (posicao - 1) / 5;
    tempo = calc * chekin;

    printf("---------------- CHEKIN ----------------\n");
    printf("Posicao: %d  |  Guiche: %d  |  Espera: %d minutos",posicao, guiche, tempo);

    return 0;
}