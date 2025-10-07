//Escreva um programa que leia o número de pessoas que vão participar de um churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
//considere que cada pessoa consome 250 g de carne.
#include <stdio.h>
#include <conio.h>
const float consumo_pessoa =  0.250;


int main(){

    int pessoas;

    printf("Informe a quantidade de pessoa: ");
    scanf("%d", &pessoas);

    printf("A quantidade de carne para %d pessoas sao: %.1f Kg.\n",pessoas, pessoas * consumo_pessoa);
    getch();

    return 0;
}