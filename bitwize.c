#include <stdio.h>

int main() {
    int x = 6;  // 6 em binário: 00000110
    int y = 3;  // 3 em binário: 00000011

    printf("x & y = %d\n", x & y);  // E bit a bit (AND)
    printf("x | y = %d\n", x | y);  // OU bit a bit (OR)
    printf("x ^ y = %d\n", x ^ y);  // OU exclusivo (XOR)
    printf("~x = %d\n", ~x);        // NÃO bit a bit (NOT)
    printf("x << 1 = %d\n", x << 1); // Deslocamento à esquerda
    printf("x >> 1 = %d\n", x >> 1); // Deslocamento à direita

    return 0;
}
