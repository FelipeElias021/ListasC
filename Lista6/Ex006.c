#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Faça um programa que leia o código dos produtos pedidos e as quantidades
desejadas; calcule e mostre o valor a ser pago por produto (preço *
quantidade) e o total do pedido. Considere que o cliente deve informar quando
o pedido deve ser encerrado..*/

int main() {
    int codigo, qtd, qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0;
    float preco, total = 0, precoTotal = 0;
    printf("------------------------------------------------\n");
    printf("                      Menu\n");
    printf("------------------------------------------------\n");
    printf("Produto          |    Codigo  |  Preco(unitario)\n");
    printf("------------------------------------------------\n");
    printf("Cachorro quente  |    1       |  R$1,50\n");
    printf("Hamburguer       |    2       |  R$2,00\n");
    printf("Cheeseburger     |    3       |  R$2,50\n");
    printf("Eggcheeseburguer |    4       |  R$3,00\n");
    printf("Refrigerante     |    5       |  R$1,50\n");
    printf("Finalizar pedido |    6\n");
    do {
        do {
            qtd = 0;
            printf("\n\nCodigo do produto: ");
            scanf("%d",&codigo);
        } while (codigo < 1 || codigo > 6);
        if (codigo == 6) {
            break;
        }

        do {
            printf("Quantidade: ");
            scanf("%d",&qtd);
        } while (qtd < 0);

        switch (codigo) {
            case 1:
                qtd1 += qtd;
                preco = qtd * 1.5;
                if (qtd == 1) {
                    printf("Voce escolheu %d cachorro quente",qtd);
                } else {
                    printf("Voce escolheu %d cachorros quentes",qtd);
                }
                break;
            case 2:
                qtd2 += qtd;
                preco = qtd * 2;
                if (qtd == 1) {
                    printf("Voce escolheu %d hamburguer",qtd);
                } else {
                    printf("Voce escolheu %d hamburgueres",qtd);
                }
                break;
            case 3:
                qtd3 += qtd;
                preco = qtd * 2.5;
                if (qtd == 1) {
                    printf("Voce escolheu %d cheeseburguer",qtd);
                } else {
                    printf("Voce escolheu %d cheesebuguers",qtd);
                }
                break;
            case 4:
                qtd4 += qtd;
                preco = qtd * 3;
                if (qtd == 1) {
                    printf("Voce escolheu %d eggcheeseburguer",qtd);
                } else {
                    printf("Voce escolheu %d eggcheesebuguers",qtd);
                }
                break;
            case 5:
                qtd5 += qtd;
                preco = qtd * 1.5;
                if (qtd == 1) {
                    printf("Voce escolheu %d refrigerante",qtd);
                } else {
                    printf("Voce escolheu %d refrigerantes",qtd);
                }
                break;
        }
        precoTotal += preco;
    } while (codigo != 6);

    system("cls");
    printf("Nota fiscal:\n");
    printf("Codigo | Produto          | Qtd. | Preco\n");
    if (qtd1 > 0) {
        printf("001    | Cachorro quente  | %d    | R$%.2f\n",qtd1, qtd1*1.5);
    }
    if (qtd2 > 0) {
        printf("002    | Hamburguer       | %d    | R$%.2f\n",qtd2, qtd2*2.0);
    }
    if (qtd3 > 0) {
        printf("003    | Cheeseburguer    | %d    | R$%.2f\n",qtd3, qtd3*2.5);
    }
    if (qtd4 > 0) {
        printf("004    | Eggcheeseburguer | %d    | R$%.2f\n",qtd4, qtd4*3.0);
    }
    if (qtd5 > 0) {
        printf("005    | Refrigerante     | %d    | R$%.2f\n",qtd5, qtd5*1.5);
    }
    printf("-----------------------------------------\n");
    printf("Total :                            R$%.2f",precoTotal);
    printf("\n");

    system("PAUSE");
    return 0;
}