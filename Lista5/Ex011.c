#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    int divisor, divisivel, inicio, fim, i;
    printf("Valor do divisor: ");
    scanf("%d",&divisor);
    printf("Início do intervalo: ");
    scanf("%d",&inicio);
    printf("Fim do intervalo: ");
    scanf("%d",&fim);
    i = inicio;
    printf("Números divisíveis por %d no intervalo de %d a %d:\n",divisor,inicio,fim);
    while (i <= fim) {
        if (i % divisor == 0) {
            printf("%d ",i);
        }
        i++;
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}