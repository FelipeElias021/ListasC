#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que leia o valor de N, determine e imprima o valor de H, dado
pela série a seguir:
H = 1 - 1/2 + 1/3 - 1/4 + ... + 1/N*/

int main() {
    float h=0;
    int i, n;
    printf("Digite um valor de N: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        //Se o i for ímpar ele vai somar, já se for par vai subtrair
        if (i % 2 == 1) {
            h += (1.0/i);
        } else if (i % 2 == 0) {
            h -= (1.0/i);
        }
    }
    printf("\nValor de H: %.3f",h);

    printf("\n");
    system("PAUSE");
    return 0;
}