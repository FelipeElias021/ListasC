#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

    int m, n, i;
    printf("Digite um número: ");
    scanf("%d",&m);
    do {
        printf("Digite o mesmo número: ");
        scanf("%d",&n);
        i++;
    } while (m != n);
    printf("Tentivas para digitar os 2 números iguais: %d", i);
    printf("\n");

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("PAUSE");
    return 0;
}