#include <stdio.h>
#include <stdlib.h>

/*. Faça um programa que leia dois vetores, Vet1 e Vet2, cada um contendo 10 elementos do
tipo char. Seu programa deve determinar e imprimir a quantidade de elementos de mesma
posição são iguais nos dois vetores.
Por exemplo: se fossem fornecidos os dois vetores a seguir, o resultado do programa seria 2.
- Vet1=[ 'a' ,'x' , 'g', 'v']
- Vet2=[ 'a', 'p' , 'g', 'x'].*/

int main() {
    char vetor1[10], vetor2[10];
    int cont = 0;

    for (int i = 0; i < 10;i++) {
        printf("Digite o char %d do primeiro vetor: ",i+1);
        scanf("%s", &vetor1[i]);
    }
    for (int i = 0; i < 10;i++) {
        printf("Digite o char %d do segundo vetor: ",i+1);
        scanf("%s", &vetor2[i]);
    }

    system("cls");
    for (int i = 0; i < 10;i++) {
        printf("\n[%d] %c - %c",i,vetor1[i],vetor2[i]);
        if (vetor1[i] == vetor2[i]) {
            cont++;
            printf("\tIGUAL");
        }
    }

    printf("\nOs dois vetores possuem %d char na mesma posicao",cont);

    printf("\n");
    system("PAUSE");
    return 0;
}