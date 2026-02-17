//  Escreva um programa que leia o valor de um mês e de um ano e verifique a quantidade de dias do mês informado pelo usuário. 
#include <stdio.h>
#include <conio.h>

int main(){
    int ano, mes;
    printf("Informe o ano e o mes: ");
    scanf("%d%d", &ano, &mes);

    printf("Numero de dias do mes informado foi: ");
    if(((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0)) && (mes == 2)){
        printf("29");
    }
    else if(mes == 2) printf("28");
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) printf("30");
    else printf("31");
}