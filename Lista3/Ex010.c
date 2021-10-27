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
    
    char sexo;
	float altura,pesoIdeal;
	printf("Sexo (m/f): ");
	scanf("%c",&sexo);
	printf("Altura: ");
	scanf("%f",&altura);
	if (sexo == 'm') {
		pesoIdeal = (72.7 * altura) - 58;
	} else if (sexo == 'f') {
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	printf("Seu peso ideal é de %.2f Kg",pesoIdeal);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}