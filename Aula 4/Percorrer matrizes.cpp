#include <stdio.h>

int main() {
    // Declaração e inicialização de uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Exibindo a matriz usando dois loops aninhados
    printf("Matriz percorrida linha por linha:\n");

    for (int i = 0; i < 3; i++) {  // Percorre as linhas
        for (int j = 0; j < 3; j++) {  // Percorre as colunas
            printf("%d ", matriz[i][j]);  // Exibe o elemento atual
        }
        printf("\n");  // Quebra de linha ao final de cada linha da matriz
    }

    return 0;
}

