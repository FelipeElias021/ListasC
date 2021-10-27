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
    
    float a,b,c,maior;
    printf("Digite 3 números:\n");
    scanf("%f %f %f",&a, &b, &c);
    if (a > b && a >c) {
		maior = a;
	} else if (b > a && b >c) {
		maior = b;
	} else if (c > a && c >b) {
		maior = c;
	} else {
		printf("Os numeros são iguais");
	}
	printf("%.1f É O MAIOR!",maior);


	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}