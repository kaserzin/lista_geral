//Escreva um programa que leia o número de questões que um candidato acertou, o número de
// questões que ele errou e o número de questões que ele deixou em branco e
// determine a sua pontuação final.
#include <stdio.h>


int main(){

    int questoe_certas, questoes_erradas, questoes_brancas, pontuacao;

    printf("Informe o numero de questoes certas: ");
    scanf("%d",&questoe_certas);
    printf("Informe o numero de questoes erradas: ");
    scanf("%d",&questoes_erradas);
    printf("Informe o numero de questoes em branco: ");
    scanf("%d", &questoes_brancas);
    
    pontuacao = (questoe_certas * 5) - (questoes_erradas * 3);
    int questoes_totais = questoe_certas + questoes_erradas + questoes_brancas;

    printf("De um total de %d questoes.\nO candidato acertou %d, errou %d e deixou %d em branco.\nSendo assim sua pontuacao foi %d",questoes_totais, questoe_certas, questoes_erradas, questoes_brancas, pontuacao);

    return 0;
}