#include <stdio.h>

int N1, N2;

int soma, subtracao, multiclicacao, divisao;

int main() {

    printf("digite o valor do primeiro numero\n");
    scanf("%d", &N1);

    printf("digite o valor do segundo numero\n");
    scanf("%d", &N2);

    soma = N1 + N2;

    subtracao = N1 - N2;

    multiclicacao = N1 * N2;

    divisao = N1 / N2;

    printf("o valor da soma deles e: %d \n", soma);
    printf("o valor da diferenca deles e: %d\n", subtracao);
    printf("o valor da multiplicação deles e: %d\n", multiclicacao);
    printf("o valor da divisao deles e: %d\n", divisao);



}