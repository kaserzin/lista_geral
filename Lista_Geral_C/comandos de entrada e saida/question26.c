// Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão
// participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada
// dupla e o peso e a altura média de todos os jogadores do torneio.
#include <stdio.h>

int main() {
    float peso1, altura1, peso2, altura2; 
    float peso3, altura3, peso4, altura4; 
    float peso5, altura5, peso6, altura6; 
    float peso7, altura7, peso8, altura8; 


    printf("Digite o peso do atleta 1 (kg): ");
    scanf("%f", &peso1);
    printf("Digite a altura do atleta 1 (m): ");
    scanf("%f", &altura1);

    printf("Digite o peso do atleta 2 (kg): ");
    scanf("%f", &peso2);
    printf("Digite a altura do atleta 2 (m): ");
    scanf("%f", &altura2);

    printf("Digite o peso do atleta 3 (kg): ");
    scanf("%f", &peso3);
    printf("Digite a altura do atleta 3 (m): ");
    scanf("%f", &altura3);

    printf("Digite o peso do atleta 4 (kg): ");
    scanf("%f", &peso4);
    printf("Digite a altura do atleta 4 (m): ");
    scanf("%f", &altura4);

    printf("Digite o peso do atleta 5 (kg): ");
    scanf("%f", &peso5);
    printf("Digite a altura do atleta 5 (m): ");
    scanf("%f", &altura5);

    printf("Digite o peso do atleta 6 (kg): ");
    scanf("%f", &peso6);
    printf("Digite a altura do atleta 6 (m): ");
    scanf("%f", &altura6);

    printf("Digite o peso do atleta 7 (kg): ");
    scanf("%f", &peso7);
    printf("Digite a altura do atleta 7 (m): ");
    scanf("%f", &altura7);

    printf("Digite o peso do atleta 8 (kg): ");
    scanf("%f", &peso8);
    printf("Digite a altura do atleta 8 (m): ");
    scanf("%f", &altura8);


    float media_peso_d1 = (peso1 + peso2) / 2.0;
    float media_altura_d1 = (altura1 + altura2) / 2.0;

    float media_peso_d2 = (peso3 + peso4) / 2.0;
    float media_altura_d2 = (altura3 + altura4) / 2.0;

    float media_peso_d3 = (peso5 + peso6) / 2.0;
    float media_altura_d3 = (altura5 + altura6) / 2.0;

    float media_peso_d4 = (peso7 + peso8) / 2.0;
    float media_altura_d4 = (altura7 + altura8) / 2.0;


    float media_peso_geral = (peso1 + peso2 + peso3 + peso4 + peso5 + peso6 + peso7 + peso8) / 8.0;
    float media_altura_geral = (altura1 + altura2 + altura3 + altura4 + altura5 + altura6 + altura7 + altura8) / 8.0;

    printf("Dupla 1: peso medio = %.2f kg, altura media = %.2f m\n", media_peso_d1, media_altura_d1);
    printf("Dupla 2: peso medio = %.2f kg, altura media = %.2f m\n", media_peso_d2, media_altura_d2);
    printf("Dupla 3: peso medio = %.2f kg, altura media = %.2f m\n", media_peso_d3, media_altura_d3);
    printf("Dupla 4: peso medio = %.2f kg, altura media = %.2f m\n", media_peso_d4, media_altura_d4);

    printf("\nMedia geral do torneio: peso = %.2f kg, altura = %.2f m\n",media_peso_geral, media_altura_geral);

    return 0;
}
