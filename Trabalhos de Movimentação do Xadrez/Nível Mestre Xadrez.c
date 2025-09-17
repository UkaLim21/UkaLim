#include <stdio.h>



void moverTorre(int casas) {
    if (casas == 0) return; 
    printf("Direita\n");    
    moverTorre(casas - 1);  
}


void moverRainha(int casas) {
    if (casas == 0) return; 
    printf("Esquerda\n");   
    moverRainha(casas - 1); 
}


void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispoRecursivo(vertical - 1, horizontal - 1);
}




void moverBispoLoops(int casasVerticais, int casasHorizontais) {
    for (int i = 1; i <= casasVerticais; i++) { 
        for (int j = 1; j <= casasHorizontais; j++) { 
            printf("Cima\n");
            printf("Direita\n");
            break; 
        }
    }
}


void moverCavalo(int movimentos) {
    int movimentosRealizados = 0;

    for (int i = 1; i <= movimentos; i++) { 
        for (int j = 1; j <= 2; j++) { 
            printf("Cima\n");
            movimentosRealizados++;
            if (movimentosRealizados > movimentos * 3) break; 
        }

        for (int k = 1; k <= 1; k++) { 
            printf("Direita\n");
            movimentosRealizados++;
        }

        if (movimentosRealizados >= movimentos * 3) break; 
    }
}



int main() {
    
    int movimentosTorre = 5;
    int movimentosRainha = 8;
    int movimentosBispo = 5;
    int movimentosCavalo = 3; 

    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(movimentosTorre);

    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainha(movimentosRainha);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(movimentosBispo, movimentosBispo);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(movimentosBispo, movimentosBispo);

    printf("\nMovimento do Cavalo (Loops Complexos):\n");
    moverCavalo(movimentosCavalo);

    return 0;
}