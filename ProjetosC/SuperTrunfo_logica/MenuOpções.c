#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Op;
    int NS, PP;

    printf("============================================\n");
    printf(" Menu Principal \n");
    printf(" 1. Iniciar jogo\n");
    printf(" 2. Exibir regras\n");
    printf(" 3. Sair\n");
    printf(" Escolha um numero para executar a acao: \n");
    printf("============================================\n");
    scanf("%d", &Op);

    switch (Op) {
        case 1:
            srand(time(0));
            NS = rand() % 10 + 1; // Gera número de 1 a 10
            printf("Tente adivinhar o numero secreto (1 a 10): \n");
            scanf("%d", &PP);

            if (PP == NS) {
                printf("Parabens, voce acertou o numero secreto! \n");
                printf("O numero era %d \n", NS);
            } else {
                printf("Voce errou o numero secreto! \n");
                printf("O numero era %d \n", NS);
            }
            break;

        case 2:
            printf("Voce deve escrever um numero aleatorio de 1 a 10 \n");
            printf("E ver se voce acertou o numero aleatorio\n");
            break;

        case 3:
            printf("Saindo do jogo\n");
            break;

        default:
            printf("Numero selecionado invalido\n");
            break;
    }

    return 0;
}
