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

    float a,b,c;
	printf("Digite 3 valores: \n");
	scanf("%f%f%f",&a,&b,&c);
	if (a>b && b>c) {
		printf("%.2f %.2f %.2f",c,b,a);
	} else if (a>c && c>b) {
		printf("%.2f %.2f %.2f",b,c,a);
	} else if (b>a && a>c) {
		printf("%.2f %.2f %.2f",c,a,b);
	} else if (b>c && c>a) {
		printf("%.2f %.2f %.2f",a,c,b);
	} else if (c>a && a>b) {
			printf("%.2f %.2f %.2f",b,a,c);
	} else if (c>b && b>a) {
		printf("%.2f %.2f %.2f",a,b,c);
	} 


	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}