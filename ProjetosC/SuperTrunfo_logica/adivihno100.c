#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int NM, NJ;
    char OP;

    srand(time(0));
    printf("digite um numero entre 1 e 10\n");
    scanf("%d", &NJ);

    NM = rand() % 10 + 1;

    printf("Digite o qual e o seu chute\n\n");
    printf("M. se voce acha que o seu numero vai ser maior que o aleatorio\n\n");
    printf("N. se voce acha que o seu numero vai ser menor que o aleatorio\n\n");
    printf("I. se voce acha que o seu numero vai ser igual o aleatorio\n\n");
    scanf(" %c", &OP);
    OP = toupper(OP);

    switch (OP)
    {
    case 'M':
        NJ > NM ? printf("parabens voce acertou\n") : printf("infelizmente voce errou\n");
        break;
    case 'N':
        NJ < NM ? printf("parabens voce acertou\n") : printf("infelizmente voce errou\n");
        break;
    case 'I':
        NJ == NM ? printf("parabens voce acertou\n") : printf("infelizmente voce errou\n");
        break;
    default:
        printf("Caractere digitado invalido\n");
        break;
    }
    printf("o numero que voce escolheu foi %d e o numero aleatorio era %d", NJ, NM);
    
    return 0;

}
