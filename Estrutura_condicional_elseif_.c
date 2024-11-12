#include <stdio.h>

int main() {
    int nota = 0;
	printf("Qual a sua nota?\n");
	scanf("%d", &nota);

    if (nota >= 9) {
        printf("Excelente!\n");
    } else if (nota >= 7) {
        printf("Bom!\n");
    } else {
        printf("Precisa melhorar.\n");
    }

    return 0;
}
