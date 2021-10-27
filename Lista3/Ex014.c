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
    
    float a,b,c,maior,medio,menor;
	int i;
	printf("Digite 3 valores: \n");
	scanf("%f%f%f",&a,&b,&c);
	printf("Escolha um valor de 1 a 3.\n");
	scanf("%d",&i);
	if (a>b && b>c) {
		maior = a;
		medio = b;
		menor = c;
	} else if (a>c && c>b) {
		maior = a;
		medio = c;
		menor = b;
	} else if (b>a && a>c) {
		maior = b;
		medio = a;
		menor = c;
	} else if (b>c && c>a) {
		maior = b;
		medio = c;
		menor = a;
	} else if (c>a && a>b) {
		maior = c;
		medio = a;
		menor = b;
	} else if (c>b && b>a) {
		maior = c;
		medio = b;
		menor = a;
	} else {
		maior = a;
		medio = b;
		menor = c;
	}
	if (i == 1) {
		printf("%.1f %.1f %.1f",menor,medio,maior);
	} else if (i == 2) {
		printf("%.1f %.1f %.1f",maior,medio,menor);
	} else if (i == 3) {
		printf("%.1f %.1f %.1f",menor,maior,medio);
	} else {
		printf("Erro");
	}
    
	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}