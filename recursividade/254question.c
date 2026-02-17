// Escreva um subprograma recursivo que receba como entrada dois números inteiros x e y e calcule o valor do produto de x por y.
#include <stdio.h>

int multNum(int x, int y){
    if(y == 1) return x;
    return multNum(x, y-1) + x;
}
int main(){
    printf("%d ", multNum(5,3));
}