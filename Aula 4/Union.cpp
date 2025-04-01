#include <stdio.h>

union Dado {
    int inteiro;
    float decimal;
    char texto[20];
};

int main() {
    union Dado valor;

    valor.inteiro = 10;
    printf("Inteiro: %d\n", valor.inteiro);

    valor.decimal = 5.5; // Sobrescreve o valor anterior
    printf("Decimal: %.2f\n", valor.decimal);

    return 0;
}
