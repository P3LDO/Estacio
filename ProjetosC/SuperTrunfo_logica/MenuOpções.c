#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu() {
    int Op;
    int NS, PP;

    printf("============================================\n");
    printf(" Menu Principal \n");
    printf(" 1. Iniciar jogo\n");
    printf(" 2. Exibir regras\n");
    printf(" 3. Sair");
    printf(" Escolha um numero para executar a acao: \n");
    printf("============================================\n");
    scanf("%d", &Op);

    switch (Op)
    {
    case 1:
        srand(time(0));
        NS = rand() % 10;
        printf("Tente adivinhar o numero secreto: ");
        scanf("%d", &PP);

        if (PP == NS)
        {
            printf("Parabens, voce acertou o numero secreto!");
            printf("O numero era %d", NS);
        } else {
            printf("Voce errou o numero secreto!");
            printf("O numero era %d", NS);
        }
        
        break;
    
    default:
        break;
    }

    return 0;
}