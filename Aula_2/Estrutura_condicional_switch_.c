#include <stdio.h>

int main() {
    int opcao = 0;
	printf("Qual a opcao?\n");
	scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Op��o 1 selecionada.\n");
            break;
        case 2:
            printf("Op��o 2 selecionada.\n");
            break;
        case 3:
            printf("Op��o 3 selecionada.\n");
            break;
        default:
            printf("Op��o inv�lida.\n");
            break;
    }

    return 0;
}

