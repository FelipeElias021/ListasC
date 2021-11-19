#include <stdio.h>
/*Escreva um programa que leia uma matriz NxM valores reais, determine e imprima o
maior elemento de cada linha da matriz e sua posição na linha*/
int main()
{
    float matriz[3][3], maior[3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%f", &matriz[i][j]);
            if (j == 0) {
                maior[i] = matriz[i][j];
            } else {
                if (matriz[i][j] > maior[i]) {
                    maior[i] = matriz[i][j];
                }
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.1f ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha %d: %.1f\n",i+1,maior[i]);
    }

    printf("\n");
    getchar();
    return 0;
}