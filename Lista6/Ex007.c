#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Faça um programa que leia dois valores inteiros x e y, e que calcule e mostre a
potência xy
. Obs. Sem utilizar funções de math.h, como a pow().*/


int main() {
    int x, y, pot;
    printf("Base: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &y);
    pot = x;
    do {
        pot = pot * x;
        y--;
    } while (y > 1);
    printf("%d", pot);

    printf("\n");
    system("PAUSE");
    return 0;
}