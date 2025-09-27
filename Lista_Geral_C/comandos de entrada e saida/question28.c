//Caso a compra seja paga à vista, a loja oferece um desconto de 10%. Caso a compra seja paga em três
//parcelas no cartão de crédito, o cliente paga o preço original
// Caso a compra seja paga em dez parcelas no cartão de crédito, a loja acrescenta uma taxa de juros de 20% sobre o valor da compra.
#include <stdio.h>

int main(){

    float valor_compra;

    printf("Informe o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Caso voce pague a vista o valor final sera de R$ %.2f\n", valor_compra * 0.8);
    printf("Caso voce pague em 3x no cartão, as 3 parcelas sairao por: R$ %.2f\n", valor_compra/3);
    printf("Caso voce pague em 10x no cartao, as 10 parcelas sairao por: R$ %.2f\n", (valor_compra*1.2)/10);

    return 0;
}