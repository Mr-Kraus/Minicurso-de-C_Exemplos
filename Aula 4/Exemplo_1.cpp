#include <stdio.h>

int main() {
    // Declara��o e inicializa��o do vetor de notas
    float notas[5] = {7.5, 8.0, 5.5, 9.2, 6.8};

    // Exibi��o dos valores de forma individual
    printf("Notas dos alunos:\n");
    printf("Nota 1: %.1f\n", notas[0]);
    printf("Nota 2: %.1f\n", notas[1]);
    printf("Nota 3: %.1f\n", notas[2]);
    printf("Nota 4: %.1f\n", notas[3]);
    printf("Nota 5: %.1f\n", notas[4]);

    return 0;
}

