//Escreva um programa que leia três números inteiros distintos e identifique o maior e o menor número lido.
#include <stdio.h>
#include <conio.h>

int main(){

    int num1, num2, num3, maior, menor;
    printf("Informe tres numeros: ");
    scanf("%d%d%d", &num1, &num2,&num3);

    if (num3 > num1 && num3 > num2){
        maior = num3;
    }else if (num1 > num3 && num1 > num2 ){
            maior = num1;
        }else{
            maior = num2;
        }
    if (num3 < num1 && num3 < num2){
        menor = num3;
    }else if (num1 < num3 && num1 < num2 ){
            menor = num1;
        }else{
            menor = num2;
        }

    printf("O menor valor e %d e o maior e %d.\n", menor, maior);
        
    getch();
    return 0;
}