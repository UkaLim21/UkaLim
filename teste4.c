#include <stdio.h>

int main(){

    int opção;
    float nota1, nota2, nota3;
    float media;
    
    printf("Menu de Gerenciamento de Jogos\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opção);

    switch (opção)
    {
      case 1:
    printf("Calcular a Média\n");
    printf("Digite a Primeira nota\n");
    scanf("%f", &nota1);
    printf("Digite a Segunda nota\n");
    scanf("%f", &nota2);
    printf("Digite a Terceira nota\n"); 
    scanf("%f", &nota3);
if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)){
        media = (nota1 + nota2 + nota3) / 3;
    printf("A média é %.2f\n", media);
} else {
    printf("Entrada com valores errados\n");
}
    break;
      case 2:
    printf("Determinar Status\n");
    printf("Entrar com a média:\n");
    scanf("%f", &media);
    media >= 6 ? printf("Aprovado!\n") : printf("Reprovado!\n");
      break;
      case 3:
    printf("Saindo do Progama...\n");
        break;
    default: 
    printf("Opção inválida\n");
        break;
}

    return 0;
}