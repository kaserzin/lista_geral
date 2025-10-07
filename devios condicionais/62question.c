//Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo de M.
#include <stdio.h>
#include <conio.h>

int main(){

    int n,m;

    printf("Informe N e M: ");
    scanf("%d%d",&n,&m);

    if(m % n == 0){

        printf("%d e mutiplo de %d.\n",n,m);

    }else{

        printf("%d nao e mutiplo de %d.\n",n,m);
    
    }
    getch();

    return 0;
}