#include <stdio.h>

int main() {
   
    int i;
    int movimentosTorre = 5; 
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    int j = 1;
    int movimentosBispo = 5;
    printf("\nMovimento do Bispo:\n");
    while (j <= movimentosBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    int k = 1;
    int movimentosRainha = 8;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentosRainha);

    return 0;
}