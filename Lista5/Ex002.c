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

	int par = 0, impar = 0, i = 0, num = 1, soma = 0;
    float media = 0;
    printf("===================\nDigite 0 para parar\n===================\n\n");
    while (num != 0) {
        printf("Digite um número: ");
        scanf("%d",&num);
        if(num > 0) {
            if (num % 2 == 0) {
                par++;
            } else {
                impar++;
            }
            soma = soma + num;
            i++;
        }
    }
    media = (float)soma / i;
    printf("\n\n%d números pares\n",par);
    printf("%d números ímpares\n",impar);
    printf("Média: %.2f",media);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}