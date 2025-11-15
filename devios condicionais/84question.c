//Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela estádentro da faixa de peso adequada, ou se está abaixo ou acima do peso.
#include <stdio.h>
#include <conio.h>
const float IMC_MIN = 18.5;
const int IMC_MAX = 24.9;
int main(){

    float peso, altura, imc;

    printf("Informe o peso e altura: ");
    scanf("%f%f", &peso, &altura);


   imc = peso / (altura * altura);

    if (imc > IMC_MAX){
        float perder = peso-(IMC_MAX * (altura * altura));
        printf("Esta acima, deve perder %.1f Kg. \n", perder);
    }else if (imc < IMC_MIN){
        float ganhar = (IMC_MIN * (altura * altura)) - peso;
        printf("Esta abaixo, precisa ganhar %.1fKg. \n", ganhar);
    }else{
        printf("Peso ideal.\n");
    }


    getch(); return 0;
}