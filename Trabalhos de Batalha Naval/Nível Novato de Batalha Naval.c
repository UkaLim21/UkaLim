#include <stdio.h>

#define TAM 10        // Tamanho do tabuleiro (10x10)
#define TAM_NAVIO 3   
#define AGUA 0
#define NAVIO 3

int main() {
    
    int tabuleiro[TAM][TAM] = {0};

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2, colunaHorizontal = 4; // Navio horizontal começa em (2,4)
    int linhaVertical = 6, colunaVertical = 1;     // Navio vertical começa em (6,1)

    // ----------------------------
    // Posicionamento do navio horizontal
    // ----------------------------
    // Verifica se o navio cabe no tabuleiro
    if (colunaHorizontal + TAM_NAVIO <= TAM) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            // Marca no tabuleiro se a posição ainda for água
            if (tabuleiro[linhaHorizontal][colunaHorizontal + i] == AGUA) {
                tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;
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
            }
        }
    } else {
        printf("Erro: navio vertical não cabe no tabuleiro.\n");
    }

    // ----------------------------
    // Exibição do tabuleiro
    // ----------------------------
    printf("\n=== TABULEIRO ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); // Mostra o valor (0 = água, 3 = navio)
        }
        printf("\n"); // Quebra de linha para próxima linha do tabuleiro
    }

    return 0;
}
