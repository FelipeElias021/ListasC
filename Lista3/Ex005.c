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
	if (num >= 500 && num <= 1000){
		printf("O número digitado está entre 500 e 1000");
	} else {
        if (num == 5 || num == 200 || num == 400){
		printf("Seu número é igual à %d\n",num);
	    }
		printf("O número digitado está fora do intervalo de 500 e 1000");
    }
    
	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}