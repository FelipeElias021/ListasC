#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Escreva um programa que leia o sexo, a idade e o peso de um grupo de 10 pessoas,
determine e imprima o peso médio dos homens e a idade média das mulheres do grupo.*/

int main() {
    char sexo;
    int idade, homem=0, mulher=0, i;
    float peso, pesoMedioH=0, idadeMediaM=0;
    for(i = 1;i <= 10;i++) {
        printf("\nSexo (m/f): ");
        scanf(" %c",&sexo);
        printf("Idade: ");
        scanf("%d",&idade);
        printf("Peso: ");
        scanf("%f",&peso);
        sexo = tolower(sexo);
        if (sexo == 'm') {
            pesoMedioH += peso;
            homem++;
        } else if (sexo == 'f') {
            idadeMediaM += idade;
            mulher++;
    }
    }
    homem == 0 ? homem++ : false;
    mulher == 0 ? mulher++ :  false;

    pesoMedioH /= homem;
    idadeMediaM /= mulher;

    system("cls");
    printf("Peso medio dos homens: %.2f kg\n",pesoMedioH);
    printf("Idade media das mulheres: %.1f",idadeMediaM);

    printf("\n");
    system("PAUSE");
    return 0;
}