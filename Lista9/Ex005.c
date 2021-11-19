#include <stdio.h>
/*Escreva um programa que receba uma matriz A 5 x 4 e gere um vetor Mcol de 5
elementos, onde cada um desses elementos seja a média dos elementos de uma linha da
matriz.*/
int main()
{
    int matrizA[5][4], soma = 0;
    float Mcol[5];

    for (int i = 0; i < 5; i++) {
        soma = 0;
        for (int j = 0; j < 4; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%d", &matrizA[i][j]);
            soma += matrizA[i][j];
        }
        Mcol[i] = soma / 4.0;
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("Media linha %d: %.1f\n",i+1, Mcol[i]);
    }

    printf("\n");
    getchar();
    return 0;
}