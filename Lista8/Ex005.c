#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois vetores de N (N<=20) elementos inteiros. Seu programa
deve informar quantas vezes o elemento da primeira posição do primeiro vetor aparece no
segundo vetor.*/

int main() {
    int vetor1[5] = {}, vetor2[5] = {};
    int cont = 0;

    for (int i = 0; i < 5;i++) {
        printf("Digite o numero %d do primeiro vetor: ",i+1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < 5;i++) {
        printf("Digite o numero %d do segundo vetor: ",i+1);
        scanf("%d", &vetor2[i]);
    }

    system("cls");
    for (int i = 0; i < 5;i++) {
        printf("\n[%d] %d - %d",i,vetor1[i],vetor2[i]);
        if (vetor1[0] == vetor2[i]) {
            cont++;
        }
    }

    printf("\nResultado: %d",cont);

    printf("\n");
    system("PAUSE");
    return 0;
}