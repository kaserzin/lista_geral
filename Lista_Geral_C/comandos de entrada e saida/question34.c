//Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o
//prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses
//seguintes) em que o cliente deve receber o produto. Para resolver este programa,
//considere que cada mês tem exatamente 30 dias.
#include <stdio.h>

int main() {
    int dia_compra, prazo_entrega, dia_entrega, mes_entrega;

    printf("Digite o dia do mes da compra (1 a 30): ");
    scanf("%d", &dia_compra);
    printf("Digite o prazo de entrega em dias: ");
    scanf("%d", &prazo_entrega);

    //Subtraimos 1 do dia da compra pois entendemos que o dia que foi feito a compra nao entra no calculo de dias totais.
    int dias_totais = (dia_compra - 1) + prazo_entrega;
    // O dia da entrega e o resto da divisao de 30 somado a 1 pois se entende que o dia minimo e 1
    // exemplo: Comprei dia 1 e o prazo e 37 dias, o dia de entrega nao seria 7 pois o dia que comprei foi 1
    dia_entrega = (dias_totais % 30) + 1;
    // O mes de entrega e a divisao inteira dos dias totais somado a 1, pois o mes de compra inicial e 1
    // exemplo prazo de 32 dias, a divisao inteira de 32/30 = 1, somado ao mes 1 temos que o mes de entrega e 2
    mes_entrega = 1 + (dias_totais / 30);

    printf("O produto deve ser recebido no dia %d.\nIsso ocorrera no Mes %d.", dia_entrega,mes_entrega);
    return 0;
}