//A Cifra de César é um método de criptografia em que cada letra da mensagem original
//é substituída por outra e a distância entre cada letra original e a sua substituta na
//mensagem enviada é sempre a mesma.
#include <stdio.h>
#include <ctype.h>

int main(){

    char alfabeto[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letra1, letra2, letra3, letra1_cripto,letra2_cripto,letra3_cripto;
    int posicao1,posicao2,posicao3;

    printf("Informe uma letra 1: ");
    scanf(" %c", &letra1);

    letra1 = toupper(letra1);
    // 'A' vale 65, deixando a outra letra maiscula e adicionando 1 conseguimos a posicao exatada dela
    posicao1 = letra1 - 'A' + 1;
    // depois com uma variavel ja com o alfabeto, basta solicitar que a letra criptografado seja retirada da variavel
    // acresentando + 4 para que pulem 5 letras, lembrando do mod 26 para quando passar do Z retornar ao A e continuar a sequencia
    letra1_cripto = alfabeto[(posicao1+4)%26];

    printf("Informe uma letra 2: ");
    scanf(" %c", &letra2);

    letra2 = toupper(letra2);
    posicao2 = letra2 - 'A' + 1;
    letra2_cripto = alfabeto[(posicao2+4)%26];


    printf("Informe a letra 3: ");
    scanf(" %c", &letra3);
    
    letra3 = toupper(letra3);
    posicao3 = letra3 - 'A' + 1;
    letra3_cripto = alfabeto[(posicao3+4)%26];

    printf("-------- CRIPTOGRAFIA --------\n");
    printf("Antes: %c  |  Depois: %c\n", letra1, letra1_cripto);
    printf("Antes: %c  |  Depois: %c\n", letra2, letra2_cripto);
    printf("Antes: %c  |  Depois: %c\n", letra3, letra3_cripto);

    return 0;
}