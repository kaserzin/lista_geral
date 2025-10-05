//Com base nestas informações, escreva um programa que leia a quantidade de dados acessados pelo cliente durante
//um mês (em GB) e calcule o valor da sua conta, considerando que esta quantidade
//nunca é inferior a 100 GB.
#include <stdio.h>
const int minimo = 100;

int main(){

    int consumo;
    float valor;
    
    printf("Informe o consumo do mes: ");
    scanf("%d", &consumo);

    valor = 80 + (5 * (consumo - minimo));

    printf("O consumo do mes foi: %d GB\nPlano: %d GB   |  Extra: %d GB.\nValor da conta: RS %.2f\nValor do plano: RS 80.00  |  Valor extra: RS %.2f",consumo, minimo, consumo - minimo, valor, 5.0*(consumo - minimo));

    return 0;
}