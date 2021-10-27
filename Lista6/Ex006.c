#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    int codigo, qtd, qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0;
    float preco, total = 0, precoTotal = 0;
    printf("------------------------------------------------\n");
    printf("                      Menu\n");
    printf("------------------------------------------------\n");
    printf("Produto          |    Código  |  Preço(unitário)\n");
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
            printf("\n\nCódigo do produto: ");
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
                    printf("Você escolheu %d cachorro quente",qtd);
                } else {
                    printf("Você escolheu %d cachorros quentes",qtd);
                }
                break;
            case 2:
                qtd2 += qtd;
                preco = qtd * 2;
                if (qtd == 1) {
                    printf("Você escolheu %d hamburguer",qtd);
                } else {
                    printf("Você escolheu %d hambúgueres",qtd);
                }
                break;
            case 3:
                qtd3 += qtd;
                preco = qtd * 2.5;
                if (qtd == 1) {
                    printf("Você escolheu %d cheeseburguer",qtd);
                } else {
                    printf("Você escolheu %d cheesebuguers",qtd);
                }
                break;
            case 4:
                qtd4 += qtd;
                preco = qtd * 3;
                if (qtd == 1) {
                    printf("Você escolheu %d eggcheeseburguer",qtd);
                } else {
                    printf("Você escolheu %d eggcheesebuguers",qtd);
                }
                break;
            case 5:
                qtd5 += qtd;
                preco = qtd * 1.5;
                if (qtd == 1) {
                    printf("Você escolheu %d refrigerante",qtd);
                } else {
                    printf("Você escolheu %d refrigerantes",qtd);
                }
                break;
        }
        precoTotal += preco;
    } while (codigo != 6);

    system("cls");
    printf("Nota fiscal:\n");
    printf("Código | Produto          | Qtd. | Preço\n");
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

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("PAUSE");
    return 0;
}