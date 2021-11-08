#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Escreva um programa que determine o maior elemento de um vetor e o coloque
na última posição do mesmo.*/

int main() {
    int vetor[10], maior, index_maior;

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        vetor[i] = 1 + rand() % 100;
        printf("%d ",vetor[i]);
        if (i == 0) {
            maior = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
                index_maior = i;
            }
        }
    }

    vetor[index_maior] = vetor[9];
    vetor[9] = maior;

    printf("\nMaior elemento: %d\n",maior);

    for (int i = 0; i < 10; i++) {
        printf("%d ",vetor[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}