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

    float valorMulta,anuidade;
	int mes;
	printf("Valor da anuidade:\nR$");
	scanf("%f",&anuidade);
	printf("Digite o mês em que foi pago a anuidade:\n");
	scanf("%d",&mes);
	switch (mes) {
		case 1:
			valorMulta = anuidade;
		break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			valorMulta = anuidade * pow(1.05, (mes - 1));
		break;
		default: 
			printf("Mês Inválido");
	}
	printf("Valor da anuidade com juros: R$%.2f",valorMulta);


	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}