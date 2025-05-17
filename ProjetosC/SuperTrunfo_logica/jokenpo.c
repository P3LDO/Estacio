#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int EJ, EM;
    srand(time(0));

    printf("Jogo de jokenpo \n");
    printf("Escolha uma Opcao \n");
    printf("1. pedra\n");
    printf("2. papel\n");
    printf("3. tesoura\n");
    printf("Digite o numero corespondente\n");
    scanf("%d", &EJ);

    EM = rand() % 3 +1;

    switch (EJ)
    {
    case 1:
        printf("Voce escolheu pedra! X ");
        break;
    case 2:
        printf("Voce escolheu papel! X ");
        break;
    case 3:
        printf("Voce escolheu tesoura! X ");
        break;
    
    default:
        printf("Escolheu um numero invalido");
        break;
    };

    switch (EM)
    {
    case 1:
        printf("A maquina escolheu pedra!\n");
        break;
    case 2:
        printf("A maquina escolheu papel!\n");
        break;
    case 3:
        printf("A maquina escolheu tesoura!\n");
        break;
    
    default:
        printf("A maquina escolheu um numero invalido");
        break;
    };

    if (EJ == EM)
    {
        printf("DEU EMPATE!!!");

    } else if (((EJ == 1) && (EM == 3)) || 
               ((EJ == 2) && (EM == 1)) || 
               ((EJ == 3) && (EM == 2)))
    {
        printf("Voce venceu o jogo!!!");

    } else {

        printf("======Voce perdeu o jogo!!!======");

    }

    return 0;

}