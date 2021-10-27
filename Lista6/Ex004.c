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

    char opcao;
    float saldo, transacao;
    do {
        printf("\n\nOpções:\n(a) Consultar saldo\n(b) Saque\n(c) Depositar\n(d) Sair\n(e) Limpar tela\n> ");
        scanf(" %c",&opcao);
        switch (opcao) {
            case 'a':
                printf("\tR$ %.2f",saldo);
                break;
            case 'b':
                printf("\tValor: R$ ");
                scanf("%f",&transacao);
                if (transacao > saldo) {
                    printf("Saldo insuficiente, saldo: R$ %.2f!",saldo);
                } else {
                    saldo -= transacao;
                }
                break;
            case 'c':
                printf("\tValor: R$ ");
                scanf("%f",&transacao);
                saldo += transacao;
                break;
            case 'd':
                printf("\tSaindo...");
                break;
            case 'e':
                system("cls");
                break;
            default:
                printf("Digite uma opção válida");
        }
    } while (opcao != 'd');
    printf("\n");

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("PAUSE");
    return 0;
}