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
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

   
    int k = 1;
    int movimentosRainha = 8;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentosRainha);

    int passosBaixo = 2;
    int passosEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    
    for (int m = 1; m <= passosBaixo; m++) {
        printf("Baixo\n");
    }

   
    int n = 1;
    while (n <= passosEsquerda) {
        printf("Esquerda\n");
        n++;
    }

    return 0;
}