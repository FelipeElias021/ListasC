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

    float peso,altura, imc;
	printf("Peso: ");
	scanf("%f",&peso);
	printf("Altura: ");
	scanf("%f",&altura);
	imc = peso / pow(altura,2);
	printf("IMC: %.1f\n",imc);
	if (imc < 20 && imc > 0){
		printf("Abaixo do peso");
	} else if (imc >= 20 && imc < 25) {
		printf("Peso Normal");
	} else if (imc >= 25 && imc < 30) {
		printf("Sobre Peso");
	}else if (imc >= 30 && imc < 40) {
		printf("Obeso");
	} else if (imc >= 40) {
		printf("Obeso Mórbido");
	} else {
        printf("Dados incorretos");
    }

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}