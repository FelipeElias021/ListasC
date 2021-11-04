#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Elabore um programa que calcule N! (Fatorial de N), sendo que o valor inteiro de N
é fornecido pelo usuário. Sabendo que: N! = 1 x 2 x 3 x ... x (N-1) x N e que 0! = 1,
por definição.*/

int main() {
    int fatorial, res = 1;
    printf("Fatorial: ");
    scanf("%d",&fatorial);

    if (fatorial == 0 || fatorial == 1) {
        res = 1;
    } else {
        for (int i = fatorial; i >= 1; i--) {
            res *= i;
            //printf("\n%d\t%d",i, res);
        }
    }
    
    printf("\nResultado: %d",res);

    printf("\n");
    system("PAUSE");
    return 0;
}