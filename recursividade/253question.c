// Escreva um subprograma recursivo que receba como entrada um número inteiro N positivo e provoque um salto de N linhas na tela do usuário.
#include <stdio.h>

void saltarLinhas(int num){
    if(num != 0){
        printf("\n");
        return saltarLinhas(num - 1);
    }
}

int main(){
    saltarLinhas(10);
}