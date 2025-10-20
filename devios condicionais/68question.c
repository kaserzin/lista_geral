//Escreva um programa que leia o valor do salário bruto de um empregado e calcule o seu salário líquido.
#include <stdio.h>
#include <conio.h>

int main(){

    float salario;

    printf("Informe o salario: R$ ");
    scanf("%f", &salario);

    if (salario >= 1903.99 && salario <= 2826.65){
        printf("O salario tera um desconto de 7,5.\n");
        printf("Salario Liquido: R$ %.2f", salario * 0.925);
    } else if(salario > 2826.65 && salario <= 3751.05){
            printf("O salario tera um desconto de 15.\n");
            printf("Salario Liquido: R$ %.2f", salario * 0.85);
        }else if (salario > 3751.05 && salario <= 4664.68){
                printf("O salario tera um desconto de 22,5.\n");
                printf("Salario Liquido: R$ %.2f", salario * 0.775);
            }else if(salario > 4664.68){
                    printf("O salario tera um desconto de 27.\n");
                    printf("Salario Liquido: R$ %.2f", salario * 0.73);
            }       
    else{
        printf("Salario Liquido: R$ %.2f", salario);
    }

    return 0;
}