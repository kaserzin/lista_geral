// Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um mês do ano e verifique o trimestre a que este mês pertence. 
#include <stdio.h>
#include <conio.h>

int main(){
    int mes;
    printf("Informe o mes (1 a 12): ");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 3) printf("Primeiro timestre.\n");
    else if (mes > 3 && mes <= 6) printf("Segundo timestre.\n");
    else if (mes > 6 && mes <= 9) printf("Terceiro timestre.\n");
    else if (mes > 9 && mes <= 12) printf("Quarto timestre.\n");
    else printf("Valor invalido.\n");
    getch(); return 0;
}