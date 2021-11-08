#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 10 valores inteiros, armazene-os em um vetor, determine e
imprima a soma dos elementos de índices ímpares. Isto é: vet[1]+vet[3]+vet[5]+...*/

int main() {
    int vetor[10], soma;

    for (int i = 0; i < 10; i++) {
        printf("numero[%d]: ",i);
        scanf("%d", &vetor[i]);
        if(i % 2 ==1) {
            soma += vetor[i];
        }
    }
    printf("\nSoma = %d",soma);

    printf("\n");
    system("PAUSE");
    return 0;
}