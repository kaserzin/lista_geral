//Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está aprovado por média
#include <stdio.h>
#include <conio.h>

int main(){

    float nota1, nota2, nota3, media;

    printf("Informe as tres notas do aluno: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    if (media >= 7){
        printf("Aluno aprovado por media. \n");
    }else if (media >= 4){
        float nota_final = (25.0 -( 3.0 * media)) / 2.0;
        printf("Aluno realizara a prova final precisando de %.1f", nota_final);
    }else{
        printf("Aluno reprovado.\n");
    }


    getch(); return 0;
}