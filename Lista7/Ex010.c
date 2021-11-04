#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um algoritmo que leia um conjunto de N números inteiros e mostre qual
foi o maior e o menor e o maior valor fornecido.*/

int main() {
    float num, max, min;
    int i, n;
    printf("Digite um inteiro de valor para N: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        printf("Escreva um numero: ");
        scanf("%f",&num);
        if (i == 1) {
            max = num;
            min = num;
        } else {
            num > max ? max = num : false;
            num < min ? min = num : false;
        }
    }
    system("cls");
    printf("O maior numero e: %.1f",max);
    printf("\nO menor numero e: %.1f",min);

    printf("\n");
    system("PAUSE");
    return 0;
}