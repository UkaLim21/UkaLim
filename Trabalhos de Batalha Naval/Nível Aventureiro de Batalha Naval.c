
#include <stdio.h>

#define TAM 10        // Tamanho do tabuleiro (10x10)
#define TAM_NAVIO 3   // Tamanho fixo dos navios
#define AGUA 0
#define NAVIO 3

int main() {
    // ----------------------------
    // Inicialização do tabuleiro
    // ----------------------------
    int tabuleiro[TAM][TAM] = {0};  // Tudo começa com água (0)

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2, colunaHorizontal = 4; // Navio horizontal
    int linhaVertical   = 6, colunaVertical   = 1; // Navio vertical
    int linhaDiagonal1  = 0, colunaDiagonal1  = 0; // Navio diagonal principal
    int linhaDiagonal2  = 0, colunaDiagonal2  = 9; // Navio diagonal secundária

    // ----------------------------
    // Posicionamento do navio horizontal
    // ----------------------------
    if (colunaHorizontal + TAM_NAVIO <= TAM) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaHorizontal][colunaHorizontal + i] == AGUA) {
                tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;
            } else {
                printf("Erro: sobreposição detectada no navio horizontal.\n");
            }
        }
    } else {
        printf("Erro: navio horizontal não cabe no tabuleiro.\n");
    }

    // ----------------------------
    // Posicionamento do navio vertical
    // ----------------------------
    if (linhaVertical + TAM_NAVIO <= TAM) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaVertical + i][colunaVertical] == AGUA) {
                tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;
            } else {
                printf("Erro: sobreposição detectada no navio vertical.\n");
            }
        }
    } else {
        printf("Erro: navio vertical não cabe no tabuleiro.\n");
    }

    // ----------------------------
    // Posicionamento do navio diagonal principal (\)
    // ----------------------------
    if (linhaDiagonal1 + TAM_NAVIO <= TAM && colunaDiagonal1 + TAM_NAVIO <= TAM) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] == AGUA) {
                tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = NAVIO;
            } else {
                printf("Erro: sobreposição detectada no navio diagonal principal.\n");
            }
        }
    } else {
        printf("Erro: navio diagonal principal não cabe no tabuleiro.\n");
    }

    // ----------------------------
    // Posicionamento do navio diagonal secundária (/)
    // ----------------------------
    if (linhaDiagonal2 + TAM_NAVIO <= TAM && colunaDiagonal2 - (TAM_NAVIO - 1) >= 0) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] == AGUA) {
                tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = NAVIO;
            } else {
                printf("Erro: sobreposição detectada no navio diagonal secundária.\n");
            }
        }
    } else {
        printf("Erro: navio diagonal secundária não cabe no tabuleiro.\n");
    }

    // ----------------------------
    // Exibição do tabuleiro
    // ----------------------------
    printf("\n=== TABULEIRO ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); // Mostra o valor (0 = água, 3 = navio)
        }
        printf("\n");
    }

    return 0;
}
