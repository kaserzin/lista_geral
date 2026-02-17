// Escreva um subprograma recursivo que receba como entrada uma matriz quadrada de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N primeiros números da diagonal principal.
#include <stdio.h>

void numDigPrin(int mat[5][5], int n){
    if(n == 0) return;
    else{
        printf("%d numero: %d\n",n, mat[n-1][n-1]);
        return numDigPrin(mat, n-1);
    }
}

int main(){

    int matriz[5][5] = {
    {1,  2,  3,  4,  5},
    {6,  7,  8,  9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
};
    numDigPrin(matriz,3);

    return 0;
}