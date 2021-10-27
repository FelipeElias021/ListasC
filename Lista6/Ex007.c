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

    int x, y, pot;
    printf("Base: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &y);
    pot = x;
    do {
        pot = pot * x;
        y--;
    } while (y > 1);
    printf("%d", pot);

    printf("\n");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("PAUSE");
    return 0;
}