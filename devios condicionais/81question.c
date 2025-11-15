#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    float x2,y2, raio;

    printf("Informe a coordenada x e y do ponto P: ");
    scanf("%f%f", &x2, &y2);
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    float distancia = (0 - x2)*(0 - x2) + (0 - y2)*(0 - y2);
    float distancia_final = sqrt(distancia);

    if(distancia_final < raio){
        printf("O ponto esta dentro da circunferencia.\n");
    }else{
        printf("O ponto nao esta dentro da circunferencia.\n");        
    }

    getch(); return 0;
}