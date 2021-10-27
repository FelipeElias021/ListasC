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
    
    float a,b,c,semiP,area;
	printf("Digite os 3 lados do triângulo: \n");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b > c && a+c > b && b+c > a){
		semiP = (a+b+c)/2;
		area = sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c));
		printf("O triângulo tem área de %.2f",area);
	} else {
		printf("Os valores %.2f %.2f %.2f não formam um triângulo", a,b,c);
	}
    
	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}