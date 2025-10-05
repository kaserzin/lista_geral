// Para resolver este programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da
//obra e que o valor da diária de cada ajudante corresponde à metade do valor da diária
//do pedreiro.
#include <stdio.h>
const int dias = 180;

int main(){

    int numero_pedreiros, numero_ajudantes;
    float valor_pedreiro, gasto_total;

    printf("Informe a quantidade de pedreiros na obra: ");
    scanf("%d", &numero_pedreiros);
    printf("Informe o numero de ajudantes na obra: ");
    scanf("%d", &numero_ajudantes);
    printf("Informe o valor da diaria do pedreiro: RS ");
    scanf("%f", &valor_pedreiro);

    gasto_total = ((numero_pedreiros * valor_pedreiro) + (numero_ajudantes * (valor_pedreiro / 2))) * dias;

    printf("------------------- OBRA -------------------\n");
    printf("Quantidade Pedreiros: %d  |  Quantidade Ajudantes: %d\n",numero_pedreiros, numero_ajudantes);
    printf("Diaria Pedreiro: RS %.2f  |  Diaria Ajudante: RS %.2f\n", valor_pedreiro, valor_pedreiro/2);
    printf("Valor Pedreiro: RS %.2f   |  Valor Ajudante: RS %.2f\n",valor_pedreiro * dias, dias * (valor_pedreiro/2));
    printf("Gasto Total: RS %.2f\n", gasto_total);


    return 0;
}