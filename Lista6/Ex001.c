#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Faça um programa que leia números digitados pelo usuário até ele digitar -1
(utilizando um laço “do while”). No final, calcule a média dos números fornecidos*/

int main() {
    int i = 0;
    float num, soma = 0, media = 0;
    do {
        printf("Digite um numero: (-1 para parar) ");
        scanf("%f", &num);
        if (num != -1) {
            i++;
            soma += num;
        }
    } while (num != -1);
    system("cls");
    media = soma / i;
    printf("Media dos numeros: %.2f",media);

    printf("\n");
    system("PAUSE");
    return 0;
}