#include <stdio.h>

int main() {
    // -------------------------------
    // Torre -> usar FOR
    // -------------------------------
    int i;
    int movimentosTorre = 5; // número de casas a percorrer
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Bispo -> usar WHILE
    // -------------------------------
    int j = 1;
    int movimentosBispo = 5;
    printf("\nMovimento do Bispo:\n");
    while (j <= movimentosBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // -------------------------------
    // Rainha -> usar DO-WHILE
    // -------------------------------
    int k = 1;
    int movimentosRainha = 8;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentosRainha);

    return 0;
}