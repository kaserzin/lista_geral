//Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) eaplique o operador lido aos dois operandos, na ordem em que os mesmos foramdigitados.
#include <stdio.h>
#include <conio.h>

int main(){

    char operador;
    int n1, n2;

    printf("Informe um operador: ");
    scanf(" %c", &operador);
    printf("Informe n1 e n2: ");
    scanf("%d%d", &n1, &n2);

    switch (operador)
    {
    case '+':printf("%d + %d = %d", n1, n2, n1+n2);;break;
    case '-':printf("%d - %d = %d", n1, n2, n1-n2);;break;
    case '*':printf("%d * %d = %d", n1, n2, n1*n2);;break;
    case '/':
        if(n2 <= 0){
            printf("Numero invalido.\n");
            break;
        }
        else{
            printf("%d / %d = %d", n1, n2, n1/n2);
            break;
        }
    default:printf("Operador Invalido");break;
    }

    getch(); return 0;
}