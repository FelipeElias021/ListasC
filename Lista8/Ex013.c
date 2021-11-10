#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia dois vetores – V1 e V2 – cada um com N (N ≤ 10)
valores reais e um terceiro vetor – Op - com N valores do tipo caracter. Seu programa
deve gerar um vetor – Resul como sendo o resultado das operações de V1 com V2,
onde o código da operação está no vetor Op nas respectivas posições.*/

int main() {
    float v1[10], v2[10], resul[10];
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
        printf("Digite as operacoes a se fazer %d (+ - * /): ",i+1);
        scanf(" %c", &op[i]);
    }

    system("cls");
    for (int i = 0;i < 10;i++) {
        if (op[i] == '+') {
            resul[i] = v1[i] + v2[i];
        } else if (op[i] == '-') {
            resul[i] = v1[i] - v2[i];
        } else if (op[i] == '*') {
            resul[i] = v1[i] * v2[i];
        } else if (op[i] == '/') {
            if (v2[i] != 0) {
                resul[i] = v1[i] / v2[i];
            }
        } else {
            resul[i] = 0;
        }
        printf("%.1f %c %.1f = %.1f\n",v1[i], op[i], v2[i], resul[i]);
    }

    /*sendo o resultado das operações de V1 com V2,
    onde o código da operação está no vetor Op nas respectivas posições.*/

    printf("\n");
    system("PAUSE");
    return 0;
}