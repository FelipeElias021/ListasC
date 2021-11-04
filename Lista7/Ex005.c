#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa para calcular e escrever o valor do número π, dado pelos
1000 primeiros termos da série a seguir:
π = 4 – 4/3 + 4/5 – 4/7 + 4/9 – 4/11 +*/

int main() {
    double pi=0;
    float denominador = 1;
    int i;
    for (i = 1; i <= 1000; i++) {
        if (i % 2 == 1) {
            pi += (4/denominador);
        } else if (i % 2 == 0) {
            pi -= (4/denominador);
        }
        denominador += 2;
    }
    printf("PI: %.51lf",pi);

    printf("\n");
    system("PAUSE");
    return 0;
}