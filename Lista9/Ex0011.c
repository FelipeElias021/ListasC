#include <stdio.h>
/*Aproveite ainda o programa do exercício anterior para determinar e imprimir qual o
depósito que tem menor quantidade de mercadoria. Para isto, gere o vetor Deposito, com
3 elementos, cada um sendo o total de mercadoria de um depósito e, determine o de
menor quantidade.*/
int main()
{
    int estoque[4][3], total[4] = { }, deposito[3] = {}, deposito_menor, I_deposito_menor;
    float preco[4];

    for (int i = 0; i < 4; i++) {
        printf("\nProduto %d:\n",i+1);
        printf("Preco do produto %d: ",i+1);
        scanf("%f",&preco[i]);
        for (int j = 0; j < 3; j++) {
            printf("D%d: ",j+1);
            scanf("%d", &estoque[i][j]);
            total[i] += estoque[i][j];
            deposito[j] += estoque[i][j];
        }
        preco[i] = preco[i] * total[i];
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
        printf("R$%.2f\t",preco[i]);
        printf("\n");
    }
    printf("\n");
    printf("Deposito com menor quantidade: ");
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            deposito_menor = deposito[i];
            I_deposito_menor = i+1;
        } else {
            if (deposito[i] < deposito_menor) {
                deposito_menor = deposito[i];
                I_deposito_menor = i+1;
            }
        }
    }
    printf("Deposito %d, com %d unidades",I_deposito_menor,deposito_menor);

    printf("\n");
    getchar();
    return 0;
}