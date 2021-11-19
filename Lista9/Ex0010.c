#include <stdio.h>
/*Agora complete o programa anterior: leia também um vetor Preço[4], contendo o valor de
cada produto comercializado. Seu programa deve determinar e imprimir o valor em reais
(R$) que a empresa tem armazenado em seus 3 depósitos.*/
int main()
{
    int estoque[4][3], total[4] = { };
    float preco[4];

    for (int i = 0; i < 4; i++) {
        printf("\nProduto %d:\n",i+1);
        printf("Preco do produto %d: ",i+1);
        scanf("%f",&preco[i]);
        for (int j = 0; j < 3; j++) {
            printf("D%d: ",j+1);
            scanf("%d", &estoque[i][j]);
            total[i] += estoque[i][j];
        }
    }
    printf("\n");
    printf("Matriz Estoque:\t\t\tVetores\n");
    printf("\tD1\tD2\tD3\tTotal\tValor total\n");
    for (int i = 0; i < 4; i++) {
        printf("Prod%d:\t",i+1);
        for (int j = 0; j < 3; j++) {
            printf("%d\t",estoque[i][j]);
        }
        printf("%d\t",total[i]);
        preco[i] = preco[i] * total[i];
        printf("R$%.2f\t",preco[i]);
        printf("\n");
    }

    printf("\n");
    getchar();
    return 0;
}