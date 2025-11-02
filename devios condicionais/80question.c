//Escreva um programa que leia os coeficientes a, b e c de uma equação do 2o grau e calcule todas as suas raízes reais.
#include <stdio.h>
#include <math.h>

int main(){

    float a, b ,c, delta;

    printf("Informe A, B e C: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = pow(b,2) - (4*a*c);

    if (delta > 0){
        float raiz1, raiz2;
        raiz1 = ((b* -1) - sqrt(delta))/(2*a);
        raiz2 = ((b* -1) + sqrt(delta))/(2*a);
        printf("x1 = %.1f.\nx2 = %.1f.\n",raiz1,raiz2);
    }else if(delta == 0){
            float raiz = (b*-1) / (2*a);
            printf("x1 = %.1f.\n",raiz);
        }else{
                printf("Nao existe raizes reais.\n");
            }
    return 0;
}