#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Seja N um número quadrado perfeito. Se somarmos os números ímpares
consecutivos
(1+3+5+7+9+...) até que esta soma seja igual a N, o número M de termos somados
será igual a raiz quadrada de N.
Exemplo: N = 16
16 = 1 + 3 + 5 + 7
M = 4 termos.
Logo, a raiz quadrada de 16 é 4.
Fazer um programa em C para ler um número inteiro e positivo N e responder se N
é quadrado perfeito. Repita este programa até o usuário digitar -1 para N.*/

int main() {
    int n, m = -1,i = 0, soma = 0;
    printf("Digite um numero: ");
    scanf("%d",&n);
    do {
        m += 2;
        soma += m;
        i++;
    } while (soma < n);
    if (sqrt(n) == i) {
        printf("O numero %d e um quadrado perfeito!",n);
    } else {
        printf("O numero nao e um quadrado perfeito");
    }

    return 0;
}