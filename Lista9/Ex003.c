#include <stdio.h>
/*Elaborar um programa que leia uma matriz A de dimensão 5 x 7 de inteiros e verifique qual
é seu maior elemento e imprima-o juntamente com sua posição na matriz (linha e coluna).*/
int main()
{
    int matrizA[5][7], maior, linha_maior, coluna_maior;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%d", &matrizA[i][j]);
            if (i == 0 && j == 0) {
                maior = matrizA[i][j];
                linha_maior = i;
                coluna_maior = j;
            } else {
                if (matrizA[i][j] > maior) {
                    maior = matrizA[i][j];
                    linha_maior = i;
                    coluna_maior = j;
                }
            }
        }
    }

    printf("Maior Matriz:\n[%d][%d]: %d",linha_maior,coluna_maior,maior);

    printf("\n");
    getchar();
    return 0;
}