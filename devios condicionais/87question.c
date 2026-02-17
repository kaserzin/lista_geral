// Escreva um programa que leia um caractere correspondente ao estado civil de uma pessoa e imprima o estado civil informado por extenso. As opções para o estado civil são: S (solteiro), C (casado), D (divorciado) e V (viúvo).
#include <stdio.h>
#include <conio.h>

int main(){
    char caractere;

    printf("Informe S (solteiro), C (casado), D (divorciado) e V (viuvo): ");
    scanf(" %c", &caractere);

    switch (caractere)
    {
    case 's':
    case 'S': printf("Solteiro \n"); break;
    case 'd':
    case 'D': printf("Divorciado. \n");break;
    case 'v':
    case 'V': printf("Viuvo. \n"); break;
    case 'c':
    case 'C': printf("Casado. \n"); break;    
    default:printf("Valor Invalido. \n");break;
    }
}