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
    
    float real,dolar,euro;
	int opcaoConversao;
	printf("Valor que deseja converter: R$");
	scanf("%f",&real);
	printf("Para qual moeda deseja converter?\n1 - Dólar\n2 - Euro\n");
	scanf("%d",&opcaoConversao);
	if (opcaoConversao == 1) {
		dolar = real / 3.05;
        printf("Valor em dólar: US$%.2f",dolar);
	}
	if (opcaoConversao == 2) {
		euro = real / 3.31;
        printf("Valor em euro: €%.2f",euro);
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}