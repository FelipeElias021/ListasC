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

    int num;
    printf("Valor númerico entre 0 e 5\n");
    scanf("%d",&num);
    switch (num) {
        case 0:
            printf("ZERO");
        break;
        case 1: 
            printf("UM");
        break;
        case 2: 
            printf("DOIS");
        break;
        case 3: 
            printf("TRÊS");
        break;
        case 4: 
            printf("QUATRO");
        break;
        case 5: 
            printf("CINCO");
        break;
        default:
            printf("Valor Inválido");
    }

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}