#include <stdio.h>

#define TabuleiroT 10
#define Navio 3

int main() {

    int tabuleiro[TabuleiroT][TabuleiroT] = {0};

    int Navio_V[Navio] = {3, 3, 3};
    int Navio_H[Navio] = {3, 3, 3};

    int Linha_H = 1;
    int Coluna_H = 7;

    int Linha_V = 7;
    int Coluna_V = 2;

    int i;

    for ( i = 0; i < Navio; i++)
    {
     if (tabuleiro[Linha_H][Coluna_H + i] != 0)
     {
        printf("erro no posicionamento\n");
     }
        tabuleiro[Linha_H][Coluna_H + i] = Navio_H[i];
    };

    for ( i = 0; i < Navio; i++)
    {
     if (tabuleiro[Linha_V + i][Coluna_V] != 0)
     {
        printf("erro no posicionamento\n");
     }
        tabuleiro[Linha_V + i][Coluna_V] = Navio_V[i];
    };

    printf("   ");
    for ( i = 1; i <= TabuleiroT; i++)
    {
        printf("%2d ", i);
    };
    printf("\n");

    for ( int linha = 0; linha < TabuleiroT; linha++)
    { 
        printf(" %c ", 'A' + linha);
        for (int coluna = 0; coluna < TabuleiroT; coluna++)
        {
            printf(" %1d ", tabuleiro[linha][coluna]);
        };
       printf("\n");
    };
    
    
    


}