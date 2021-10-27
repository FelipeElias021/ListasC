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

    int n1,n2;
	float resultado;
	char operacao;
	printf("Digite 2 números\n");
	scanf("%d %d",&n1, &n2);
	printf("Qual operação deseja realizar (* / '/' / + / -)\n");
	scanf(" %c",&operacao);
	switch (operacao) {
		case '*':
			resultado = n1 * n2;
		break;
		case '/':
			resultado = (float)n1 / n2;
		break;
		case '+':
			resultado = n1 + n2;
		break;
		case '-':
			resultado = n1 - n2;
		break;
		default:
		 printf("Insira um operador válido\n");
	}
	printf ("%d %c %d = %.1f",n1,operacao,n2,resultado);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}