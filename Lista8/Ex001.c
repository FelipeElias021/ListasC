#include <stdio.h>
#include <stdlib.h>

/*Gerar um vetor com 10 números da seguinte forma: cada número guardado no vetor será
o valor da sua própria posição no vetor (seu índice) menos 2 (ou seja, Xi = i-2). Mostrar na
tela este vetor.*/

int main() {
    int vetor[10];
    for (int i = 0; i < 10;i++) {
        vetor[i] = i -2;
        printf("%d ",vetor[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}