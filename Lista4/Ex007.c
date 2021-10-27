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

    int codigo;
    printf("Digite o código do produto: ");
    scanf("%d",&codigo);
    switch (codigo) {
        case 1:
            printf("Alimento não-perecível");
        break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecível");
        break;
        case 5:
        case 6:
            printf("Vestuário");
        break;
        case 7:
            printf("Higiene pessoal");
        break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("Limpeza e utensílios domésticos");
        break;
        default:
            printf("Código inválido");
    }

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}