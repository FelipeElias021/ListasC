#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que calcule e escreva a soma dos 10 primeiros termos da
seguinte série:
1/2 + 2/4 + 3/6 + 4/8 ...*/

int main() {
    int x= 1, y = 2, i;
    float z=0;
    for (i = 1; i <= 10; i++) {
        z += ((float)x/y);
        x++;
        y += 2;
    }
    printf("%.0f",z);

    printf("\n");
    system("PAUSE");
    return 0;
}