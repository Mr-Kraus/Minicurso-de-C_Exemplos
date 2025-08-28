#include <stdio.h>

int main() {
    int i = 1;
    inicio: // Rótulo 'inicio' para voltar a este ponto
        printf("%d ", i);
        i++;
        if (i <= 5) {
            goto inicio; // Volta ao rótulo até que i > 5
        }
    printf("\nFim do loop.\n");
    return 0;
}

