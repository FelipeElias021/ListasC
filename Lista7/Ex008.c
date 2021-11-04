#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Manipulação de data e horários
#include <stdbool.h> //Manipulação de variáveis booleanas
#include <string.h> //Manipulação de strings
#include <math.h> //Funções básicas matemáticas
#include <ctype.h> //Manipulação de caracteres, como deixar lower, upper

/*Num frigorífico existem 90 bois. Cada boi traz em seu pescoço um cartão contendo
seu número de identificação e seu peso. Fazer um algoritmo que escreva o número
e o peso do boi mais gordo e do boi mais magro.*/

int main() {
    int id, i, maxID, minID;
    float peso, maxP, minP;
    for (i = 1; i <= 4; i++) {
        printf("Numero de id: ");
        scanf("%d",&id);
        printf("Peso: ");
        scanf("%f",&peso);
        if (i == 1) {
            maxP = peso;
            maxID = id;
            minP = peso;
            minID = id;
        } else {
            if (peso > maxP) {
                maxP = peso;
                maxID = id;
            }
            if (peso < minP) {
                minP = peso;
                minID = id;
            }
        }
    }
    printf("\nO boi %d tem %.2f kg sendo o mais gordo",maxID,maxP);
    printf("\nO boi %d tem %.2f kg sendo o mais magro",minID,minP);

    printf("\n");
    system("PAUSE");
    return 0;
}