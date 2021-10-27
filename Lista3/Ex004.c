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
	if (num > 20 && num < 90){
		printf("O número digitado está entre 20 e 90");
	} else {
		printf("O número digitado está fora do intervalo de 20 e 90");
	}

    
	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}