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

    int idade;
	printf("Idade: ");
	scanf("%d",&idade);
	if (idade < 18) {
		printf("Menor de idade\n");
	} else if (idade >= 18 && idade < 65) {
		printf("Maior de idade\n");
		printf("Eleitor Obrigatório");
	} else {
		printf("Pessoa idosa\n");
		printf("Eleitor Facultativo\n");
	}
	if (idade < 16) {
		printf("Não Eleitor");
	} else if (idade>= 16 && idade<18) {
		printf("Eleitor Facultativo");
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}