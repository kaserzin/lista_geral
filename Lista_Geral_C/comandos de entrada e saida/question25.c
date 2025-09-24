// Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros
// elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que
// mostra os 5 primeiros elementos da tabuada do 2.
// 1 X 2 = 2
// 2 X 2 = 4
// 3 X 2 = 6
// 4 X 2 = 8
// 5 X 2 = 10
#include <stdio.h>

int main(){

    int numero;
    
    printf("Informe o numero para receber sua tabuada: ");
    scanf("%d", &numero);
    printf("1 X %d = %d\n2 X %d = %d\n3 X %d = %d\n4 X %d = %d\n5 X %d = %d", numero, numero * 1, numero, numero *2, numero, numero *3, numero, numero*4, numero, numero*5);
    printf("\n6 X %d = %d\n7 X %d = %d\n8 X %d = %d\n9 X %d = %d\n10 X %d = %d", numero, numero *6, numero, numero*7, numero, numero*8, numero, numero*9, numero,numero*10);

    return 0;
}