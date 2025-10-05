//Escreva um programa que leia um valor em KB e 
// calcule o seu valor correspondente  em bits, bytes, MB e GB.
#include <stdio.h>

int main(){

    int kb, bits, bytes;
    float mb, gb;

    printf("Informe um valor em Quilobytes (KB): ");
    scanf("%d", &kb);

    bits = kb * (1024 * 8);
    bytes = kb * 1024;
    mb = kb / 1024;
    gb = kb / (1024 * 1024);

    printf("%d convertido em bits fica: %d\n%d convertido em bytes fica: %d\n%d convertidos em mb fica: %f\n%d convertido em gb fica: %f",kb, bits, kb, bytes, kb, mb, kb, gb);
    


    return 0;
}