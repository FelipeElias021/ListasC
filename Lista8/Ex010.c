#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que preencha um vetor de 10 elementos reais, da seguinte
forma:
• o elemento de índice zero seja igual a 1;
• os elementos de índices pares sejam iguais a 3/5 do valor do índice e,
• os elementos de índices ímpares sejam o quadrado do valor do índice.
Isto é: Num[0]=1; Num[2]=2*3/5 e, Num[3]=3*3
*/

int main() {
    float vetor[10];

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            vetor[i] = 1;
        } else if (i % 2 == 0) {
            vetor[i] = (float)i * (3/5.0);
        } else {
            vetor[i] = i * i;
        }
        printf("vetor[%d]: %.1f\n",i,vetor[i]);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}