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

    float x,funcao;
	printf("Valor de x: ");
	scanf("%f",&x);
	if (x <= 1) {
		funcao = 1;
	} else if (x > 1 && x <= 2) {
		funcao =2;
	} else if (x > 2 && x <= 3) {
		funcao = pow(x,2);;
	} else {
		funcao = pow(x,3);
	}
	printf("f(%.2f) = %.2f",x,funcao);


	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}