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

    float peso,dosagemml;
	int idade,gotas;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	if (idade >= 12) {
		if (peso >= 60) {
			dosagemml = 1000.0 / 500;
			gotas = dosagemml * 20;
		} else {
			dosagemml = 875.0 / 500;
			gotas = dosagemml * 20;
		}
	} else {
		if (peso >= 5 && peso <= 9) {
			dosagemml = 125.0 / 500;
			gotas = dosagemml * 20;
		} else if (peso >= 9.1 && peso <= 16) {
			dosagemml = 250.0 / 500;
			gotas = dosagemml * 20;
		} else if (peso >= 16.1 && peso <= 24) {
			dosagemml = 375.0 / 500;
			gotas = dosagemml * 20;
		} else if (peso >= 24.1 && peso <= 30) {
			dosagemml = 500.0 / 500;
			gotas = dosagemml * 20;
		} else if (peso > 30) {
			dosagemml = 750.0 / 500;
			gotas = dosagemml * 20;
		}
	}
	
	printf("O paciente tomará %.2f ml por dose, gerando %d gotas",dosagemml,gotas);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}