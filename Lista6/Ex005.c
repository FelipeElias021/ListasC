#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa para ler dois números inteiros M e N e, a seguir, verificar
se eles são idênticos. Caso não sejam iguais, solicitar ao usuário que digite
novamente o segundo número até que o digite igual ao primeiro. Imprimir a
quantidade de tentativas que o usuário precisou para digitar os dois números
iguais.*/

int main() {
    int m, n, i;
    printf("Digite um numero: ");
    scanf("%d",&m);
    do {
        printf("Digite o mesmo numero: ");
        scanf("%d",&n);
        i++;
    } while (m != n);
    printf("Tentivas para digitar os 2 numeros iguais: %d", i);
    printf("\n");

    system("PAUSE");
    return 0;
}