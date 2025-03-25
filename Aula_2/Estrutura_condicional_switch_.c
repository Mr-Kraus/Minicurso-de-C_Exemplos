#include <stdio.h>

int main() {
    int opcao = 0;
	printf("Qual a opcao?\n");
	scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada.\n");
            break;
        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        case 3:
            printf("Opção 3 selecionada.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

