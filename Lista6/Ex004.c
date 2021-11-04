#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que apresente quatro opções: (a) consulta saldo, (b) saque e
(c)depósito e (d) sair. O saldo deve iniciar em R$ 0,00. A cada saque ou depósito o
valor do saldo deve ser atualizado.*/

int main() {
    char opcao;
    float saldo, transacao;
    do {
        printf("\n\nOpcoes:\n(a) Consultar saldo\n(b) Saque\n(c) Depositar\n(d) Sair\n(e) Limpar tela\n> ");
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
                printf("Digite uma opcao valida");
        }
    } while (opcao != 'd');
    printf("\n");

    system("PAUSE");
    return 0;
}