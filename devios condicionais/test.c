#include <stdio.h>
#include <conio.h>

int main(){
    int x,result, k = 0;

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    do{
        k += 1;
        result = k * k;
    }while (result < x);

    if(result < x || result > x) printf("%d nao tem raiz exata", x);
    else printf("A raiz de %d eh %d", x , k);


    getch(); return 0;
}