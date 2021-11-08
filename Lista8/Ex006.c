#include <stdio.h>
#include <stdlib.h>

/*Agora faça um programa que leia dois vetores com N (N<=20) valores inteiros cada um. Seu
programa deve determinar e imprimir quantas vezes cada elemento do primeiro vetor
aparece no segundo vetor. Para o exemplo do exercício anterior o resultado seria:
- O valor 5 aparece 3 vezes no segundo vetor
- O valor 10 aparece 1 vez no segundo vetor
- O valor 21 aparece 2 vezes no segundo vetor*/

int main() {
    int vetor1[7] = {}, vetor2[7] = {};
    int cont;

    for (int i = 0; i < 7;i++) {
        printf("Digite o numero %d do primeiro vetor: ",i+1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < 7;i++) {
        printf("Digite o numero %d do segundo vetor: ",i+1);
        scanf("%d", &vetor2[i]);
    }

    system("cls");
    for (int i = 0; i < 7;i++) {
        cont = 0;
        for (int j = 0; j < 7; j++) {
            if (vetor1[i] == vetor2[j]) {
                cont++;
            }
        }
        printf("\nO valor %d aparece %d no segundo vetor",vetor1[i],cont);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}