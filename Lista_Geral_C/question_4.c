// Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, 
// o seu  triplo, o seu quadrado, o seu cubo e a sua raiz quadrada
#include <stdio.h>
#include <math.h>

int main(){

    int numero, dobro, triplo, quadrado, cubo;
    float raiz;
    
    printf("Informe um valor: ");
    scanf("%d", &numero);
    dobro = numero * 2;
    triplo = numero * 3;
    quadrado = numero * numero;
    cubo = numero * numero * numero;
    raiz = sqrt(numero);

    printf("O valor informado foi: %d\nO dobro e %d\nO triplo e %d\nO quadrado e %d\nO cubo e %d\nA raiz e %.1f",numero,dobro,triplo,quadrado,cubo,raiz);

    return 0;
}