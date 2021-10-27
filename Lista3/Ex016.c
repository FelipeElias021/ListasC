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

    float salarioBruto, valorPrestacao;
	printf("Salário Bruto: R$");
	scanf("%f",&salarioBruto);
	printf("Valor da prestação: R$");
	scanf("%f",&valorPrestacao);
	if (valorPrestacao <= salarioBruto * 0.3) {
		printf("Empréstimo concedido");
	} else {
		printf("Empréstimo recusado\n");
		printf("O valor da prestação não pode ser mais de 30%% do salário bruto\n");
		printf("Nesse caso o valor máximo da prestação deveria ser de R$%.2f",salarioBruto * 0.3);
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}