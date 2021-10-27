#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
	// Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    int ano, mes, dias;
    int testeBissexto;
    printf("Mês: ");
    scanf("%d",&mes);
    printf("Ano: ");
    scanf("%d",&ano);
    testeBissexto = ano % 4;
    switch (mes) {
        case 2:
            switch(testeBissexto) {
                case 0:
                    printf("O mês tem 29 dias");
                break;
                default:
                    printf("O mês tem 28 dias");
                break;
            }
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês tem 31 dias");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês tem 30 dias");
        break;
        default:
        printf("Não existe mês com esse número");
    }

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}