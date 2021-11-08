#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Construa um algoritmo que gere um vetor de 50 elementos reais, da seguinte forma: a
primeira e a última posição com o valor 100 e as demais posições do vetor deverão ser
preenchidas com a soma do quadrado do índice do elemento anterior e a raiz quadrada do
índice do elemento seguinte. Ao final imprima o vetor gerado. Os elementos serão: 
100, 0^2 + sqrt(2), 1^2 + sqrt(3), 2^2 + sqrt(4), 100*/

int main() {
    float vetor[50];

    for (int i = 0; i < 50; i++) {
        if (i == 0 || i == 49) {
            vetor[i] = 100;
        } else {
            vetor[i] = pow(i - 1.0 , 2) + sqrt(i + 1);
        }
        printf("vetor[%d]: %f\n",i,vetor[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}