#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    int voto, cand1 = 0, cand2 = 0, nulo = 0;
    bool flag = true;
    printf("Eleições das Melhores Matérias\n\t\tVOTE!\n\n");
    printf("1 - Introdução a programção\n2 - Matemática\n3 - Nulo\n4 - Encerrar\n");
    do {
        scanf("%d",&voto);
        switch (voto)
        {
        case 1:
            cand1++;
            printf("Voto computado!\n");
            break;
        case 2:
            cand2++;
            printf("Voto computado!\n");
            break;
        case 3:
            nulo++;
            printf("Voto computado!\n");
            break;
        case 4:
            flag = false;
            break;
        default:
            printf("Voto inválido!\n");
        }
    } while (flag);
    system("cls");
    if (cand1 > cand2 && cand1 >= nulo) {
        printf("\nO vencedor foi Introdução a Programação com %d votos!",cand1);
    } else if (cand2 > cand1 && cand1 >= nulo) {
        printf("\nO vencedor foi Matemática com %d votos!",cand2);
    } else if (cand2 == cand1 && cand1 >= nulo) {
        printf("Votação empatada, será necessário fazer outra votação");
    } else {
        printf("A anarquia ganhou com %d votos, viva o Sons Of Anarqhy",nulo);
    }
    printf("\n");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("PAUSE");
    return 0;
}