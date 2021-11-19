#include <stdio.h>
/*Escreva um programa que leia uma matriz Estoque[4][3], de valores inteiros, contendo o
estoque em 3 depósitos de cada um dos 4 produtos de uma empresa. Seu programa deve
calcular o total de cada produto e armazenar no vetor Total[4]. Ao final imprimir um mapa
contendo os estoques por depósito (a matriz) e o estoque total de cada produto (o vetor). */
int main()
{
    int estoque[4][3], total[4] = { };

    for (int i = 0; i < 4; i++) {
        printf("\nProduto %d:\n",i+1);
        for (int j = 0; j < 3; j++) {
            printf("D%d: ",j+1);
            scanf("%d", &estoque[i][j]);
            total[i] += estoque[i][j];
        }
    }
    printf("\n");
    printf("Matriz Estoque:\n");
    printf("\tD1\tD2\tD3\n");
    for (int i = 0; i < 4; i++) {
        printf("Prod%d:\t",i+1);
        for (int j = 0; j < 3; j++) {
            printf("%d\t",estoque[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Vetor Total:\n");
    printf("Total:\t");
    for (int i = 0; i < 4; i++) {
        printf("%d\t",total[i]);
    }

    printf("\n");
    getchar();
    return 0;
}