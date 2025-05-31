#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

    // Coordenadas iniciais (linha e coluna)
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    int linha_vertical = 5;
    int coluna_vertical = 7;

    int i;
    // Posicionar navio horizontal
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_horizontal][coluna_horizontal + i] != 0) {
            printf("Erro: sobreposição detectada no navio horizontal.\n");
            return 1;
        }
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
    }

    // Posicionar navio vertical
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_vertical + i][coluna_vertical] != 0) {
            printf("Erro: sobreposição detectada no navio vertical.\n");
            return 1;
        }
        tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
    }

    // Exibir o cabeçalho numérico
    printf("   ");  // Espaço para alinhar com letras das linhas
    for (i = 1; i <= TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    // Exibir o tabuleiro com letras nas linhas
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        printf(" %c ", 'A' + linha);  // Letra da linha

        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf(" %d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
