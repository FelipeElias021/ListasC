#include <stdio.h>
/*Construa um programa que leia um vetor de nove posições e a partir deste vetor,
preencha uma matriz 3x3 com os mesmos valores. O preenchimento da matriz deve ser
por linha. Ao final, imprima o vetor e a matriz gerada.*/

int main()
{
    int vet[9], mat[3][3], k = 0;

    for (int i = 0; i < 9; i++) {
        printf("vetor[%d]: ",i);
        scanf("%d", &vet[i]);
    }

    printf("\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] = vet[k];
            k++;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    getchar();
    return 0;
}