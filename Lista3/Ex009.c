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
    
    int senha,senha2;
	printf("Crie uma senha númerica:\n");
	scanf("%d",&senha);
	printf("Confirme a senha:\n");
	scanf("%d",&senha2);
	if (senha == senha2) {
		printf("Senha cadastrada!");
	} else {
		printf("Senha não confere com a primeira senha digitada! Encerrando sistema...!");
	}

	// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}