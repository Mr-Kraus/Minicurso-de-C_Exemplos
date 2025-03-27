#include <stdio.h>

int main() {
    int num;
    int i = 1;
    for (i; i <= 10; i++) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        if (num == 0) { // Verifica se o usuário deseja sair
            printf("Encerrando o loop...\n");
            break; // Sai do loop antes de completar as 10 iterações
        }
        printf("Voce digitou: %d\n", num);
    }
    return 0;
}

