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

    float n1,n2, resultado;
    int operacao;
	printf("Digite 2 números\n");
	scanf("%f %f",&n1, &n2);
    printf("Escolha a operação que deseja realizar\n1 - Média\n2 - Diferença\n3 - Produto\n4 - Divisão\n");
    scanf("%d",&operacao);
    switch (operacao) {
		case 1:
			resultado = (n1 + n2) / 2;
		break;
		case 2:
			resultado = n1 - n2;
		break;
		case 3:
			resultado = n1 * n2;
		break;
		case 4:
			resultado = n1 / n2;
		break;
		default:
		 printf("Insira uma operação válida\n");
	}
    printf("Resultado: %.2f",resultado);

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}