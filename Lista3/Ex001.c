#include <stdio.h>
#include <stdlib.h>
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
	if (num%2 == 0) {
		if (num > 0) {
			printf("O número %d é PAR e POSITIVO",num);
		} else if (num < 0) {
			printf("O número %d é PAR e NEGATIVO",num);
		} else {
			printf("O número %d é NULO",num);
		}
	} else {
		if (num > 0) {
			printf("O número %d é ÍMPAR e POSITIVO",num);
		} else {
			printf("O número %d é ÍMPAR e NEGATIVO",num);
		}
	}
    
	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}