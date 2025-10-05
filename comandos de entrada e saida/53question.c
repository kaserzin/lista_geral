//Escreva um programa que leia o mês e o ano em que um preso começará a cumprir a
//sua pena e o tamanho da pena (em número de anos e número de meses, por exemplo 18 anos e 5 meses) e determine o mês e o ano em que ele terminará de cumprir a sua
//pena. Para resolver esta questão, considere que o ano será sempre maior ou igual a 2000.
#include <stdio.h>
const  int ano_inicial = 2000;

int main(){

    int ano, meses, ano_saida, mes_saida, ano_mes;

    printf("Informe quantos meses de reclusao: ");
    scanf("%d", &meses);
    printf("Informe quantos anos de reclusao: ");
    scanf("%d", &ano);

    ano_mes = meses / 12;
    mes_saida = meses % 12;
    ano_saida = ano_inicial + ano_mes + ano;
    
    printf("------------ DETENTO ------------\n");
    printf("Pena: %d anos e %d meses.\n",ano, meses);
    printf("Saida: %d ano e %d mes.\n",ano_saida, mes_saida);


    return 0;
}