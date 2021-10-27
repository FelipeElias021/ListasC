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

    int mes;
	printf("Insira um número de 1 a 12\n");
	scanf("%d",&mes);
	printf("Mês correspondente é ");
	switch (mes) {
		case 1:
			printf("janeiro");
		break;
		case 2:
			printf("fevereiro");
		break;
		case 3:
			printf("março");
		break;
		case 4:
			printf("abril");
		break;
		case 5:
			printf("maio");
		break;
		case 6:
			printf("junho");
		break;
		case 7:
			printf("julho");
		break;
		case 8:
			printf("agosto");
		break;
		case 9:
			printf("setembro");
		break;
		case 10:
			printf("outubro");
		break;
		case 11:
			printf("novembro");
		break;
		case 12:
			printf("dezembro");
		break;
		default: 
			printf("Não existe mês com esse número");
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}