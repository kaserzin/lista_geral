//Escreva um programa que leia dois números inteiros e os armazene em duas variáveis
//a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas
//variáveis. O programa deve imprimir os valores das duas variáveis antes e após a
//permutação.
#include <stdio.h>

int main(){

    int a, b, permutacao;

    printf("Informe o valor A: ");
    scanf("%d", &a);
    printf("Informe o valor B: ");
    scanf("%d", &b);

    printf("Antes da permutacao.\nA = %d | B = %d", a, b);
    
    permutacao = a;
    a = b;
    b = permutacao;

    printf("\n\nDepois da permutacao.\nA = %d | B = %d",a ,b);

    return 0;
}