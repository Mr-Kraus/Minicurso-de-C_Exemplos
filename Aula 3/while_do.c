#include <stdio.h>

int main() {
    int num;
    do {
        printf("Digite um numero positivo (ou um numero negativo para sair): ");
        scanf("%d", &num); // L� um n�mero do usu�rio
        printf("Voce digitou: %d\n", num);
    } while (num >= 0); // Continua at� que um n�mero negativo seja digitado
    return 0;
}

