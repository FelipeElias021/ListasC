#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia um vetor de nove elementos inteiros, calcule e mostre os
números ímpares e suas respectivas posições.*/

int main() {
    int vetor[9];

    for (int i = 0; i < 9;i++) {
        printf("Digite o numero %d do vetor: ",i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            vetor[i] = 0;
        }
    }

    printf("\nNumeros impares: \n");
    for (int i = 0; i < 9;i++) {
        if (vetor[i] != 0) {
            printf("vetor[%d]: %d\n",i,vetor[i]);
        }
    }
    /*poderia ter usado um vetor apenas para os ímpares, mas optei por usar apenas um vetor
    e quando o numero digitado fosse par ele já receberia 0 e depois mostraria todos os
    valores menos o 0*/

    printf("\n");
    system("PAUSE");
    return 0;
}