#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia dois vetores com 10 números inteiros, cada um,
calcule e mostre um terceiro vetor como sendo a soma dos dois primeiros. */

int main() {
    int vetor1[10], vetor2[10], vetor3[10];

    for (int i = 0; i < 10;i++) {
        printf("Digite o numero %d do primeiro vetor: ",i+1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0;i < 10;i++) {
        printf("Digite o numero %d do segundo vetor: ",i+1);
        scanf("%d", &vetor2[i]);
    }

    system("cls");
    printf("\nVetor 1 + Vetor 2 = Vetor 3\n");
    for (int i = 0;i < 10;i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("%d\t+ %d\t  = %d\n",vetor1[i], vetor2[i], vetor3[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}