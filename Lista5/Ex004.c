#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    int dia, mes, ano, i, diaF, mesF, anoF, ii;
    printf("Dia: ")/
    scanf("%d",&dia);
    printf("Mês: ")/
    scanf("%d",&mes);
    printf("Ano: ")/
    scanf("%d",&ano);
    printf("Quantidade de dias: ")/
    scanf("%d",&i);
    diaF = dia;
    mesF = mes;
    anoF = ano;
    ii = i;
    while (i > 0) {
        if (mesF == 2 && anoF % 4 != 0) {
            if (diaF == 28) {
                mesF++;
                diaF = 0;
            } else {
                diaF++;
            }
        } else if (mesF == 2 && anoF % 4 == 0) {
            if (diaF == 29) {
                mesF++;
                diaF = 0;
            } else {
                diaF++;
            }
        }

        if (mesF == 4 || mesF == 6 || mesF == 9 || mesF == 11) {
            if (diaF == 30) {
                mesF++;
                diaF = 0;
            } else {
                diaF++;
            }
        }

        if (mesF == 1 || mesF == 3 || mesF == 5 || mesF == 7 || mesF == 8 || mesF == 10 || mesF == 12) {
            if (mesF == 12 && diaF == 31) {
                anoF++;
                mesF = 1;
                diaF = 0;
            }
            if (diaF == 31) {
                mesF++;
                diaF = 1;
            } else {
                diaF++;
            }
        }
        i--;
    }
    printf("%d/%d/%d + %d dias = %d/%d/%d",dia,mes,ano,ii,diaF,mesF,anoF);


    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}