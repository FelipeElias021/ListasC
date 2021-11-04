#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um algoritmo que calcule e escreva a soma dos dez primeiros termos da
seguinte série:
2/500 – 5/450 + 2/400 – 5/350 + …*/

int main() {
    float soma = 0;
    int i, denominador = 500;
    for (i = 1; i <= 10; i++) {
        i % 2 == 1 ? soma += (2.0/denominador) : false;
        i % 2 == 0 ? soma -= (5.0/denominador) : false;
        //printf("\n%f\t%d",soma, denominador);
        denominador -= 50;
    }
    printf("\n%f",soma);

    printf("\n");
    system("PAUSE");
    return 0;
}