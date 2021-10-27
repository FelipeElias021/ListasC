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
    
    float saldoMedio,valorCredito;
	printf("Saldo médio do cliente: ");
	scanf("%f",&saldoMedio);
	if (saldoMedio >= 0){ 
		valorCredito = 0;
		if (saldoMedio >= 201 && saldoMedio <= 400) {
		valorCredito = saldoMedio * 0.20;
		} else if (saldoMedio >= 401 && saldoMedio <= 600) {
		valorCredito = saldoMedio * 0.3;
		} else if (saldoMedio > 600) {
		valorCredito = saldoMedio * 0.4;
		}
		printf("Saldo Médio: %.2f\n",saldoMedio);
		printf("Valor do Crédito: %.2f",valorCredito);
	} else {
		printf("Valor do saldo médio negativo");
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}