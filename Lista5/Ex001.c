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

	int homem = 0, mulher = 0, idade, i = 1;
	char sexo;
    while (i<=20) {
		printf("\n\nHomem ou Mulher: (m/f) ");
		scanf(" %c",&sexo);
		printf("Idade: ");
		scanf("%d",&idade);
		if (idade >= 18) {
			if (sexo == 'm') {
				homem++;
			} else if (sexo == 'f') {
				mulher++;
			}
		}
        i++;
	}
	printf("\nNúmero de homens: %d\n",homem);
	printf("Número de mulheres: %d\n",mulher);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}