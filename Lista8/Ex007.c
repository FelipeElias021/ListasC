#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que preencha um vetor com N (N ≤ 20) números inteiros, calcule e
mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números
positivos; o segundo deve conter os números negativos. Cada vetor resultante vai ter, no
máximo, N posições, que poderão não ser completamente utilizadas.*/

int main() {
    int vetor[7] = {}, vetorPos[7], vetorNeg[7];
    
    for (int i = 0; i < 7;i++) {
        printf("Digite o numero %d do primeiro vetor: ",i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] > 0) {
            vetorPos[i] = vetor[i];
            vetorNeg[i] = -1 * vetor[i];
        } else if(vetor[i] < 0) {
            vetorPos[i] = -1 *vetor[i];
            vetorNeg[i] = vetor[i];
        }
    }
    printf("\nPositivo\tNegativo\n");
    for (int i = 0; i < 7;i++) {
        printf("%d\t\t%d\n",vetorPos[i],vetorNeg[i]);
    }


    printf("\n");
    system("PAUSE");
    return 0;
}