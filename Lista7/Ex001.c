#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que leia o peso de um grupo de N pessoas, determine e
imprima o peso médio do grupo.*/

int main() {
    int i, n;
    float peso, soma = 0, media;
    printf("Numero de pessoas: ");
    scanf("%d",&n);
    for (i = 1;i <= n; i++) {
        printf("Peso (kg): ");
        scanf("%f",&peso);
        soma += peso;
    }
    media = soma/n;
    system("cls");
    printf("Peso Medio: %.2f kg",media);

    printf("\n");
    system("PAUSE");
    return 0;
}