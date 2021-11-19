#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*Escreva um programa que leia uma matriz 5x5 e:
a) O maior elemento da linha onde se encontra o menor elemento da área
rachurada em: à esquerda da diagonal principal
b) A média dos elementos da área rachurada em: o centro entre as duas diagonais
Obs.: Em ambas as áreas, deve-se incluir as diagnoais principal (exercício a e b) e
diagonal secundária (exercício b)*/
int main()
{
    int matriz[5][5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //printf("matriz[%d][%d]: ",i,j);
            //scanf("%d", &matriz[i][j]);
            matriz[i][j] = 1 + rand() % 10;
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Exercicio A:\n");

    int menor_elem, Imenor_elem, maior_elem, k = 5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < k; j++)
        { //com o k sendo decremetado o numero de coluna vai diminuindo a até fica so a 0
            printf("%d\t", matriz[i][j]);
            if (i == 0 && j == 0)
            {
                Imenor_elem = i;
                menor_elem = matriz[i][j];
            }
            else
            {
                if (matriz[i][j] < menor_elem)
                {
                    Imenor_elem = i;
                    menor_elem = matriz[i][j];
                }
            }
        }
        k--;
        printf("\n");
    }
    printf("\n");
    for (int j = 0; j < 5 - Imenor_elem; j++)
    { //5 - Imenor_elem vai definir o numero de colunos, se a linha onde esta o menor for 0, então vai ser 5-0-5colunas;5-1=4colunas...5-4=1coluna
        if (j == 0)
        {
            maior_elem = matriz[Imenor_elem][j];
        }
        else
        {
            if (matriz[Imenor_elem][j] > maior_elem)
            {
                maior_elem = matriz[Imenor_elem][j];
            }
        }
    }
    printf("\n");
    printf("Maior elemento da linha %d, onde se encontra menor elemento: %d\n\n", Imenor_elem + 1, maior_elem);

    printf("\n");
    printf("Exercicio B:\n");

    int pul = 0, l = 5, soma = 0, contador = 0;
    float media;
    // pul é pulador de coluna, e l é as colunas

    for (int i = 0; i < 5; i++)
    {
        if (pul == 1)
        {
            printf("\t");
        }
        else if (pul == 2)
        {
            printf("\t\t");
        }

        for (int j = 0; j < l; j++)
        {
            printf("%d\t", matriz[i][j + pul]);
            soma += matriz[i][j + pul];
            contador++;
        }
        if (i < 2)
        {
            pul++;
        }
        else
        {
            pul--;
        }
        if (i < 2)
        {
            l -= 2;
        }
        else
        {
            l += 2;
        }
        /*Quando a linha for < 2, (0,1),o pul vai incrementar, para pegar a coluna seguinte 0-1-2-1-0; quando chegar na linha 2
        ele terá que começar a decrementar, para pegar mais colunas
        Já o l representa a quantidade de de colunas que cada linha vai ter 5-3-1-3-5, so que eu ao inves de somar ou
        subtrair de 1 em 1, ele vai fazer isso de 2 em 2*/
        printf("\n");
    }
    media = (float)soma / contador;
    printf("\n");
    printf("Media dos elementos: %.1f", media);

    printf("\n");
    getchar();
    return 0;
}