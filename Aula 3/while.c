#include <stdio.h>

int main() {
    int i = 1; // Inicializa��o da vari�vel de controle
    while (i <= 5) { // Condi��o de continua��o
        printf("Numero: %d\n", i); // Exibe o valor atual de i
        i++; // Incrementa i em 1 para evitar um loop infinito
        //system("pause");
    }
    return 0;
}

