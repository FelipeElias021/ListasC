#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Fazer uma urna eletrônica usando o comando “do while” para eleição presidencial
de segundo turno dos candidatos à presidência da república. Permita que o usuário
selecione o número do candidato (1- candidato1, 2- candidato2, 3-nulo e 4-
encerrar). Compute os votos e ao final informe qual candidato venceu.*/

int main() {
    int voto, cand1 = 0, cand2 = 0, nulo = 0;
    bool flag = true;
    printf("Eleicoes das Melhores Materias\n\t\tVOTE!\n\n");
    printf("1 - Introducao a programcao\n2 - Matematica\n3 - Nulo\n4 - Encerrar\n");
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
            printf("Voto invalido!\n");
        }
    } while (flag);
    system("cls");
    if (cand1 > cand2 && cand1 >= nulo) {
        printf("\nO vencedor foi Introducao a Programacao com %d votos!",cand1);
    } else if (cand2 > cand1 && cand1 >= nulo) {
        printf("\nO vencedor foi Matematica com %d votos!",cand2);
    } else if (cand2 == cand1 && cand1 >= nulo) {
        printf("Votacao empatada, sera necessario fazer outra votacao");
    } else {
        printf("A anarquia ganhou com %d votos, viva o Sons Of Anarqhy",nulo);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}