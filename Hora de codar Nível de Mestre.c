#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

 int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time (0));
    numeroComputador = rand() % 100 + 1;
    
    printf("Bem vindo ao Jogo Maior, Menor ou Igual\n");
    printf("Você deve escolher um número e o tipo de comparação\n");
    printf("M. Maior\n");
    printf("m. Menor\n");
    printf("I. Igual\n");
    
    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu Número (entre 1 a 100)");
    scanf("%d", &numeroJogador);

    

    switch (tipoComparacao)
    {
      case 'M':
    printf("Você escolheu a opção Maior!\n");
    resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
      case 'n':
     printf("Você escolheu a opção Menor!\n");
     resultado = numeroJogador < numeroComputador ? 1 : 0;
      break;
      case 'I':
     printf("Você escolheu a opção Igual!\n");
     resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default: 
    printf("Opção inválida\n");
        break;

     printf("O número do computador é:  %d e o Jogador é: %d\n", numeroComputador, numeroJogador);

        if (resultado == 1){
            printf("Você venceu!\n");
        } else {
            printf("Você perdeu\n");
        }








return 0;
}