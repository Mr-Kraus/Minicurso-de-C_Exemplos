#include <stdio.h>

int main() {
    // Declara��o e inicializa��o do vetor de notas
    float notas[5] = {7.5, 8.0, 5.5, 9.2, 6.8};
    
    // Exibi��o otimizada usando um loop for
    printf("Notas dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: %.1f\n", i + 1, notas[i]);
    }

    return 0;
}

