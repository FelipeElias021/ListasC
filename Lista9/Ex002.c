#include <stdio.h>
/*Escreva um programa que leia uma matriz A5x6 e um valor X, todos valores reais,
multipliquem a linha 3 da matriz pelo escalar X, armazene o resultado em uma matriz C.
Exiba o resultado na saída.*/
int main()
{
    float matrizA[5][6], matrizC[5][6], x;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%f", &matrizA[i][j]);
        }
    }

    printf("Digite um valor X: ");
    scanf("%f", &x);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 2) {
                matrizC[i][j] = matrizA[i][j] * x;
            } else {
                matrizC[i][j] = matrizA[i][j];
            }
            printf("%.1f ",matrizC[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    getchar();
    return 0;
}