#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno estudante;

    strcpy(estudante.nome, "Carlos");
    estudante.idade = 20;
    estudante.nota = 8.5;

    printf("Nome: %s\nIdade: %d\nNota: %.2f\n", estudante.nome, estudante.idade, estudante.nota);

    return 0;
}

