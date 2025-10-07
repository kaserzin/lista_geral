// (0-12anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).
#include <stdio.h>
#include <conio.h>

int main(){

    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade <= 12 && idade >= 0){
        printf("%d anos e considerado crianca.\n", idade);
    }else if (idade >= 13 && idade <= 17){
        printf("%d anos e considerado adolescente.\n", idade);
    }else if (idade >= 18 && idade <=59){
        printf("%d anos e considerado adulto.\n", idade);
    }else if (idade > 60){
        printf("%d anos e considerado idoso.\n", idade);
    }else{
        printf("Idade invalida!\n");
    }
    getch();

    return 0;
}