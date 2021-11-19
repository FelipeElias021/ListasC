#include <stdio.h>
/*Dada uma matriz A de dimensão 5 x 7 gere sua transposta. Imprima a matriz original e a
sua transposta.*/
int main()
{
    int matrizA[5][7];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            printf("matriz[%d][%d]: ",i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n");
    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d ",matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz transposta:\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ",matrizA[j][i]);
        }
        printf("\n");
    }

    printf("\n");
    getchar();
    return 0;
}