#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    float nota1, nota2, media;
    char nome[20], resposta[3] = "sim";
    bool flag;
    while (strcmp("sim",resposta) == 0) {
        printf("\n\nNome: ");
        scanf(" %s",&nome);
        flag = true;
        while (flag) {
            printf("Nota A: ");
            scanf("%f",&nota1);
            printf("Nota B: ");
            scanf("%f",&nota2);
            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
                flag = false;
            } else {
                printf("ERRO! Nota inválida, digite novamente!\n");
            }
        }
        media = ((nota1) + (nota2 * 2))/3;
        printf("O aluno %s tem uma média de %.2f",nome,media);
        printf("\nContinuar (sim/não)? ");
        scanf(" %s",&resposta);
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}