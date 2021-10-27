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
    
    int n1, n2, soma;
	printf("Digite 2 números:\n");
	scanf("%d%d",&n1,&n2);
	soma = n1 + n2;
	if (soma > 20) {
		soma = soma + 8;
	} else {
		soma = soma -5;
	}
	printf ("%d",soma);

    
	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}