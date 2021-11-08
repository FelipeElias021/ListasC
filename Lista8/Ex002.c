#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba 2 sequencias de 5 valores e gere um vetor com os valores
comuns a ambas as sequencias. Inicialize o vetor resultado com 0's em todas as casas*/

int main() {
    int vetor1[5] = {}, vetor2[5] = {}, vetor3[5] = {}, k = 0;

    for (int i = 0; i < 5;i++) {
        printf("Digite o numero %d da primeira sequencia: ",i+1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0;i < 5;i++) {
        printf("Digite o numero %d da segunda sequencia: ",i+1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            if (vetor1[i] == vetor2[j]) {
                vetor3[k] = vetor1[i];
                k++;
            }
        }
    }
    /*vai primeiro comparar todos os vetores do 2 com o primeiro do 1 e assim por diante, então se for igual
    vai salvar no vetor 3 com index k, q vai ser 0 e quando for adicionando novos valores
    ira incrementar no k.*/


    printf("\nVetor 1\tVetor 2\t|Vetor 3");
    for (int i = 0; i <5; i++) {
        printf("\n%d\t%d\t|%d",vetor1[i], vetor2[i], vetor3[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}