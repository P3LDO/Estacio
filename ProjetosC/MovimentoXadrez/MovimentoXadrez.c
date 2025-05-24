#include<stdio.h>

int main() {

    int Bispo, Torre, Rainha, cavalo;

    //Movimento da Rainha//
    printf("A rainha vai se mover 8 casas para a direita\n");
    Rainha = 8;
    for (int i = 0; i < Rainha; i++)
    {
        printf("ESQUERDA\n");
    };

    printf("A torre vai se andar 5 casas para a direita\n");
    Torre = 5;
    for (int i = 0; i < Torre; i++)
    {
        printf("DIREITA\n");
    };

    printf("O Bispo vai se andar 5 casas para a diagonal direita\n");
    Bispo = 5;
    for (int i = 0; i < Bispo; i++)
    {
        printf("DIREITA\n");
        printf("CIMA\n");
    };

    printf("o CAVALO VAI ANDAR EM L PRA A ESQUERDA INFERIOR\n");
    cavalo = 1;
    for (int i = 0; i < cavalo; i++)
    {
        for (size_t i = 0; i < 2; i++)
        {
            printf("BAIXO\n");
        }
        printf("ESQUERDA\n");
    }
    

    return 0;
    

}