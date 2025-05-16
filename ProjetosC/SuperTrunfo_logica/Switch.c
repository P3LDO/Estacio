#include <stdio.h>

int main() {

    int dia;

    printf("Digite qual e o dia da semana entre 1 e 7:");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Hoje e Domingo");
        break;
    case 2:
        printf("Hoje e segunda");
        break;
    case 3:
        printf("Hoje e terca");
        break;
    case 4:
        printf("Hoje e quarta");
        break;
    case 5:
        printf("Hoje e quinta");
        break;
    case 6:
        printf("Hoje e sexta");
        break;
    case 7:
        printf("Hoje e sabado");
        break;
    default:
        printf("O dia que voce inseriu foi invalido");
        break;
    }

    return 0;
}