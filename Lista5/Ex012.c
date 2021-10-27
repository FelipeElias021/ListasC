#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    //Número está com valor de 101, para nunca assumir um número aleatório
    int aleatorio, numero = 101, i = 10; 
    printf("Este é o acordo\nAs regras são muito difíceis\nAche o nº entre 0 e 100\nVocê tem 5 chances!");
    //Se n usar essa função srand antes, vai ser sempre a mesma sequência, pois ela sempre vai assumir a semente 1 e no caso a sequência sempre vai ser 41 67 34 0 69 24 78 58 62 64 5 45 81 27 61 91 95 42 27 36...
    //srand cria uma nova semente, que é o total de segundos desde 1 de janeiro de 1970, assim a semente vai ser sempre diferente
    srand(time(NULL));
    //Tem que colocar 1 a mais, para gerar valores de 0 a 100
    aleatorio = rand() % 101;
    //Se os números forem iguais, vai se F e quebrar a estrutura
    //Quando o número de tentativas for 0, vai ser F e quebrar a estrutura
    while (numero != aleatorio && i > 0) {
        printf("\nNúmero: ");
        scanf("%d",&numero);
        i--;
        if (numero > aleatorio) {
            printf("ERROUU *Imagine o Faustão*! O número é menor que %d, %d chances restantes\n",numero,i);
        } else if (numero < aleatorio) {
            printf("ERROUU *Imagine o Faustão*! O número é maior que %d, %d chances restantes\n",numero,i);
        } else {
            printf("WE ARE THE CHAMPIONS!!");
            //Esse incremento para n der problema, se a pessoa acertar de última.
            i++;
        }
        if (i == 0) {
            printf("Perdeu!!!!");
        }
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}