#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Olá, ";
    char str2[] = "Mundo!";
    char str3[50];

    strcat(str1, str2); // Concatena str2 em str1
    strcpy(str3, str1); // Copia str1 para str3
    int tamanho = strlen(str3); // Retorna o tamanho da string

    printf("%s (%d caracteres)\n", str3, tamanho);

    return 0;
}
