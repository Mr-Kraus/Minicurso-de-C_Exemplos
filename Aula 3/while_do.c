#include <stdio.h>

int main() {
    int num;
    do {
        printf("Digite um numero positivo (ou um numero negativo para sair): ");
        scanf("%d", &num); // Lê um número do usuário
        printf("Voce digitou: %d\n", num);
    } while (num >= 0); // Continua até que um número negativo seja digitado
    return 0;
}

