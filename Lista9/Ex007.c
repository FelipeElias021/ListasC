#include <stdio.h>
/*Escreva um algoritmo que leia uma matriz A de dimensão 4 x 4 de valores reais, calcule e
imprima a soma dos elementos da diagonal secundária. Coloque os elementos da diagonal
secundária em um vetor S.*/
int main()
{
    float matrizA[4][4], vetorS[4], soma=0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%f", &matrizA[i][j]);
            if (i + j == 3) {//Aparentemente, em uma matriz 4x4 a linha e coluna somada dá 3
                vetorS[i] = matrizA[i][j];
                soma += vetorS[i];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.1f ",matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Elementos da diagonal secudaria: ");
    for (int i = 0; i < 4; i++) {
        printf("%.1f ",vetorS[i]);
    }
    printf("\nSoma: %.1f",soma);

    printf("\n");
    getchar();
    return 0;
}