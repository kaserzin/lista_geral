//Escreva um programa que leia os valores dos três ângulos internos de um triângulo e verifique se o mesmo é um triângulo retângulo.
#include <stdio.h> 
#include <conio.h>

int main(){

    int angulo1, angulo2, angulo3;
    printf("Informe tres angulo: ");
    scanf("%d%d%d", &angulo1, &angulo2,&angulo3);
    
    int soma = angulo1 + angulo2 + angulo3;

    if (soma != 180){
        printf("Nao e um triangulo retangulo.\n");
    }else if((angulo1 == 90) || (angulo2 == 90) || (angulo3 == 90)){
            printf("E um triangulo retangulo.\n");
        }else{
                printf("Nao e um triangulo retangulo.\n");
            }
    
    getch();
    return 0;
}