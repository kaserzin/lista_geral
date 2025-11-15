//Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número lido por extenso.
#include <stdio.h>
#include <conio.h>

int main(){

    int num;

    printf("Informe um numero de 1 a 10: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:printf("UM \n");break;
    case 2:printf("DOIS \n");break;
    case 3:printf("TRES \n");break;
    case 4:printf("QUATRO \n");break;
    case 5:printf("CINCO \n");break;
    case 6:printf("SEIS \n");break;
    case 7:printf("SETE \n");break;
    case 8:printf("OITO \n");break;
    case 9:printf("NOVE \n");break;
    case 10:printf("DEZ \n");break;
    default:printf("Numero invalido");break;
    }

    getch(); return 0;
}