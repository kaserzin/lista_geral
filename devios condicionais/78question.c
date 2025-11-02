//escreva um programa que leia o preço do litro da gasolina e do álcool e verifique se é melhor abastecer com álcool ou com gasolina.
#include <stdio.h>
#include <conio.h>
const float CONVERSAO = 0.7;

int main(){

    float preco_gasolina, preco_alcool;

    printf("Informe o preco da gasolina: ");
    scanf("%f", &preco_gasolina);
    printf("Informe o preco da alcool: ");
    scanf("%f", &preco_alcool);
    
    preco_gasolina *= CONVERSAO;

    if (preco_gasolina <= preco_alcool){
        printf("Abasteca com gasolina.\n");
    }else{
        printf("Abasteca com alcool.\n");        
    }

    getch();
    return 0;
}