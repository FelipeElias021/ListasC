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

    int i = 0;
    float num, soma = 0, media = 0;
    do {
        printf("Digite um número: (-1 para parar) ");
        scanf("%f", &num);
        if (num != -1) {
            i++;
            soma += num;
        }
    } while (num != -1);
    system("cls");
    media = soma / i;
    printf("Média dos números: %.2f",media);
    printf("\n");

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("PAUSE");
    return 0;
}