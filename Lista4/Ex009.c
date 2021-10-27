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

    int opcao, valor;
	printf("Selecione o intervalo da idade\n1)Criança com menos de 10 anos\n2)Idade entre 10 e 39 anos\n3)Idade entre 40 e 60 anos\n4)Mais de 60 anos\n");
	scanf("%d",&opcao);
	switch (opcao) {
		case 1:
			valor = 180;
		break;
		case 2:
			valor = 150;
		break;
		case 3:
			valor = 195;
		break;
		case 4:
			valor = 230;
		break;
		default:
			printf("Não há essa opção\n");
	}
	printf("Valor do plano de saúde: R$%d",valor);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}