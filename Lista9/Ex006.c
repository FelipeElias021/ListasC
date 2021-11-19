#include <stdio.h>
#define MATRIZ_QUADRADA 20
/*Escreva um programa que leia uma matriz quadrada de ordem N (N<=20) valores reais, e
divida cada elemento da matriz pelo elemento da diagonal principal da correspondente
linha. Imprima a matriz após a operação no formato de matriz.*/
int main()
{
    float matriz[MATRIZ_QUADRADA][MATRIZ_QUADRADA];

    for (int i = 0; i < MATRIZ_QUADRADA; i++) {
        for (int j = 0; j < MATRIZ_QUADRADA; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < MATRIZ_QUADRADA; i++) {
        for (int j = 0; j < MATRIZ_QUADRADA; j++) {
            printf("%.1f ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < MATRIZ_QUADRADA; i++) {
        for (int j = 0; j < MATRIZ_QUADRADA; j++) {
            if (i != j) {
                matriz[i][j] = matriz[i][j] / matriz[i][i];
            }
            /*se os 2  forem diferentes, vai fazer isso, já que se mexer nas diagonais
            principais, os elementos à direita vão ser sempre dividos por 1*/
        }
    }
    printf("\n");
    for (int i = 0; i < MATRIZ_QUADRADA; i++) {
        for (int j = 0; j < MATRIZ_QUADRADA; j++) {
            if (i == j) {//poderia fazer isso, ou apenas botar como 1
                matriz[i][j] = matriz[i][j] / matriz[i][i];
            }
            printf("%.1f ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    getchar();
    return 0;
}