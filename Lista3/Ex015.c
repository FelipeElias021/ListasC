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
    
    int dinheiro,notas100=0,notas50=0,notas10=0,notas5=0,notas1=0,notasTotal;
    printf("Valor: R$");
	scanf("%d",&dinheiro);
    printf("O valor de R$%d pode ser decomposto em:\n",dinheiro);
    if (dinheiro / 100 > 0) {
        notas100 = dinheiro / 100;
        printf("%d notas de R$100,00\n",notas100);
    }
    if ((dinheiro % 100) / 50 > 0) {
        notas50 = (dinheiro % 100) / 50;
        printf("%d notas de R$50,00\n",notas50);
    }
    if (((dinheiro % 100) % 50) / 10 > 0) {
        notas10 = ((dinheiro % 100) % 50) / 10;
        printf("%d notas de R$10,00\n",notas10);
    }
    if ((((dinheiro % 100) % 50) % 10) / 5 > 0) {
        notas5 = (((dinheiro % 100) % 50) % 10) / 5;
        printf("%d notas de R$5,00\n",notas5);
    }
    if ((((dinheiro % 100) % 50) % 10) % 5 > 0) {
        notas1 = (((dinheiro % 100) % 50) % 10) % 5;
        printf("%d notas de R$1,00\n",notas1);
    }
    notasTotal = notas100 + notas50 +notas10 + notas5 + notas1;
	printf("Gerando um total de %d notas.\n",notasTotal);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}