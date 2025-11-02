//Com base nestas informações, escreva um programa que receba como entrada o valor do salário atual de João e o valor que ele deseja juntar
#include <stdio.h>
#include <conio.h>

int main(){

    float salario, juntar;

    printf("Informe o salario de Joao: R$ ");
    scanf("%f", &salario);
    printf("Informe quanto ele quer juntar: R$ ");
    scnaf("%f", &juntar);

    // Calculo de quanto se economiza mensalmente, logo após, o calculo em meses que demoraria para juntar
    float eco_mensal = salario/4.0;
    float mes_juntar = juntar / eco_mensal;
    // Convertendo meses para ano
    int ano_juntou = mes_juntar / 12;
    int mes_juntou = mes_juntar;

    printf("Com salario de R$ %.2f ele guarda R$ %.2f.\n",salario, eco_mensal);
    
    if(ano_juntou == 0){
        printf("Ele demorara %d meses para juntar.\n", mes_juntou);
    }else{
        printf("Ele demorara %d anos e %d meses.\n", ano_juntou, mes_juntou);
    }

    getch();
    return 0;
}