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

    float n1, n2;
    int media;
    printf("Digite as 2 notas\n");
    scanf("%f %f",&n1, &n2);
    media = (n1 + n2) / 2;
    printf("Media: %d\n\n",media);
    switch (media) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Reprovado");
        break;
        case 5:
        case 6:
            printf("Exame");
        break;
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Aprovado");
        break;
        default:
            printf("Notas inválidas");
    }

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}