#include <stdio.h>

#define TAM 10        // Tamanho do tabuleiro (10x10)
#define TAM_NAVIO 3   // Tamanho fixo dos navios
#define TAM_HAB 5     // Tamanho fixo das matrizes de habilidades (5x5)
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

// ----------------------------
// Função para exibir tabuleiro
// ----------------------------
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == AGUA) printf("~ ");       // Água
            else if (tabuleiro[i][j] == NAVIO) printf("N "); // Navio
            else if (tabuleiro[i][j] == HABILIDADE) printf("* "); // Área da habilidade
        }
        printf("\n");
    }
}

// ----------------------------
// Gera matriz de Cone
// ----------------------------
void gerarCone(int habilidade[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (j >= (TAM_HAB/2 - i) && j <= (TAM_HAB/2 + i)) {
                habilidade[i][j] = 1; // Marca a área do cone
            } else {
                habilidade[i][j] = 0;
            }
        }
    }
}

// ----------------------------
// Gera matriz de Cruz
// ----------------------------
void gerarCruz(int habilidade[TAM_HAB][TAM_HAB]) {
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == centro || j == centro) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }
}

// ----------------------------
// Gera matriz de Octaedro (losango)
// ----------------------------
void gerarOctaedro(int habilidade[TAM_HAB][TAM_HAB]) {
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }
}

// ----------------------------
// Sobrepõe matriz de habilidade ao tabuleiro
// ----------------------------
void aplicarHabilidade(int tabuleiro[TAM][TAM], int habilidade[TAM_HAB][TAM_HAB], int origemX, int origemY) {
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (habilidade[i][j] == 1) {
                int x = origemX + (i - centro);
                int y = origemY + (j - centro);
                if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                    if (tabuleiro[x][y] == AGUA) {
                        tabuleiro[x][y] = HABILIDADE; // Marca área da habilidade
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0};  // Tudo começa com água (0)

    // ----------------------------
    // Posicionamento dos navios
    // ----------------------------
    int linhaHorizontal = 2, colunaHorizontal = 4; // Navio horizontal
    int linhaVertical   = 6, colunaVertical   = 1; // Navio vertical
    int linhaDiagonal1  = 0, colunaDiagonal1  = 0; // Navio diagonal principal
    int linhaDiagonal2  = 0, colunaDiagonal2  = 9; // Navio diagonal secundária

    // Horizontal
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;

    // Vertical
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;

    // Diagonal principal (\)
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = NAVIO;

    // Diagonal secundária (/)
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = NAVIO;

    // ----------------------------
    // Habilidades
    // ----------------------------
    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    gerarCone(cone);
    gerarCruz(cruz);
    gerarOctaedro(octaedro);

    // Aplicando habilidades em pontos específicos
    aplicarHabilidade(tabuleiro, cone, 4, 4);
    aplicarHabilidade(tabuleiro, cruz, 7, 7);
    aplicarHabilidade(tabuleiro, octaedro, 5, 2);

    // ----------------------------
    // Exibir resultado final
    // ----------------------------
    printf("\n=== TABULEIRO FINAL ===\n\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
