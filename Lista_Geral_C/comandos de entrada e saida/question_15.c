// Escreva um programa que leia uma palavra e um número inteiro k e identifique a k-
// ésima letra da palavra informada pelo usuário.
#include <stdio.h>
#include <string.h>

int main(){

    char palavra[30], letra;
    int numero;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero > strlen(palavra)){

        printf("O numero informado e maior que a palavra.");

    }
    else{

        letra = palavra[numero-1];
        printf("A letra na posicao %d da palavra %s e: %c", numero, palavra, letra);

    }

    return 0;
}