// Escreva um subprograma recursivo que receba como parâmetros de entrada dois números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].
#include <stdio.h>

int somaIntervalo(int M, int N){
    if(M == N) return N;
    return M + somaIntervalo(M+1, N);
}
int main(){
    printf("%d", somaIntervalo(2,5));
}