#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    int n, m = -1,i = 0, soma = 0;
    printf("Digite um número: ");
    scanf("%d",&n);
    do {
        m += 2;
        soma += m;
        i++;
    } while (soma < n);
    if (sqrt(n) == i) {
        printf("O número %d é um quadrado perfeito!",n);
    } else {
        printf("O número não é um quadrado perfeito");
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}