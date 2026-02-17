#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char verbo[50];
    char radical[50];
    int tamanho;

    printf("Digite um verbo regular no infinitivo: ");
    scanf("%s", verbo);

    tamanho = strlen(verbo);

    // Copia o radical (remove as duas últimas letras)
    strncpy(radical, verbo, tamanho - 2);
    radical[tamanho - 2] = '\0';

    printf("\nPresente do Indicativo:\n");

    if (verbo[tamanho-2] == 'a' && verbo[tamanho-1] == 'r') {

        printf("eu %so\n", radical);
        printf("tu %sas\n", radical);
        printf("ele/ela %sa\n", radical);
        printf("nos %samos\n", radical);
        printf("vos %sais\n", radical);
        printf("eles/elas %sam\n", radical);

        printf("\nPreterito Perfeito:\n");
        printf("eu %sei\n", radical);
        printf("tu %saste\n", radical);
        printf("ele/ela %sou\n", radical);
        printf("nos %samos\n", radical);
        printf("vos %sastes\n", radical);
        printf("eles/elas %saram\n", radical);

        printf("\nFuturo do Presente:\n");
        printf("eu %sarei\n", verbo);
        printf("tu %saras\n", verbo);
        printf("ele/ela %sara\n", verbo);
        printf("nos %saremos\n", verbo);
        printf("vos %sareis\n", verbo);
        printf("eles/elas %sarao\n", verbo);
    }

    else if (verbo[tamanho-2] == 'e' && verbo[tamanho-1] == 'r') {

        printf("eu %so\n", radical);
        printf("tu %ses\n", radical);
        printf("ele/ela %se\n", radical);
        printf("nos %semos\n", radical);
        printf("vos %seis\n", radical);
        printf("eles/elas %sem\n", radical);

        printf("\nPreterito Perfeito:\n");
        printf("eu %si\n", radical);
        printf("tu %seste\n", radical);
        printf("ele/ela %seu\n", radical);
        printf("nos %semos\n", radical);
        printf("vos %sestes\n", radical);
        printf("eles/elas %seram\n", radical);

        printf("\nFuturo do Presente:\n");
        printf("eu %serei\n", verbo);
        printf("tu %seras\n", verbo);
        printf("ele/ela %sera\n", verbo);
        printf("nos %seremos\n", verbo);
        printf("vos %sereis\n", verbo);
        printf("eles/elas %serao\n", verbo);
    }

    else if (verbo[tamanho-2] == 'i' && verbo[tamanho-1] == 'r') {

        printf("eu %so\n", radical);
        printf("tu %ses\n", radical);
        printf("ele/ela %se\n", radical);
        printf("nos %simos\n", radical);
        printf("vos %sis\n", radical);
        printf("eles/elas %sem\n", radical);

        printf("\nPreterito Perfeito:\n");
        printf("eu %si\n", radical);
        printf("tu %siste\n", radical);
        printf("ele/ela %siu\n", radical);
        printf("nos %simos\n", radical);
        printf("vos %sistes\n", radical);
        printf("eles/elas %siram\n", radical);

        printf("\nFuturo do Presente:\n");
        printf("eu %sirei\n", verbo);
        printf("tu %siras\n", verbo);
        printf("ele/ela %sira\n", verbo);
        printf("nos %siremos\n", verbo);
        printf("vos %sireis\n", verbo);
        printf("eles/elas %sirao\n", verbo);
    }

    else {
        printf("Verbo invalido.\n");
    }

    getch(); return 0;
}
