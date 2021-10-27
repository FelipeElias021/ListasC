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
    bool flagNotas = true, flagResposta = true;
    //Se a resposta tiver algumas dessas variações de sim vai entrar na estrura de repetição, caso ao contrário vai sair. Vou utilizado || pois prescisa apenas 1 ser V para entrar.
    while (strcmp("sim",resposta) == 0 || strcmp("Sim",resposta) == 0 || strcmp("SIM",resposta) == 0 || strcmp("s",resposta) == 0 || strcmp("S",resposta) == 0) {
        printf("\n\nNome: ");
        scanf(" %s",&nome);
        //Após o usuário quiser fazer de novo, a flagNotas estará como false, ent deve ser true para entrar na estrutura de pedir as notas
        flagNotas = true;
        while (flagNotas) {
            printf("Nota A: ");
            scanf("%f",&nota1);
            printf("Nota B: ");
            scanf("%f",&nota2);
            //se as notas tiverem nesse intervalo, a flag vai se negativa e sair do loop
            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
                flagNotas = false;
            } else {
                printf("ERRO! Nota inválida, digite novamente!\n");
            }
        }
        media = ((nota1) + (nota2 * 2))/3;
        printf("O aluno %s tem uma média de %.2f",nome,media);
        //idem da flagNota
        flagResposta = true;
        while (flagResposta) {
            printf("\nContinuar? ");
            scanf(" %s",&resposta);
            //Se a resposta for algumas dessa vai sair do loop, se for postivo continuar o principal de novo e negativo parar tudo;
            //Se uma resposta for igual tudo vai ser V.
            if (strcmp("sim",resposta) == 0 || strcmp("Sim",resposta) == 0 || strcmp("SIM",resposta) == 0 || strcmp("s",resposta) == 0 || strcmp("S",resposta) == 0 || strcmp("não",resposta) == 0 || strcmp("Nao",resposta) == 0 || strcmp("NAO",resposta) == 0 || strcmp("n",resposta) == 0 || strcmp("N",resposta) == 0) {
                flagResposta = false;
            } else {
                printf("ERRO! Resposta inválida");
            }
        }
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}