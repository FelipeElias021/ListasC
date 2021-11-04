#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que exiba todos os números pares de 100 a 200, um em
cada linha.*/

int main() {
    for (int i = 100;i <= 200; i += 2){
        printf("%d\n",i);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}