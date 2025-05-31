#include <stdio.h>

int main() {

    int valor;

    char * Alunos[3][3] = {
        {"Aluno 1", "Nota: 45", "Nota: 90"},
        {"Aluno 2", "Nota: 70", "Nota: 50"},
        {"Aluno 3", "Nota: 90", "Nota: 30"}
    };

    printf("Digite o o numero correspondente do aluno que voce quer ver a nota\n");
    printf("Para Aluno 1 Digite 0\n");
    printf("Para Aluno 2 Digite 1\n");
    printf("Para Aluno 3 Digite 2\n");

    scanf("%d", &valor);

    printf("As notas do %s são %s em matematica e %s em portugues", Alunos[valor][0], Alunos[valor][1], Alunos[valor][2]);
  
    return 0;
};