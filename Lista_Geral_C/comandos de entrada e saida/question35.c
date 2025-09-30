//Escreva um programa que leia o valor de uma distância em metros e calcule o seu
//valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
//decímetros e milímetros.
#include <stdio.h>
#include <conio.h>

int main(){

    int metros;

    printf("Informe o valor da distancia em metros (m): ");
    scanf("%d", &metros);

    printf("A distancia informada foi: %d m\nEm milimetros e: %d mm\nEm centimetros e: %d cm\nEm decimetros e: %d dm",metros,metros*1000,metros*100,metros*10);
    printf("\nEm decametros e: %d dam\nEm hectometros e: %d hm\nEm quilometro e: %d km", metros/10, metros/100, metros/1000);
    getch();

    return 0;
}