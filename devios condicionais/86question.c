// Escreva um programa que leia um caractere e verifique se o mesmo é uma letra maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores.
#include <stdio.h>
#include <conio.h>

int main(){

    char text;
    int caracter;
    
    printf("Informe um caractere: ");
    scanf(" %c", &text);

    caracter = text;
    if( caracter > 47 && caracter < 58){
        printf("O caractere e um numeral.\n");
    }else if (caracter > 64 && caracter < 91){
        printf("O caractere e uma letra maiuscula. \n");
    }else if(caracter > 96 && caracter < 123){
        printf("O caractere e uma letra minuscula.\n");
    }else{
        printf("Nenhum dos tipos anteriores.\n");
    }
    getch(); return 0;
}