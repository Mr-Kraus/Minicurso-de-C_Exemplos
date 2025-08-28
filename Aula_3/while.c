#include <stdio.h>

int main() {
    int i = 1; // Inicialização da variável de controle
    while (i <= 5) { // Condição de continuação
        printf("Numero: %d\n", i); // Exibe o valor atual de i
        i++; // Incrementa i em 1 para evitar um loop infinito
        //system("pause");
    }
    return 0;
}

