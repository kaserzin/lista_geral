// Escreva um programa que leia um único número entre 10000 e 99999 referente ao número de um deputado estadual e identifique o partido pelo qual ele está concorrendo. 
#include <stdio.h>
#include <conio.h>

int main(){
    int candidato, partido;
    printf("Informe um numero entre 10000 e 99999: ");
    scanf("%d", &candidato);

    partido = candidato / 1000;

    printf("Numero do candidato: %d.\nPertence ao partido: %d ", candidato, partido);
    switch (partido)
    {
    case 13: printf("PT.\n"); break;
    case 14: printf("PTB.\n"); break;
    case 15: printf("PMDB.\n"); break;
    case 25: printf("DEM.\n"); break;
    case 45: printf("PSDB.\n"); break;
    case 65: printf("PCdoB.\n"); break;
    default: printf("Partido nao cadastrado. \n"); break;
    }
    getch(); return 0; 
}