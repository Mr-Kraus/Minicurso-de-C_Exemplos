#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;
    for (i; i <= 10; i++) {    // Inicializa i com 1 e incrementa até 10
        sum += i; // Soma o valor de i ao total
    }
    printf("A soma dos numeros de 1 a 10 e: %d\n", sum);
    return 0;
}

