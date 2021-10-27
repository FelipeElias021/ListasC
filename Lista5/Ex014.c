#include <stdio.h>

int main() {
    int max = 150, num = 1, cont, i;
    while (num <= max) {
        cont = 0;
        i = 1;
        while (i <= num) {
            if (num % i == 0) {
                cont++;
            }
            i++;
        }
        if (cont == 2) {
            printf("%d ",num);
        }
        num++;
    }
    return 0;
}