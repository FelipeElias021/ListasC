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

    int aleatorio, numero = 101, min = 0, max = 100;
    char resposta;
    while (numero < 0 || numero > 100) {
        printf("Escolha um número de 0 à 100: ");
        scanf("%d",&numero);
    }
    //Este comando fica fora do while pois ele pega como semente os segundos desde 1 de janeiro de 19070, ent dentro do while a semente vai aumentado de forma quase uniforme, assim como os números gerados pela máquina.
    srand(time(NULL));
    aleatorio = rand() % 101;
    while (resposta != 's') {
        printf("\nResposta da máquina: %d",aleatorio);
        printf("\nAcertou (s/n)?");
        scanf(" %c",&resposta);
        if (aleatorio > numero) {
            printf("ERROU! número é menor que %d\n",aleatorio);
            //Se o numero aleatorio for menor que maximo e maior que o nosso número, esse numero aleatório é o teto
            if (aleatorio < max) {
                max = aleatorio + 1;
            }
        } else if (aleatorio < numero) {
            printf("ERROU! O número é maior que %d\n",aleatorio);
            //Se o numero aleatorio for maior que minimo e menor que o nosso número, esse numero aleatório é o piso
            if (aleatorio > min) {
                min = aleatorio;
            }
        }
        //O minimo vai ser 
        aleatorio = min + rand() % (max - min);
    }
    printf("\nParabéns!!");

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}