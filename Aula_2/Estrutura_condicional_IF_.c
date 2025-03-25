#include <stdio.h>

int main() {
    int idade = 0;
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	
    if (idade >= 18) {
        printf("Voce e maior de idade.\n");
    }

    return 0;
}







