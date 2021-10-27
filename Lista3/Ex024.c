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

    int destino, preco;
	char retorno;
	printf("--- Destinos ---\n");
	printf("1 - Região Norte\n");
	printf("2 - Região Nordeste\n");
	printf("3 - Região Centro-Oeste\n");
	printf("4 - Região Sul\n");
	scanf("%d",&destino);
	printf("A viagem inclui retorno (ida e volta)? (s/n)\n");
	scanf(" %c",&retorno);
	if (destino == 1) {
		if (retorno =='s') {
			preco = 900;
		} else if (retorno == 'n') {
			preco = 500;
		}
	} else if (destino == 2) {
		if (retorno =='s') {
			preco = 650;
		} else if (retorno == 'n') {
			preco = 350;
		}
	} else if (destino == 3) {
		if (retorno =='s') {
			preco = 600;
		} else if (retorno == 'n') {
			preco = 350;
		}
	} else if (destino == 4) {
		if (retorno =='s') {
			preco = 550;
		} else if (retorno == 'n') {
			preco = 300;
		}
	} else {
		printf("Destino inválido!");
	}
	printf("Preço da viagem: R$ %d.00",preco);


	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}