#include<stdio.h>

void MRainha(int M) {
    if (M > 0)
    {
        printf("ESQUERDA\n");
        MRainha (M - 1);
    };    
}

void MTORRE(int M) {
    if (M > 0)
    {
        printf("DIREITA\n");
        MTORRE (M - 1);
    };
    
}

void MBISPO(int M) {
    if (M > 0)
    {
        printf("DIREITA\n");
        printf("CIMA\n");
        MBISPO (M - 1);
    };
    
}

int main() {

    int Bispo, Torre, Rainha, cavalo;

    printf("A rainha vai se mover 8 casas para a esquerda\n");
    Rainha = 8;
    MRainha(Rainha);
    printf("\n");

    printf("A torre vai se andar 5 casas para a direita\n");
    Torre = 5;
    MTORRE(Torre);
    printf("\n");

    printf("O Bispo vai se andar 5 casas para a diagonal direita\n");
    Bispo = 5;
    MBISPO(Bispo);
    printf("\n");

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
    printf("\n");
    

    return 0;
    

}