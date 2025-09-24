// Escreva um programa que leia uma palavra e calcule o seu comprimento. 
 #include <stdio.h>
 #include <string.h>

 int main(){

    char palavra[30];
    int tamanho;
    
    printf("Informe uma palavra: ");
    scanf("%s",palavra);

    tamanho = strlen(palavra);

    printf("%s tem %d letras", palavra, tamanho);


    return 0;
 }