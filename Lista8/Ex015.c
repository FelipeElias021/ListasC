#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escreva um algoritmo que leia um valor inteiro PROC e um vetor de 10 elementos
inteiros. Em seguida, seu programa deve verificar se o valor PROC pertence ou não ao vetor
lido. Caso o valor esteja no vetor, emita uma mensagem e a posição do elemento no vetor.
Caso o elemento não exista no vetor emita apenas a mensagem.*/

int main() {
    int num, vetor[10], index;
    bool flag = false;

    printf("Digite um valor: ");
    scanf("%d",&num);
    for (int i = 0; i < 10;i++) {
        printf("Digite o numero %d do  vetor: ",i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] == num) {
            flag = true;
            index = i;
        }
    }
    if (flag == true) {
        printf("O numero digitado esta na posicao %d do vetor",index);
    } else if (flag == false) {
        printf("O numero digitado nao esta no vetor");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}