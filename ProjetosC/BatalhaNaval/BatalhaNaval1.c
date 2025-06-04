#include <stdio.h>

#define TabuleiroT 10
#define Navio 3
#define Expecial 5

int main() {

    int tabuleiro[TabuleiroT][TabuleiroT] = {0};

    int Navio_V[Navio] = {3, 3, 3};
    int Navio_H[Navio] = {3, 3, 3};
    int Navio_DR[Navio] = {3, 3, 3};
    int Navio_DL[Navio] = {3, 3, 3};

    int Cone_H[Expecial][Expecial] = {{0, 0, 5, 0, 0},
                                     {0, 0, 5, 0, 0},
                                     {0, 5, 5, 5, 0},
                                     {0, 5, 5, 5, 0},
                                     {5, 5, 5, 5, 5}};

    int Cruz_H[Expecial][Expecial] = {{0, 0, 5, 0, 0},
                                     {0, 0, 5, 0, 0},   
                                     {5, 5, 5, 5, 5},
                                     {0, 0, 5, 0, 0},
                                     {0, 0, 5, 0, 0}};

    int Octa_H[Expecial][Expecial] = {{0, 0, 5, 0, 0},
                                     {0, 5, 5, 5, 0},
                                     {0, 5, 5, 5, 0},
                                     {0, 5, 5, 5, 0},
                                     {0, 0, 5, 0, 0}};


    int Linha_E = 0;
    int Coluna_E = 0;

    int Linha_DR = 9;
    int Coluna_DR = 0;

    int Linha_DL = 2;
    int Coluna_DL = 2;

    int Linha_H = 1;
    int Coluna_H = 7;

    int Linha_V = 7;
    int Coluna_V = 4;

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
     if (tabuleiro[Linha_V - i][Coluna_V] != 0)
     {
        printf("erro no posicionamento\n");
     }
        tabuleiro[Linha_V - i][Coluna_V] = Navio_V[i];
    };

    for ( i = 0; i < Navio; i++)
    {
     if (tabuleiro[Linha_DR - i][Coluna_DR + i] != 0)
     {
        printf("erro no posicionamento\n");
     }
        tabuleiro[Linha_DR - i][Coluna_DR + i] = Navio_DR[i];
    };

    for ( i = 0; i < Navio; i++)
    {
     if (tabuleiro[Linha_DL + i][Coluna_DL - i] != 0)
     {
        printf("erro no posicionamento\n");
     }
        tabuleiro[Linha_DL - i][Coluna_DL - i] = Navio_DL[i];
    };

    for ( int Coluna = 0; Coluna < Expecial; Coluna++)
    {
        for ( int Linha = 0; Linha < Expecial; Linha++)
        {   
            if (tabuleiro[Linha_E + Linha][Coluna_E + Coluna] == 3)
            {
                tabuleiro[Linha_E + Linha][Coluna_E + Coluna] = 1;
            }
            else if (tabuleiro[Linha_E + Linha][Coluna_E + Coluna] == 0)
            {
                tabuleiro[Linha_E + Linha][Coluna_E + Coluna] = Cruz_H[Linha_E + Linha][Coluna_E + Coluna];
            };
               
        };
        
    };
    


    printf("   ");
    for ( i = 1; i <= TabuleiroT; i++)
    {
        printf("%2d ", i);
    };
    
    printf("\n");

    for ( int coluna = 0; coluna < TabuleiroT; coluna++)
    { 
        printf(" %c ", 'A' + coluna);
        for (int linha = 0; linha < TabuleiroT; linha++)
        {
            printf(" %1d ", tabuleiro[linha][coluna]);
        };
       printf("\n");
    };

    
    
    


}