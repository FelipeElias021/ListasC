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
    printf("Digite um número: ");
	scanf("%d",&num);
	if (num % 2 == 0) {
		printf("Número divisível por 2\n");
	}
	if (num % 5 == 0) {
		printf("Número divisível por 5\n");
	}
	if (num % 10 == 0) {
		printf("Número divisível por 10\n");
	}
	if (num % 2 != 0 && num % 5 != 0 && num % 10 != 0) {
		printf("Número não é divisível por 2, 5 e 10");
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}