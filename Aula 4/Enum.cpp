#include <stdio.h>

enum DiaDaSemana { DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO };

int main() {
    enum DiaDaSemana hoje = QUARTA;

    if (hoje == QUARTA) {
        printf("Hoje é quarta-feira!\n");
    }

    return 0;
}

