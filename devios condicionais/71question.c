// Escreva um programa que leia três números inteiros distintos e identifique o maior número lido.
#include <stdio.h>
#include <conio.h>

int main(){

    float num1, num2, num3;

    printf("Informe 3 numeros distintos: ");
    scanf("%f%f%f", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("%.1f e o maior numero.\n", num1);
    }else if(num2 > num3 && num2 > num1){
            printf("%.1f e o maior numero.\n", num2);
        }else{
                printf("%.1f e o maior numero.\n", num3);
            }

    getch();
    return 0;
}