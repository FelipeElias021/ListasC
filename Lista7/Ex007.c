#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que leia um conjunto de N números inteiros e mostre qual
foi o maior valor fornecido.*/

int main() {
    float num, max;
    int i, n;
    printf("Digite um inteiro de valor para N: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        printf("Escreva um numero: ");
        scanf("%f",&num);
        if (i == 1) {
            max = num;
        } else {
            num > max ? max = num : false;
        }
    }
    system("cls");
    printf("O maior numero e: %.1f",max);

    printf("\n");
    system("PAUSE");
    return 0;
}