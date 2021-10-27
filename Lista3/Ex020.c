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

    float compra,venda;
	printf("Valor da compra R$");
	scanf("%f",&compra);
	if (compra < 10) {
		venda = compra * 1.7;
	} else if (compra >= 10 && compra < 30) {
		venda = compra * 1.5;
	} else if (compra >= 30 && compra < 50) {
		venda = compra * 1.4;
	} else {
		venda = compra * 1.3;
	}
	printf("Valor da venda R$%.2f",venda);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}