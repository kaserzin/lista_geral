//Escreva um subprograma recursivo que receba como entrada um número inteiro não negativo e calcule o seu fatorial.
#include <stdio.h>

int fatorial(int num){
    if(num == 0) return 1;
    return num * fatorial(num-1);
}
int main(){
    printf("%d", fatorial(5));
}