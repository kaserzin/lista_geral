//Escreva um programa que leia os coeficientes a, b e c de uma equação do 2o grau e verifique a quantidade de raízes reais da equação.
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int a, b ,c, delta;

    printf("Informe A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    delta = pow(b,2) - (4*a*c);

    if (delta > 0){
        printf("Existem duas raizes reais.\n");
    }else if(delta == 0){
            printf("Existe uma raiz real.\n");
        }else{
                printf("Nao existe raizes reais.\n");
            }
    getch();
    return 0;
}