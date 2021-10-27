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

    int dia;
    printf("Dia: ");
    scanf("%d",&dia);
    switch (dia) {
        case 1:
        case 7:
            printf("Fim de semana");
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia útil");
        break;
        default:
            printf("Dia inválido");
    }

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}