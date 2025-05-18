#include<stdio.h>

int main() {

    int Bispo, Torre, Rainha;

    //Movimento da Rainha//
    printf("A rainha vai se mover 8 casas para a direita\n");
    Rainha = 8;
    for (size_t i = 0; i < Rainha; i++)
    {
        printf("ESQUERDA\n");
    };

    printf("A torre vai se andar 5 casas para a direita\n");
    Torre = 5;
    for (size_t i = 0; i < Torre; i++)
    {
        printf("DIREITA\n");
    };

    printf("O Bispo vai se andar 5 casas para a diagonal direita\n");
    Bispo = 5;
    for (size_t i = 0; i < Bispo; i++)
    {
        printf("DIREITA\n");
        printf("CIMA\n");
    };

    return 0;
    

}