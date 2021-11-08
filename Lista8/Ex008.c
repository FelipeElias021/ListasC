#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia uma nota de cada um dos 10 alunos de uma turma,
armazene-as em um vetor, calcule e imprima a média aritmética geral desta classe e
imprima a quantidade de alunos que tiveram nota inferior à média calculada.*/

int main() {
    float notas[10], soma = 0, media;

    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do %d aluno: ",i + 1);
        scanf("%f",&notas[i]);
        soma += notas[i];
    }
    media = soma / 10;

    printf("Media: %.2f\n\nNotas abaixo da media",media);

    for (int i = 0; i < 10; i++) {
        if (notas[i] < media) {
            printf("\n%.2f",notas[i]);
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}