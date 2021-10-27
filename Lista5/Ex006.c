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

    //definir as variáveis para o numero, acumular o resultado e de controle
	int fatorial,resultado = 1,i;
    char resposta;
    //Quando a resposta for não na última pergunta, o while vai ser falso, e sair
    while (resposta != 'n') {
        printf("Escreva um número: ");
        scanf("%d",&fatorial);
        //A variável de controle recebe o fatorial para ir ser modificado junto com o resultado
        i = fatorial;
        while (i > 0) {
           //Como resultado está definido como 1, vai ficar 1 = 1 * 4; 4 = 4 *3; 12 = 12 * 2... 
            resultado = resultado * i;
            i--;
        }
        printf("Resultado de %d!: %d",fatorial, resultado);
        //Após o resultado ser anunciado, retormar o resultado como 1 para o recomeço
        resultado = 1;
        printf("\nQuer continuar? (s/n)\n");
        scanf(" %c",&resposta);
        printf("\n\n\n");
    }
    printf("Que pena :/, até mais!");

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}