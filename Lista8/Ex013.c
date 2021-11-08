#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia dois vetores – V1 e V2 – cada um com N (N ≤ 10)
valores reais e um terceiro vetor – Op - com N valores do tipo caracter. Seu programa
deve gerar um vetor – Resul como sendo o resultado das operações de V1 com V2,
onde o código da operação está no vetor Op nas respectivas posições.*/

int main() {
    float v1[10], v2[10];
    char op[10];

    for (int i = 0; i < 10;i++) {
        printf("Digite o numero %d do primeiro vetor: ",i+1);
        scanf("%f", &v1[i]);
    }
    for (int i = 0;i < 10;i++) {
        printf("Digite o numero %d do segundo vetor: ",i+1);
        scanf("%f", &v2[i]);
    }
    for (int i = 0;i < 10;i++) {
        printf("Digite o char %d do segundo vetor: ",i+1);
        scanf("%c", &op[i]);
    }

    /*sendo o resultado das operações de V1 com V2,
    onde o código da operação está no vetor Op nas respectivas posições.*/
    //NÃO ENTENDI ESSA PARTE

    printf("\n");
    system("PAUSE");
    return 0;
}