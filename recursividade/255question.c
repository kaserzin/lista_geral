// Escreva um subprograma recursivo que receba como entrada o termo inicial e a razão de uma progressão aritmética e um número inteiro positivo N e calcule o enésimo termo da progressão.
#include <stdio.h>

int enesimoPA(int termoInicial, int razao, int N){
    if(N == 1){
        return termoInicial;
    }
    return razao + enesimoPA(termoInicial, razao, N-1);
}

int main(){
    printf(" %d", enesimoPA(10,5, 9));
}